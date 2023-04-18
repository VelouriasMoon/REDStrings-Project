// Copyright (c) 2018 CRI Middleware Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareApi.h"
#include "CriWareInitializer.h"
#include "Atom3dRegion.h"
#include "AtomComponent.h" // AISACパラメータのため

#include "Atom3dTransceiverComponent.generated.h"


class FAtom3dVector
{
public:
	FAtom3dVector() {};

	explicit FAtom3dVector(const FVector& Vector)
	{
		Data.x = Vector.X;
		Data.y = Vector.Y;
		Data.z = Vector.Z;
	}

	FAtom3dVector operator * (const float Scalar) const
	{
		FAtom3dVector ScaledVector = {};
		ScaledVector.Data.x = Data.x * Scalar;
		ScaledVector.Data.y = Data.y * Scalar;
		ScaledVector.Data.z = Data.z * Scalar;
		return ScaledVector;
	}

	CriAtomExVector Data;
};

/**
 * CRIWAREユーザがこのベースクラスを直接使用することはありません。
 */
class CRIWARERUNTIME_API FAtom3dAudioObjectBase
{
	// Base class for 3dSource, Transceiver, Listener
public:
	virtual ~FAtom3dAudioObjectBase() {};

	virtual void SetOutputPosition(const FAtom3dVector& Pos, const float DistanceFactor) = 0;
	virtual void SetOutputOrientation(const FAtom3dVector& Front, const FAtom3dVector& Top) = 0;
	virtual void UpdateStatus() = 0;

	virtual void SetRegion(TWeakObjectPtr<UAtom3dRegion> InRegion)
	{
		Region = InRegion;
	};

	TWeakObjectPtr<UAtom3dRegion> GetRegion() const
	{
		return Region;
	};

protected:
	virtual void AllocateResource() = 0;
	virtual void ReleaseResource() = 0;

protected:
	TWeakObjectPtr<UAtom3dRegion> Region; // 3dSource, Transceiver, Listener have region.
};

/**
 * Atom 3d Source Base コンポーネントのコア機能を表現するクラスです。
 * CRIWAREユーザがこのベースクラスを直接使用することはありません。
 */
class CRIWARERUNTIME_API FAtom3dSourceBase : public FAtom3dAudioObjectBase
{
public:
	virtual ~FAtom3dSourceBase() {};

	virtual void SetOutputVolumeScale(float InVolumeScale)
	{
		check((InVolumeScale >= 0.0f) && (InVolumeScale <= 1.0f));
		OutputVolumeScale = InVolumeScale;
	};

	virtual bool SetOutputMinMaxAttenuationDistance(float InMinDistance, float InMaxDistance, const float DistanceFactor)
	{
		check(DistanceFactor > 0);
		check((InMinDistance >= 0.0f) && (InMaxDistance >= 0.0f));
		// cm -> m
		MinDistance = InMinDistance * DistanceFactor;
		MaxDistance = InMaxDistance * DistanceFactor;
		return true;
	};

	virtual bool SetOutputInteriorPanField(float InTransceiverRadius, float InInteriorDistance, const float DistanceFactor)
	{
		check(DistanceFactor > 0);
		check((InTransceiverRadius >= 0.0f) && (InInteriorDistance >= 0.0f));
		// cm -> m
		SourceDistance = InTransceiverRadius * DistanceFactor;
		InteriorDistance = InInteriorDistance * DistanceFactor;
		return true;
	};

	virtual void SetDistanceAisacControl(const char* InGlobalAisacName) = 0;
	virtual void SetOutputBasedAzimuthAngleAisacControl(const char* InAisacControlName) = 0;
	virtual void SetOutputBasedElevationAngleAisacControl(const char* InAisacControlName) = 0;
	virtual void SetListenerBasedAzimuthAngleAisacControl(const char* InAisacControlName) = 0;
	virtual void SetListenerBasedElevationAngleAisacControl(const char* InAisacControlName) = 0;

