// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AASCharacter;
struct FHitResult;
class UASDamageType;
struct FVector_NetQuantizeNormal;
struct FDamageEvent;
class AController;
class AActor;
struct FPointDamageEvent;
class UPrimitiveComponent;
#ifdef ACTIONSYSTEM_ASCharacter_generated_h
#error "ASCharacter.generated.h already included, missing '#pragma once' in ASCharacter.h"
#endif
#define ACTIONSYSTEM_ASCharacter_generated_h

#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_SPARSE_DATA
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_RPC_WRAPPERS \
	virtual bool ClientNotifyHit_Validate(AASCharacter* , const FHitResult , TSubclassOf<UASDamageType>  , float , FVector_NetQuantizeNormal ); \
	virtual void ClientNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection); \
	virtual bool ClientTakeDamage_Validate(float , const FDamageEvent , AController* , AActor* ); \
	virtual void ClientTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ClientTakePointDamage_Validate(float , const FPointDamageEvent , AController* , AActor* ); \
	virtual void ClientTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ServerNotifyHit_Validate(AASCharacter* , const FHitResult , TSubclassOf<UASDamageType>  , float , FVector_NetQuantizeNormal ); \
	virtual void ServerNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection); \
	virtual bool ServerTakeDamage_Validate(float , const FDamageEvent , AController* , AActor* ); \
	virtual void ServerTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ServerTakePointDamage_Validate(float , const FPointDamageEvent , AController* , AActor* ); \
	virtual void ServerTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execClientNotifyHit); \
	DECLARE_FUNCTION(execClientTakeDamage); \
	DECLARE_FUNCTION(execClientTakePointDamage); \
	DECLARE_FUNCTION(execJumpDamageState); \
	DECLARE_FUNCTION(execOnAttackOverlap); \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execServerNotifyHit); \
	DECLARE_FUNCTION(execServerTakeDamage); \
	DECLARE_FUNCTION(execServerTakePointDamage);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ClientNotifyHit_Validate(AASCharacter* , const FHitResult , TSubclassOf<UASDamageType>  , float , FVector_NetQuantizeNormal ); \
	virtual void ClientNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection); \
	virtual bool ClientTakeDamage_Validate(float , const FDamageEvent , AController* , AActor* ); \
	virtual void ClientTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ClientTakePointDamage_Validate(float , const FPointDamageEvent , AController* , AActor* ); \
	virtual void ClientTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ServerNotifyHit_Validate(AASCharacter* , const FHitResult , TSubclassOf<UASDamageType>  , float , FVector_NetQuantizeNormal ); \
	virtual void ServerNotifyHit_Implementation(AASCharacter* OtherCharacter, const FHitResult Impact, TSubclassOf<UASDamageType>  DamageTypeClass, float Damage, FVector_NetQuantizeNormal ShotDirection); \
	virtual bool ServerTakeDamage_Validate(float , const FDamageEvent , AController* , AActor* ); \
	virtual void ServerTakeDamage_Implementation(float Damage, const FDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
	virtual bool ServerTakePointDamage_Validate(float , const FPointDamageEvent , AController* , AActor* ); \
	virtual void ServerTakePointDamage_Implementation(float Damage, const FPointDamageEvent DamageEvent, AController* EventInstigator, AActor* DamageCauser); \
 \
	DECLARE_FUNCTION(execClientNotifyHit); \
	DECLARE_FUNCTION(execClientTakeDamage); \
	DECLARE_FUNCTION(execClientTakePointDamage); \
	DECLARE_FUNCTION(execJumpDamageState); \
	DECLARE_FUNCTION(execOnAttackOverlap); \
	DECLARE_FUNCTION(execOnRep_LastTakeHitInfo); \
	DECLARE_FUNCTION(execServerNotifyHit); \
	DECLARE_FUNCTION(execServerTakeDamage); \
	DECLARE_FUNCTION(execServerTakePointDamage);


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_EVENT_PARMS \
	struct ASCharacter_eventClientNotifyHit_Parms \
	{ \
		AASCharacter* OtherCharacter; \
		FHitResult Impact; \
		TSubclassOf<UASDamageType>  DamageTypeClass; \
		float Damage; \
		FVector_NetQuantizeNormal ShotDirection; \
	}; \
	struct ASCharacter_eventClientTakeDamage_Parms \
	{ \
		float Damage; \
		FDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	}; \
	struct ASCharacter_eventClientTakePointDamage_Parms \
	{ \
		float Damage; \
		FPointDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	}; \
	struct ASCharacter_eventServerNotifyHit_Parms \
	{ \
		AASCharacter* OtherCharacter; \
		FHitResult Impact; \
		TSubclassOf<UASDamageType>  DamageTypeClass; \
		float Damage; \
		FVector_NetQuantizeNormal ShotDirection; \
	}; \
	struct ASCharacter_eventServerTakeDamage_Parms \
	{ \
		float Damage; \
		FDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	}; \
	struct ASCharacter_eventServerTakePointDamage_Parms \
	{ \
		float Damage; \
		FPointDamageEvent DamageEvent; \
		AController* EventInstigator; \
		AActor* DamageCauser; \
	};


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_CALLBACK_WRAPPERS
#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAASCharacter(); \
	friend struct Z_Construct_UClass_AASCharacter_Statics; \
public: \
	DECLARE_CLASS(AASCharacter, AASCharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AASCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastTakeHitInfo=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastTakeHitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAASCharacter(); \
	friend struct Z_Construct_UClass_AASCharacter_Statics; \
public: \
	DECLARE_CLASS(AASCharacter, AASCharacterBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionSystem"), NO_API) \
	DECLARE_SERIALIZER(AASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AASCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LastTakeHitInfo=NETFIELD_REP_START, \
		NETFIELD_REP_END=LastTakeHitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASCharacter(AASCharacter&&); \
	NO_API AASCharacter(const AASCharacter&); \
public:


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AASCharacter(AASCharacter&&); \
	NO_API AASCharacter(const AASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AASCharacter)


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastTakeHitInfo() { return STRUCT_OFFSET(AASCharacter, LastTakeHitInfo); }


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_20_PROLOG \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_EVENT_PARMS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_RPC_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_INCLASS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_SPARSE_DATA \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_CALLBACK_WRAPPERS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_INCLASS_NO_PURE_DECLS \
	REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONSYSTEM_API UClass* StaticClass<class AASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID REDStrings_Plugins_ActionSystem_Source_ActionSystem_Public_ASCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