	float GetOutputVolumeScale() const { return OutputVolumeScale; };
	float GetMinDistance(const float DistanceFactor) const { check(DistanceFactor > 0); return MinDistance / DistanceFactor; }; // m -> cm
	float GetMaxDistance(const float DistanceFactor) const { check(DistanceFactor > 0); return MaxDistance / DistanceFactor; }; // m -> cm
	float GetSourceDistance(const float DistanceFactor) const { check(DistanceFactor > 0); return SourceDistance / DistanceFactor; }; // m -> cm
	float GetInteriorDistance(const float DistanceFactor) const { check(DistanceFactor > 0); return InteriorDistance / DistanceFactor; }; // m -> cm

protected:
	// Atom native runtime does not have getter for these values.

	// VolumeScale is just scale value (0.0f - 1.0f)
	float OutputVolumeScale;

	// in meter [m]
	float MinDistance;
	float MaxDistance;
	float SourceDistance;
	float InteriorDistance;
};

/**
 * Atom 3d Transceiver コンポーネントのコア機能を表現するクラスです。
 * CRIWAREユーザがこのベースクラスを直接使用することはありません。
 */
class CRIWARERUNTIME_API FAtom3dTransceiver final : public FAtom3dSourceBase
{
public:
	FAtom3dTransceiver() : Handle(NULL) {};
	virtual ~FAtom3dTransceiver() { ReleaseResource(); };
	CriAtomEx3dTransceiverHn GetHandle();

	virtual void SetOutputPosition(const FAtom3dVector& Pos, const float DistanceFactor) override;
	virtual void SetOutputOrientation(const FAtom3dVector& Front, const FAtom3dVector& Top) override;
	virtual void SetRegion(TWeakObjectPtr<UAtom3dRegion> InRegion) override;
	virtual void UpdateStatus() override;
	virtual void SetOutputVolumeScale(float InVolumeScale) override;
	virtual bool SetOutputMinMaxAttenuationDistance(float InMinDistance, float InMaxDistance, const float DistanceFactor) override;
	virtual bool SetOutputInteriorPanField(float InTransceiverRadius, float InInteriorDistance, const float DistanceFactor) override;
	virtual void SetDistanceAisacControl(const char* InGlobalAisacName) override;
	virtual void SetOutputBasedAzimuthAngleAisacControl(const char* InAisacControlName) override;
	virtual void SetOutputBasedElevationAngleAisacControl(const char* InAisacControlName) override;
	virtual void SetListenerBasedAzimuthAngleAisacControl(const char* InAisacControlName) override;
	virtual void SetListenerBasedElevationAngleAisacControl(const char* InAisacControlName) override;

	void SetInputPosition(const FAtom3dVector& Pos, const float DistanceFactor);
	void SetInputOrientation(const FAtom3dVector& Front, const FAtom3dVector& Top);
	bool SetInputCrossfadeField(float InDirectAudioRadius, float InCrossfadeDistance, const float DistanceFactor);
	void AttachAisac(const char* InGlobalAisacName);
	void DetachAisac(const char* InGlobalAisacName);
	float GetDirectAudioRadius(const float DistanceFactor) const;
	float GetCrossfadeDistance(const float DistanceFactor) const;

protected:
	virtual void AllocateResource() override;
	virtual void ReleaseResource() override;

protected:
	static const uint32 HANDLE_WORK_SIZE = 1024;
	uint8 HandleWork[HANDLE_WORK_SIZE];
	CriAtomEx3dTransceiverHn Handle;

	// 単位はメートル[m]
	float DirectAudioRadius;
	float CrossfadeDistance;
};

#if WITH_EDITOR
class FDebugSphereUtil
{
public:
	class FDebugShphereInfo {
	public:
		FDebugShphereInfo(UDrawSphereComponent** InComponentPtrRef = nullptr, float InRadius = 0.0f, FLinearColor InColor = FLinearColor(0.0f, 0.0f, 0.0f))
			: ComponentPtrRef(InComponentPtrRef)
			, Radius(InRadius)
			, Color(InColor) {};

		// Not UPROPERTY。何も所有しない
		class UDrawSphereComponent** ComponentPtrRef;
		float Radius;
		FLinearColor Color;
	};

	// デバッグ用のスフィアを作成する。主に距離減衰範囲を可視化するために使う
	static UDrawSphereComponent* CreateSphereComponent(USceneComponent* Parent, float SphereRadius, const FLinearColor & SphereColor);
	// 最大、最小減衰距離を可視化するようなスフィアのペアを作る
	static void CreateNestedSphereComponents(USceneComponent* Parent,  FDebugShphereInfo&& InnerSphereInfo, FDebugShphereInfo&& OuterSphereInfo);
	static void DestroyNestedSphereComponents(UDrawSphereComponent*& InnnerSphereComponent, UDrawSphereComponent*& OuterSphereComponent);
	static void UpdateRadiusForNestedSphereComponents(FDebugShphereInfo&& InnerSphereInfo, FDebugShphereInfo&& OuterSphereInfo);
};
#endif // WITH_EDITOR


/**
 * 3D音源コンポーネントのベースクラスです。
 * 本クラスは Atom 3d Transcever のベースですが、CRIWAREユーザがこのベースクラスを直接使用することはありません。
 * 基本的には Atom 3d Transcever クラスを介して、間接的に本クラスの機能にアクセスします。
 */
UCLASS(ClassGroup = (CRIWARE, Common),
	hidecategories = (Object, ActorComponent, Physics, Rendering, Mobility, LOD),
	ShowCategories = Trigger)
class CRIWARERUNTIME_API UAtom3dSourceBaseComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UAtom3dSourceBaseComponent(const FObjectInitializer& ObjectInitializer);

public:
	UFUNCTION(BlueprintCallable, Category = "Atom3dSource")
	void SetRegion(UAtom3dRegion* InRegion);

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) final;
	virtual void OnRegister() override;
	virtual void BeginDestroy() override;

	FORCEINLINE float GetMinDistance() const { check(Source); return Source->GetMinDistance(DistanceFactor); };
	FORCEINLINE float GetMaxDistance() const { check(Source); return Source->GetMaxDistance(DistanceFactor); };
	FORCEINLINE float GetSourceDistance() const { check(Source); return Source->GetSourceDistance(DistanceFactor); };
	FORCEINLINE float GetInteriorDistance() const { check(Source); return Source->GetInteriorDistance(DistanceFactor); };

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource", meta = (DisplayName = "Output Volume Scale", ToolTip = "Sets the volume of the 3D sound source.", ClampMin = "0.0", ClampMax = "1.0"))
	float DefaultOutputVolumeScale;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|Region", meta = (ToolTip = "Atom 3d Sound Region"))
	UAtom3dRegion* DefaultRegion;

	/**
	* Attenuation Distance Field を可視化するスフィアの表示の有無を示すフラグです。
	* このフラグを true にした場合、コンソール変数 cri.showsoundlocation を 1 にすることで、
	* Attenuation Distance Field を可視化できます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|Attenuation", meta = (DisplayName = "Visible", ToolTip = "Show debug sheres for Min/Max attenuation distance visualization."))
	uint8 bIsAttenuationDistanceDebugSpheresVisible : 1;

	/**
	* Attenuation Distance Field の最小減衰距離です。
	* リスナーが最小減衰距離の内側に位置している場合、3D音源の音量は最大化されます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|Attenuation", meta = (DisplayName = "Min Distance", ToolTip = "The distance at which the volume will not get any louder.", ClampMin = "0.0"))
	float DefaultMinAttenuationDistance;

	/**
	* Attenuation Distance Field の最大減衰距離です。
	* リスナーと音源の距離が最大減衰距離に近づくほど、3D音源の音量は減少します。最大減衰距離の外側では音量は0になります。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|Attenuation", meta = (DisplayName = "Max Distance", ToolTip = "The distance to the minimum volume.", ClampMin = "0.0"))
	float DefaultMaxAttenuationDistance;

	/**
	* Interior Pan Field を可視化するスフィアの表示の有無を示すフラグです。
	* このフラグを true にした場合、コンソール変数 cri.showsoundlocation を 1 にすることで、
	* Interior Pan Field を可視化できます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|OutputInteriorPan", meta = (DisplayName = "Visible", ToolTip = "Show debug sheres for visualization of Output-Interior-Pan-Field."))
	uint8 bIsOutputInteriorPanFieldDebugSpheresVisible : 1;

	/**
	* Interior Pan Field の3Dソース半径です。
	* トランシーバの場合、これはトランシーバ半径を意味します。
	* リスナーがソース半径の内側に位置している場合、3D音声は全てのスピーカから同じ音量で出力されます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|OutputInteriorPan", meta = (DisplayName = "Source Radius", ToolTip = "Within this distance from the 3d source location, all speakers will play audio at the same volume.", ClampMin = "0.0"))
	float DefaultSourceRadius;

	/**
	* Interior Pan Field のインテリア距離です。
	* リスナーがインテリア距離の内側かつソース半径の外側に位置している場合、3D音声は3つ以上のスピーカから出力されます。
	* 出力される音声がどのスピーカからどの程度の音量であるかは、音源とリスナーの位置関係によって変化します。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|OutputInteriorPan", meta = (DisplayName = "Interior Distance", ToolTip = "Within the range of 3d source radius to interior distance, interior panning is enabled.", ClampMin = "0.0"))
	float DefaultInteriorDistance;

	/**
	* 距離 AISAC コントロールです。
	* 3D音源からリスナーまでの距離に応じて距離 AISAC コントロール値は変化します。
	* 距離とコントロール値の変化の対応関係は、AtomCraft 上でデザインされた AISAC グラフカーブに依存します。
	* この AISAC コントロールによって実際に音の変化を生じさせるには、グローバル AISAC の設定が必要です。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dSource|Aisac", meta = (DisplayName = "Distance Aisac Contorl", ToolTip = "Aisac control names linked to distance decay between minimum and maximum distances."))
	TArray<FString> DefaultDistanceAisacControls;

	/**
	* 音源基準方位角 AISAC コントロールです。
	* 音源を基準としたリスナーの方位角に応じて距離 AISAC コントロール値は変化します。
	* 角度とコントロール値の変化の対応関係は、AtomCraft 上でデザインされた AISAC グラフカーブに依存します。
	* この AISAC コントロールによって実際に音の変化を生じさせるには、グローバル AISAC の設定が必要です。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dSource|Aisac|Output Based", meta = (DisplayName = "Azimuth Angle Aisac Contorl", ToolTip = "Aisac control names linked to the azimuth of the listener with respect to the output point."))
	TArray<FString> DefaultOutputBasedAzimuthAngleAisacControls;

	/**
	* 音源基準仰俯角 AISAC コントロールです。
	* 音源を基準としたリスナーとの仰俯角に応じて距離 AISAC コントロール値は変化します。
	* 角度とコントロール値の変化の対応関係は、AtomCraft 上でデザインされた AISAC グラフカーブに依存します。
	* この AISAC コントロールによって実際に音の変化を生じさせるには、グローバル AISAC の設定が必要です。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dSource|Aisac|Output Based", meta = (DisplayName = "Elevation Angle Aisac Contorl", ToolTip = "Aisac control names linked to the elevation angle of the listener with respect to the output point."))
	TArray<FString> DefaultOutputBasedElevationAngleAisacControls;

	/**
	* リスナー基準方位角 AISAC コントロールです。
	* リスナーを基準とした音源の方位角に応じて距離 AISAC コントロール値は変化します。
	* 角度とコントロール値の変化の対応関係は、AtomCraft 上でデザインされた AISAC グラフカーブに依存します。
	* この AISAC コントロールによって実際に音の変化を生じさせるには、グローバル AISAC の設定が必要です。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dSource|Aisac|Listener Based", meta = (DisplayName = "Azimuth Angle Aisac Contorl", ToolTip = "Aisac control names linked to the azimuth of the output point with respect to the listener."))
	TArray<FString> DefaultListenerBasedAzimuthAngleAisacControls;

	/**
	* リスナー基準仰俯角 AISAC コントロールです。
	* リスナーを基準とした音源の仰俯角に応じて距離 AISAC コントロール値は変化します。
	* 角度とコントロール値の変化の対応関係は、AtomCraft 上でデザインされた AISAC グラフカーブに依存します。
	* この AISAC コントロールによって実際に音の変化を生じさせるには、グローバル AISAC の設定が必要です。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dSource|Aisac|Listener Based", meta = (DisplayName = "Elevation Angle Aisac Contorl", ToolTip = "Aisac control names linked to the elevation angle of the output point with respect to the listener."))
	TArray<FString> DefaultListenerBasedElevationAngleAisacControls;

	/**
	* デバッグ用の詳細情報の表示の有無を示すフラグです。
	* このフラグを true にした場合、コンソール変数 cri.showsoundlocation を 1 にすることで、
	* この音源コンポーネントとリスナーの位置関係や適用されているリージョンを可視化できます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dSource|Details", meta = (DisplayName = "Visible", ToolTip = "Show detail information in running."))
	uint8 bIsDebugStringsForDetailsVisible : 1;

protected:
	virtual void OnUpdateTransform(EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport = ETeleportType::None) final;

	virtual void InitializeSource();

	/* 定期処理 */
	virtual void OnTickComponent(float DeltaTime = 0.0f); // インタフェースにしてよさそう

	virtual void PostInitProperties() override;

	bool IsShowSoundLocation() const;

	void ReloadRegion();

	float DistanceFactor;
	TUniquePtr<FAtom3dSourceBase> Source;

	FDelegateHandle DelegateOnRegionHandleChanged;

private:
	void UpdateTransform(bool bHasOwner = false);

	// 音源の出力座標と方向を指定
	// 常にこの Component のトランスフォームが位置・向きとして反映される
	void SetOutputPositionAndOrientation(const AActor* const Owner = nullptr);

	uint8 bTransformUpdated : 1;

#if WITH_EDITOR
public:

	// ここで音源表示関連のコンポーネントを破棄する
	virtual void OnAttachmentChanged() override;

	static const FColor FRONT_DIRECTION_ARROW_COLOR_DEFAULT;
	static const FColor TOP_DIRECTION_ARROW_COLOR_DEFAULT;

protected:

	virtual void RegisterDebugSpriteComponent();
	virtual void DestroyDebugComponents();

	/* スプライト表示フラグの設定 */
	void SetSpriteShowFlags();

	bool IsExistInAnimationEditor() const;

	// スピーカーアイコンの更新
	virtual void UpdateSpriteTexture();

	// デバッグスフィアとアローの情報を更新
	virtual void UpdateVisualDebugInfo();

	// 音源のリージョン名を表示
	FString GetDebugStringOfRegionName(const AActor* const SourceActor);

	// 音源の最も近くに位置するリスニングポイントへの方位角を表示
	FString GetDebugStringOfOutputBasedAzimuthAngleToNearestListeningPoint(const AActor* const SourceActor);

	// 音源の最も近くに位置するリスニングポイントへの仰角を表示
	FString GetDebugStringOfOutputBasedElevationAngleToNearestListeningPoint(const AActor* const SourceActor);

	// 音源の向き(Orientation)を描画。Front と Topを矢印で可視化する
	void DrawDebugArrowsForFrontAndTopOf3dSourceActor(const AActor* const SourceActor);

private:
	// アニメーションエディタ時のスプライト表示フラグ
	static bool bAnimSpriteShowFlags;

#endif // WITH_EDITOR

#if WITH_EDITORONLY_DATA
protected:
	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize minimum attenuation distance."))
	class UDrawSphereComponent* SphereComponentForOutputAttenuationDistanceMin;

	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize maximum attenuation distance."))
	class UDrawSphereComponent* SphereComponentForOutputAttenuationDistanceMax;

	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize transceiver radius."))
	class UDrawSphereComponent* SphereComopnentForOutputInteriorPanDisabled;

	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize interior distance."))
	class UDrawSphereComponent* SphereComopnentForOutputInteriorPanEnabled;
#endif // WITH_EDITORONLY_DATA
};


/**
 * Atom 3d Transcever として動作するコンポーネントクラス
 *
 * Atom 3d Source と共通の処理やデータは基底クラス UAtom3dAudioObjectComponent 側に持たせてある。
 * 基底が持つ Source ポインタが Atom 3d 音源のポリモーフィズム表現であり、本クラスでは Transceiver としてメモリ確保する。
 * 本クラスでは Atom 3d Source に対する Atom 3d Transceiver としての差分機能のみを定義し、
 * Source に触れる場合は Atom 3d Transcenver オブジェクトとしてダウンキャストして使用する。
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRIWARERUNTIME_API UAtom3dTransceiverComponent final : public UAtom3dSourceBaseComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAtom3dTransceiverComponent(const FObjectInitializer& ObjectInitializer);

	virtual void OnRegister() override;

	/**
	* Input Crossfade Field の直接音領域を取得します。
	*/
	float GetDirectAudioRadius() const { check(Source); return StaticCast<FAtom3dTransceiver*>(Source.Get())->GetDirectAudioRadius(DistanceFactor); };

	/**
	* Input Crossfade Field のクロスフェード距離を取得します。
	*/
	float GetCrossfadeDistance() const { check(Source); return StaticCast<FAtom3dTransceiver*>(Source.Get())->GetCrossfadeDistance(DistanceFactor); };

	/**
	* トランシーバの入力座標と方向を与えるアクターです。
	* 未指定の場合はこのUAtom3dTransceiverComponentの座標と向きが設定されます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Atom3dTransceiver")
	AActor* InputPoint;

	/**
	* この UAtom3dTransceiverComponent がデフォルトで使用するグローバルAISACです。
	* グローバルAISACによる音声変化を実現するには、AISACコントロール値を設定する必要があります。
	*/
	UPROPERTY(EditAnywhere, Category = "Atom3dTransceiver|Aisac", meta = (DisplayName = "Grobal Aisac", ToolTip = "You need to set the AISAC control value."))
	TArray<FString> DefaultGlobalAisacs;

	/**
	* Input Crossfade Field を可視化するスフィアの表示の有無を示すフラグです。
	* このフラグを true にした場合、コンソール変数 cri.showsoundlocation を 1 にすることで、
	* Input Crossfade Field を可視化できます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dTransceiver|InputCrossFade", meta = (DisplayName = "Visible", ToolTip = "Show debug sheres for visualization of Input-Crossfade-Field."))
	uint8 bIsInputCrossfadeFieldDebugSpheresVisible : 1;

	/**
	* Input Crossfade Field の直接音領域の半径です。
	* リスナーが直接音領域の内側に位置している場合、リスナーが聴く音声はトランシーバではなく
	* 3D音源本体の位置に音像を結びます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dTransceiver|InputCrossFade", meta = (DisplayName = "Default Direct Audio Radius", ToolTip = "Within this distance from the 3d source location, the audio is played directly from the 3d sound source.", ClampMin = "0.0"))
	float DefaultDirectAudioRadius;

	/**
	* Input Crossfade Field のクロスフェード距離です。
	* トランシーバを中心にクロスフェード距離の範囲内かつ直接音領域の外にリスナーが位置している場合、
	* リスナーが効く音声はトランシーバと3D音源本体の中間的な位置に音像を結びます。
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Atom3dTransceiver|InputCrossFade", meta = (DisplayName = "Default Crossfade Distance", ToolTip = "Within the range of direct audio radius to crossfade distance, the audio output crossfades between the 3d sound source and the transceiver.", ClampMin = "0.0"))
	float DefaultCrossfadeDistance;

protected:
	virtual void InitializeSource() override;

	// 定期処理
	virtual void OnTickComponent(float DeltaTime = 0.0f) override;

	// 音源への入力ポイントの座標と方向を指定
	void SetInputPositionAndOrientation(const AActor* const Owner = nullptr, const AActor* const TargetActor = nullptr);

#if WITH_EDITORONLY_DATA
protected:
	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize transceiver radius."))
	class UDrawSphereComponent* SphereComopnentForInputCrossfadeDisabled;

	UPROPERTY(transient, meta = (ToolTip = "Sphere Component to visualize interior distance."))
	class UDrawSphereComponent* SphereComopnentForInputCrossfadeEnabled;

#endif //WITH_EDITORONLY_DATA

#if WITH_EDITOR
public:
	static const FColor IN_OUT_LINKED_ARROW_COLOR_DEFAULT;

protected:
	// トランシーバ用のアイコンを表示
	virtual void UpdateSpriteTexture() override;
	virtual void UpdateVisualDebugInfo() override;

#endif // WITH_EDITOR
};
