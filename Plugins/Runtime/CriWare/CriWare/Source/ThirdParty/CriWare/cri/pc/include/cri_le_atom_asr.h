/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2010-2017 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Atom
 * Module   : Library User's Header
 * File     : cri_atom_asr.h
 *
 ****************************************************************************/
/*!
 *	\file		cri_atom_asr.h
 */

/* 多重定義防止					*/
/* Prevention of redefinition	*/
#ifndef	CRI_ATOM_ASR_H_INCLUDED
#define	CRI_ATOM_ASR_H_INCLUDED

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
#include "cri_le_xpt.h"
#include "cri_le_atom.h"
#include "cri_le_atom_ex.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/
/*JP
 * \brief 最大チャンネル数
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASRが処理可能な最大チャンネル数です。
 */
#define CRIATOMEXASR_MAX_CHANNELS		(8)

/*JP
 * \brief デフフォルトのバス数
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * デフォルトのバス数です。
 */
#define CRIATOMEXASR_DEFAULT_NUM_BUSES	(8)

/*JP
 * \brief 最大チャンネル数
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASRが処理可能な最大バス数です。
 */
#define CRIATOMEXASR_MAX_BUSES			(64)

/*JP
 * \brief デフォルトASRラックID
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * 初期化時に自動的に作成されるASRラックIDです。 <br>
 * \sa criAtomExAsrRack_Create, criAtomExAsrRack_Destroy
 */
#define CRIATOMEXASR_RACK_DEFAULT_ID	(0)

/*JP
 * \brief 不正なラックID
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ::criAtomExAsrRack_Create 関数に失敗した際に返る値です。 <br>
 * \sa criAtomExAsrRack_Create, criAtomExAsrRack_Destroy
 */
#define CRIATOMEXASR_RACK_ILLEGAL_ID	(-1)

/*JP
 * \brief ユーザ定義エフェクトインターフェースの最大登録数
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * 登録可能なユーザ定義エフェクトインターフェースの最大数です。<br>
 * \sa  criAtomExAsr_RegisterEffectInterface, criAtomExAsr_UnregisterEffectInterface
 */
#define CRIATOMEXASR_MAX_NUM_USER_EFFECT_INTERFACES	(256)

/*==========================================================================
 *      CRI ASRバスエフェクト名
 *=========================================================================*/
/*JP
 * \brief 振幅解析器のエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_AMPLITUDE_ANALYZER_NAME		"CRIWARE/AmplitudeAnalyzer"

/*JP
 * \brief バス・バッファープールのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_BUS_BUFFER_POOL                "CRIWARE/BusBufferPool"

/*JP
 * \brief バイクアッドフィルターのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_BIQUAD_FILTER_NAME				"CRIWARE/Biquad"

/*JP
 * \brief バンドパスフィルター（2次のバターワースフィルター）のエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_BANDPASS_FILTER_NAME			"CRIWARE/Bandpass"

/*JP
 * \brief コーラスのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_CHORUS_NAME					"CRIWARE/Chorus"

/*JP
 * \brief フランジャーのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_FLANGER_NAME					"CRIWARE/Flanger"

/*JP
 * \brief コンプレッサーのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_COMPRESSOR_NAME				"CRIWARE/Compressor"

/*JP
 * \brief リミッタのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_LIMITER_NAME					"CRIWARE/Limiter"

/*JP
 * \brief ディレイのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_DELAY_NAME						"CRIWARE/Delay"

/*JP
 * \brief エコーのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_ECHO_NAME						"CRIWARE/Echo"

/*JP
 * \brief マルチタップディレイのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_MULTITAP_DELAY_NAME			"CRIWARE/MultiTapDelay"

/*JP
 * \brief ディストーションのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_DISTORTION_NAME				"CRIWARE/Distortion"

/*JP
 * \brief I3DL2リバーブのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_I3DL2_REVERB_NAME				"CRIWARE/I3DL2Reverb"

/*JP
 * \brief マトリクスのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_MATRIX_NAME					"CRIWARE/Matrix"

/*JP
 * \brief 3バンドイコライザのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_3BANDS_EQUALIZER_NAME			"CRIWARE/3BandsEQ"

/*JP
 * \brief 32バンドイコライザのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_32BANDS_EQUALIZER_NAME			"CRIWARE/32BandsEQ"

/*JP
 * \brief ピッチシフタのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_PITCH_SHIFTER_NAME				"CRIWARE/PitchShifter"

/*JP
 * \brief リバーブのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_REVERB_NAME					"CRIWARE/Reverb"

/*JP
 * \brief サラウンダのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_SURROUNDER_NAME				"CRIWARE/Surrounder"
 
/*JP
 * \brief ビットクラッシャーのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_BIT_CRUSHER_NAME				"CRIWARE/BitCrusher"

/*JP
 * \brief フェーザーのエフェクト名
 * \ingroup  ATOMEXLIB_ASR
 */
#define CRIATOMEXASR_PHASER_NAME					"CRIWARE/Phaser"

 /*JP
  * \brief IRリバーブのエフェクト名
  * \ingroup  ATOMEXLIB_ASR
  */
#define CRIATOMEXASR_IR_REVERB_NAME					"CRIWARE/IRReverb"

/*==========================================================================
 *      CRI ASRバスエフェクト パラメーター定義マクロ
 *=========================================================================*/
/*JP
 * \defgroup CRIATOMASR_DSP_PARAM ASRバスエフェクトのパラメーター
 * \ingroup  ATOMEXLIB_ASR
 * \par 説明:
 * ASRバスで使用するCRIWARE社内製エフェクトのパラメーターに関する定義です。<br>
 * ::criAtomExAsrRack_SetEffectParameter 関数や ::criAtomExAsrRack_SetEffectParameter 
 * 関数で指定するインデックスの定義と、特定のパラメーターの設定値の定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_AMPLITUDE_ANALYZER 振幅解析器のパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief 振幅解析器で設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 書き込み先のサイドチェインテーブルID
 * \ingroup CRIATOMASR_DSP_PARAM_AMPLITUDE_ANALYZER 
 * \par 説明:
 * 本パラメーターインデックスに振幅解析器が書き込む先のテーブルIDを指定します。<br>
 * テーブルIDを同一にしたエフェクト同士では、解析結果を共有する事ができます。
 */
#define CRIATOMEXASR_AMPLITUDE_ANALYZER_PARAMETER_SIDE_CHAIN_TABLE_ID	(0)

/*JP
 * \brief 振幅解析器のパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_AMPLITUDE_ANALYZER 
 * \par 説明:
 * 振幅解析器のパラメーター数です。
 */
#define CRIATOMEXASR_AMPLITUDE_ANALYZER_NUM_PARAMETERS					(1)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER バイクアッドフィルター・バンドパスフィルターのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief バイクアッドフィルター・バンドパスフィルターで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief タイプ
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバイクアッドフィルターのタイプを指定します。<br>
 * \sa CRIATOMEXASR_BIQUAD_FILTER_TYPE_LOWPASS, CRIATOMEXASR_BIQUAD_FILTER_TYPE_HIGHPASS, CRIATOMEXASR_BIQUAD_FILTER_TYPE_NOTCH, CRIATOMEXASR_BIQUAD_FILTER_TYPE_LOWSHELF, CRIATOMEXASR_BIQUAD_FILTER_TYPE_HIGHSHELF, CRIATOMEXASR_BIQUAD_FILTER_TYPE_PEAKING
 */
#define CRIATOMEXASR_BIQUAD_FILTER_PARAMETER_TYPE						(0)

/*JP
 * \brief 処理周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバイクアッドフィルターの処理周波数を指定します。<br>
 * 処理周波数はタイプに依存して変化します。
 * | タイプ  | 周波数  |
 * | :-----: | :-: |
 * | ローパスフィルター、ハイパスフィルター | 遮断周波数 |
 * | ノッチフィルター、ピーキングフィルター、ローシェルフフィルター、ハイシェルフフィルター | 中心周波数 |
 */
#define CRIATOMEXASR_BIQUAD_FILTER_PARAMETER_FREQUENCY					(1)

/*JP
 * \brief Q値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバイクアッドフィルターのQ値（尖鋭度、クオリティファクタ）を指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は10.0fです。バンドパスフィルター以外では信号処理の際に最小値は0.001fに制限されます。
 */
#define CRIATOMEXASR_BIQUAD_FILTER_PARAMETER_QUALITY_FACTOR				(2)

/*JP
 * \brief 出力ゲイン[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバイクアッドフィルターの出力ゲインを指定します。<br>
 * 出力ゲインが適用されるのはローシェルフフィルター、ハイシェルフフィルター、ピーキングフィルターのみとなります。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は5.0fです。ローシェルフ、ハイシェルフ、ピーキングフィルターの場合は信号処理の際に最小値が √1/65536.0fに制限されます。
 */
#define CRIATOMEXASR_BIQUAD_FILTER_PARAMETER_GAIN						(3)

/*JP
 * \brief バイクアッドフィルターのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * バイクアッドフィルターのパラメーター数です。
 */
#define CRIATOMEXASR_BIQUAD_FILTER_NUM_PARAMETERS						(4)

/*JP
 * \brief ローパスフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_LOWPASS							(0)

/*JP
 * \brief ハイパスフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_HIGHPASS						(1)

/*JP
 * \brief ノッチフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_NOTCH							(2)

/*JP
 * \brief ローシェルフフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_LOWSHELF						(3)

/*JP
 * \brief ハイシェルフフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_HIGHSHELF						(4)

/*JP
 * \brief ピーキングフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 */
#define CRIATOMEXASR_BIQUAD_FILTER_TYPE_PEAKING							(5)

/*JP
 * \brief 低域遮断（カットオフ）周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバンドパスフィルター（2次のバターワースフィルター）の低域遮断周波数を指定します。<br>
 * パラメーターの最小値は24.0f、最大値は24000.0fです。
 */
#define CRIATOMEXASR_BANDPASS_FILTER_PARAMETER_LOW_FREQ					(0)

/*JP
 * \brief 高域遮断（カットオフ）周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * 本パラメーターインデックスにバンドパスフィルター（2次のバターワースフィルター）の高域遮断周波数を指定します。<br>
 * パラメーターの最小値は24.0f、最大値は24000.0fです。
 */
#define CRIATOMEXASR_BANDPASS_FILTER_PARAMETER_HIGH_FREQ				(1)

/*JP
 * \brief バンドパスフィルター（2次のバターワースフィルター）のパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_BIQUAD_FILTER 
 * \par 説明:
 * バンドパスフィルターのパラメーター数です。
 */
#define CRIATOMEXASR_BANDPASS_FILTER_NUM_PARAMETERS						(2)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_CHORUS コーラス・フランジャーのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief コーラス・フランジャーで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにコーラスの遅延（LFOの中心となる遅延）時間を指定します。<br>
 * パラメーターの初期値は30.0f、最小値は0.1f、最大値は100.fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_DELAY_TIME_MS						(0)

/*JP
 * \brief 深さ（LFO振幅）
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにコーラスの深さを指定します。<br>
 * パラメーターの初期値は0.2f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_DEPTH								(1)

/*JP
 * \brief レート（スピード、LFO周波数）[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにコーラスのLFOのレートを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.01f、最大値は100.0fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_RATE								(2)

/*JP
 * \brief フィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにコーラスのフィードバックゲインを指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_FEEDBACK							(3)

/*JP
 * \brief dry成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにコーラスのdry（原音）成分のミックス割合を指定します。<br>
 * パラメーターの初期値は0.7f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_DRY_MIX							(4)

/*JP
 * \brief コーラスのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 */
#define CRIATOMEXASR_CHORUS_NUM_PARAMETERS								(8)

/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーの遅延（LFOの中心となる遅延）時間を指定します。<br>
 * パラメーターの初期値は10.0f、最小値は0.1f、最大値は10.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_DELAY_TIME_MS					(0)

/*JP
 * \brief 深さ（LFO振幅）
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーの深さを指定します。<br>
 * パラメーターの初期値は0.1f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_DEPTH							(1)

/*JP
 * \brief レート（スピード、LFO周波数）[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーのLFOのレートを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.01f、最大値は100.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_RATE								(2)

/*JP
 * \brief フィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーのフィードバックゲインを指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_FEEDBACK							(3)

/*JP
 * \brief dry成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーのdry（原音）成分のミックス割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_DRY_MIX							(4)

/*JP
 * \brief wet成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \par 説明:
 * 本パラメーターインデックスにフランジャーのwet（原音）成分のミックス割合を指定します。
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_FLANGER_PARAMETER_WET_MIX							(5)

/*JP
 * \brief フランジャーのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 */
#define CRIATOMEXASR_FLANGER_NUM_PARAMETERS								(6)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_COMPRESSOR コンプレッサー・リミッタのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief コンプレッサー・リミッタで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief スレッショルド
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのスレッショルド（振幅が圧縮され始める閾値）を指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は1.0fです。<br>
 * \note レシオ値からdB値への変換はレシオ値に常用対数（底が10の対数）を取った値に20.0fを乗じることで取得できます。
 * \code
 * // db値 db からレシオ値 ratio へ変換
 * ratio = powf(10.0f, db / 20.0f);
 * // レシオ値 ratio からセント値 cent へ変換
 * db = 20.0f * log10f(ratio);
 * \endcode
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_THRESHOLD						(0)

/*JP
 * \brief レシオ
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのレシオ（圧縮値）を指定します。<br>
 * パラメーターの初期値は1.0f、最小値、最大値に制限はありませんが、信号処理の際に最小値は0.01fに制限されます。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_RATIO							(1)

/*JP
 * \brief アタック時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのアタック時間（指定したレシオに圧縮されるまでの時間）を指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は3000.0fです。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_ATTACK_TIME_MS				(2)

/*JP
 * \brief リリース時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのリリース時間（振幅が閾値以下になった後に圧縮が終わるまでの時間）を指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は50000.0fです。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_RELEASE_TIME_MS				(3)

/*JP
 * \brief 最大出力ゲイン[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーの最大出力ゲインを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は 10の(-24/5)乗（-96dBに相当）、最大値は10の(12/5)乗（48dBに相当）です。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_OUTPUT_GAIN					(4)

/*JP
 * \brief サラウンドリンクの強さ
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのサラウンドリンクの強さを指定します。<br>
 * サラウンドリンク機能とは、全チャンネル内で最低の振幅値を用いて圧縮を掛ける強さを変化させる機能です。<br>
 * 1.0fの時に全チャンネル内で最低の振幅値を完全に使用し、0.0fでサラウンドリンク機能がOFFになります。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_SURROUND_LINK					(5)

/*JP
 * \brief スプリットEQのタイプ
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのスプリットEQのタイプを指定します。<br>
 * スプリットEQとは帯域を二分割するEQです。フィルターによって取り出した帯域のみにコンプレッサーを掛け、残った帯域と合成します。
 * \sa CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_NONE, CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_LOWPASS, CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_HIGHPASS, CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_BANDPASS, CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_NOTCH
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_SPLIT_EQ_TYPE					(6)

/*JP
 * \brief スプリットEQの処理周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのスプリットEQの処理周波数を指定します。<br>
 * パラメーターの最小値は24.0f、最大値は24000.0fです。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_SPLIT_EQ_FREQUENCY			(7)

/*JP
 * \brief スプリットEQのQ値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにコンプレッサーのスプリットEQのQ値（尖鋭度、クオリティファクタ）を指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は10.0fです。
 */
#define CRIATOMEXASR_COMPRESSOR_PARAMETER_SPLIT_EQ_QUALITY_FACTOR		(8)

/*JP
 * \brief コンプレッサーのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_NUM_PARAMETERS							(9)

/*JP
 * \brief スプリットEQを使用しない際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_NONE						(0)

/*JP
 * \brief スプリットEQでローパスフィルターを使用する際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_LOWPASS					(1)

/*JP
 * \brief スプリットEQでハイパスフィルターを使用する際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_HIGHPASS					(2)

/*JP
 * \brief スプリットEQでバンドパスフィルターを使用する際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_BANDPASS					(3)

/*JP
 * \brief スプリットEQでノッチフィルターを使用する際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_SPLIT_EQ_TYPE_NOTCH						(4)

/*JP
 * \brief コンプレッサーを自分自身の振幅計測結果により動作させる際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_MODE_NORMAL								(0)

/*JP
 * \brief コンプレッサーをサイドチェインを使用して動作させる際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_MODE_SIDE_CHAIN							(1)

/*JP
 * \brief コンプレッサーの振幅検知タイプをピーク値にする際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_TYPE_PEAK								(0)

/*JP
 * \brief コンプレッサーの振幅検知タイプをRMSにする際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_COMPRESSOR_TYPE_RMS								(1)

/*JP
 * \brief スレッショルド
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタのスレッショルド（振幅が圧縮される閾値）を指定します。<br>
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_THRESHOLD						(0)

/*JP
 * \brief アタック時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタのアタック時間（圧縮が完了するまでの時間）を指定します。
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は200.0fです。
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_ATTACK_TIME_MS					(1)

/*JP
 * \brief リリース時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタのリリース時間（振幅が閾値以下になった後に圧縮が終わるまでの時間）を指定します。
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は50000.0fです。
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_RELEASE_TIME_MS					(2)

/*JP
 * \brief 最大出力ゲイン[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタの最大出力ゲインを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は 10の-4.8乗（-96dBに相当）、最大値は10の2.4乗（48dBに相当）です。
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_OUTPUT_GAIN						(3)

/*JP
 * \brief サラウンドリンクの強さ
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタのサラウンドリンクの強さを指定します。<br>
 * サラウンドリンク機能とは、全チャンネル内で最低の振幅値を用いて圧縮を掛ける強さを変化させる機能です。<br>
 * 1.0fの時に全チャンネル内で最低の振幅値を完全に使用し、0.0fでサラウンドリンク機能がOFFになります。
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_SURROUND_LINK					(4)

/*JP
 * \brief 振幅検出値タイプ
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 * \par 説明:
 * 本パラメーターインデックスにリミッタの振幅検出値タイプを指定します。
 * \sa CRIATOMEXASR_LIMITER_TYPE_PEAK, CRIATOMEXASR_LIMITER_TYPE_RMS
 */
#define CRIATOMEXASR_LIMITER_PARAMETER_TYPE								(5)

/*JP
 * \brief リミッタのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_LIMITER_NUM_PARAMETERS								(6)
																	
/*JP
 * \brief リミッタを自分自身の振幅計測結果により動作させる際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_LIMITER_MODE_NORMAL								(0)

/*JP
 * \brief リミッタをサイドチェインにより動作させる際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_LIMITER_MODE_SIDE_CHAIN							(1)

/*JP
 * \brief リミッタの振幅検知タイプをピーク値にする際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_LIMITER_TYPE_PEAK									(0)

/*JP
 * \brief リミッタの振幅検知タイプをRMSにする際の設定値
 * \ingroup CRIATOMASR_DSP_PARAM_COMPRESSOR
 */
#define CRIATOMEXASR_LIMITER_TYPE_RMS									(1)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_DELAY ディレイ・エコー・マルチタップディレイのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief ディレイ・エコー・マルチタップディレイで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \par 説明:
 * 本パラメーターインデックスにディレイの遅延時間を指定します。<br>
 * 最大ディレイ時間の半分の値で初期化されます。 パラメーターの最小値は50.0f、最大値は1000.0fです。
 */
#define CRIATOMEXASR_DELAY_PARAMETER_DELAY_TIME_MS						(0)

/*JP
 * \brief ディレイのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_DELAY_NUM_PARAMETERS								(1)

/*JP
 * \brief ディレイで設定可能な最小の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_DELAY_PARAMETER_MIN_DELAY_TIME_MS					(50.0f)

/*JP
 * \brief ディレイで設定可能な最大の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \attention コンフィグ設定した値以上に設定しても、こちらの値が優先して制限されます。
 */
#define CRIATOMEXASR_DELAY_PARAMETER_MAX_DELAY_TIME_MS					(1000.0f)

/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \par 説明:
 * 本パラメーターインデックスにエコーの遅延時間を指定します。
 */
#define CRIATOMEXASR_ECHO_PARAMETER_DELAY_TIME_MS						(0)

/*JP
 * \brief フィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \par 説明:
 * 本パラメーターインデックスにエコーのフィードバックゲインを指定します。<br>
 * フィードバックゲインが大きい事によるエコー音は再生を停止しても止まらない点に注意して下さい。また、フィードバックゲインの絶対値の最大値は1.0fですが、内部的には0.99fに切り詰められる為、持続振動してしまう（エコーが消えない）事はありません。
 * \par 説明:
 * パラメーターの初期値は0.0f、最小値は-0.99f、最大値は0.99fです。上記の制限により、1.0fを設定した場合でも減衰が生じます。
 */
#define CRIATOMEXASR_ECHO_PARAMETER_FB_GAIN								(1)

/*JP
 * \brief エコーのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_ECHO_NUM_PARAMETERS								(2)

/*JP
 * \brief エコーで設定可能な最小の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_ECHO_PARAMETER_MIN_DELAY_TIME_MS					(0.0f)

/*JP
 * \brief エコーで設定可能な最大の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \attention コンフィグで設定した最大遅延時間よりも、こちらの値が優先して制限されます。
 */
#define CRIATOMEXASR_ECHO_PARAMETER_MAX_DELAY_TIME_MS					(1000.0f)

/*JP
 * \brief エコーで設定可能な最小のフィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_ECHO_PARAMETER_MIN_FB_GAIN							(-0.99f)

/*JP
 * \brief エコーで設定可能な最大のフィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_ECHO_PARAMETER_MAX_FB_GAIN							(0.99f)

/*JP
 * \brief マルチタップディレイのタップ数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_MULTITAP_DELAY_NUM_TAPS							(4)

/*JP
 * \brief マルチタップディレイの出力チャンネル数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \par 説明:
 * 通常は4チャンネル（L, R, サラウンドL, サラウンドR）に設定されます。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_NUM_CHANNELS						(4)

/*JP
 * \brief マルチタップディレイで設定可能な最大の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \attention コンフィグでこの値以上に設定しても、こちらの値が優先して制限されます。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_MAX_DELAY_TIME_MS			(10000.0f)

/*JP
 * \brief マルチタップディレイの1タップ当たりのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP				(4)

/*JP
 * \brief マルチタップディレイのフィードバック量総和上限値
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \par 説明:
 * マルチタップディレイでは各タップでフィードバックを行うので、出力が発散してしまう場合があります。全タップのフィードバック総和上限値を用いて、発散をなるべく回避します。
 * \attention この上限値を用いても出力が発散する場合があります。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_MAX_SUM_FEEDBACK_GAIN		(0.90f)

/*JP
 * \brief マルチタップディレイのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 */
#define CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETERS \
	(CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP * CRIATOMEXASR_MULTITAP_DELAY_NUM_TAPS)	

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_DISTORTION ディストーションのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief ディストーションで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 歪みの強さ[dB]
 * \ingroup CRIATOMASR_DSP_PARAM_DISTORTION
 * \par 説明:
 * 本パラメーターインデックスにディストーションの歪みの強さ（ドライブ）を指定します。<br>
 * パラメーターの初期値は0.5f、最小値は0.0f、最大値は48.0fです。
 */
#define CRIATOMEXASR_DISTORTION_PARAMETER_DRIVE_DB						(0)

/*JP
 * \brief dry成分の割合
 * \ingroup CRIATOMASR_DSP_PARAM_DISTORTION
 * \par 説明:
 * 本パラメーターインデックスにディストーションのdry（原音）成分をミックスする割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_DISTORTION_PARAMETER_DRY_MIX						(1)

/*JP
 * \brief wet成分の割合
 * \ingroup CRIATOMASR_DSP_PARAM_DISTORTION
 * \par 説明:
 * 本パラメーターインデックスにディストーションのwet（歪み）成分をミックスする割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_DISTORTION_PARAMETER_WET_MIX						(2)

/*JP
 * \brief 最終出力レベル[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_DISTORTION
 * \par 説明:
 * 本パラメーターインデックスにディストーションの最終出力レベルを指定します。<br>
 * パラメーターの初期値は0.5f、最小値は0.0f、最大値は10の2.4乗（48dBに相当する値）です。
 */
#define CRIATOMEXASR_DISTORTION_PARAMETER_OUTPUT_GAIN					(3)

/*JP
 * \brief ディストーションのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_DISTORTION
 */
#define CRIATOMEXASR_DISTORTION_NUM_PARAMETERS							(4)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB I3DL2リバーブのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief I3DL2リバーブで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 * \attention プリセットはパラメーターインデックス0-10までの情報が並んだ配列であり、
 *			  インデックス11-13については指定できません。
 */
/*JP
 * \brief エフェクト全体の出力ボリューム[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの最終出力ボリュームを指定します。<br>
 * パラメーターの初期値は-1000.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_ROOM						(0)

/*JP
 * \brief 参照周波数（高域）成分のボリューム[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの参照周波数（高域）成分のボリュームを指定します。<br>
 * パラメーターの初期値は-100.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_ROOM_HF						(1)

/*JP
 * \brief 後部残響音の減衰時間[sec]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音の減衰時間を指定します。<br>
 * パラメーターの初期値は1.49f、最小値は0.1f、最大値は20.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_DECAY_TIME					(2)

/*JP
 * \brief 後部残響音の低周波数減衰に対する高周波減衰の比
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音における、低周波減衰に対する高周波減衰の比率を指定します。<br>
 * パラメーターの初期値は0.83f、最小値は0.1f、最大値は2.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_DECAY_HF_RATIO				(3)

/*JP
 * \brief 初期反射音のボリューム[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの初期反射音のボリュームを指定します。<br>
 * パラメーターの初期値は-2602f、最小値は-10000.0f、最大値は1000.0です。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REFLECTIONS					(4)

/*JP
 * \brief 初期反射音の遅延時間[sec]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの初期反射音のボリュームを指定します。<br>
 * パラメーターの初期値は0.007f、最小値は0.0f、最大値は0.3fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REFLECTIONS_DELAY			(5)

/*JP
 * \brief 後部残響音のボリューム[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音のボリュームを指定します。<br>
 * パラメーターの初期値は200f、最小値は-10000.0f、最大値は2000.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REVERB						(6)

/*JP
 * \brief 後部残響音の遅延時間[sec]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音の遅延時間を指定します。<br>
 * パラメーターの初期値は0.011f、最小値は0.0f、最大値は0.1fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REVERB_DELAY				(7)

/*JP
 * \brief 後部残響音のエコー密度[%]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音のエコー密度を指定します。<br>
 * パラメーターの初期値は100.0f、最小値は0.0f、最大値は100.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_DIFFUSION					(8)

/*JP
 * \brief 後部残響音のモーダル密度[%]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブの後部残響音のモーダル密度を指定します。<br>
 * パラメーターの初期値は100.0f、最小値は0.0f、最大値は100.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_DENSITY						(9)

/*JP
 * \brief RoomHFの参照周波数（高域）[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのRoomHFの参照周波数（高域）を指定します。<br>
 * パラメーターの初期値は5000.0f、最小値は20.0f、最大値は20000.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_HF_REFERENCE				(10)

/*JP
 * \brief フロント成分の入力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのフロント（L,Rチャンネル）成分の入力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は0.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_FRONT_INPUT					(11)

/*JP
 * \brief リア成分の入力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのリア（サラウンドL,サラウンドRチャンネル）成分の入力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は0.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REAR_INPUT					(12)

/*JP
 * \brief センター成分の入力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのセンター（Cチャンネル）成分の入力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は-10000.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_CENTER_INPUT				(13)

/*JP
 * \brief フロント成分の出力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのフロント（L,Rチャンネル）成分の出力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は0.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_FRONT_OUTPUT				(14)

/*JP
 * \brief リア成分の出力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのリア（サラウンドL,サラウンドRチャンネル）成分の出力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は0.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_REAR_OUTPUT					(15)

/*JP
 * \brief センター成分の出力レベル[mB]
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 * \par 説明:
 * 本パラメーターインデックスにI3DL2リバーブのセンター（Cチャンネル）成分の出力レベルを指定します。<br>
 * I3DL2リバーブのプリセットでは指定できない事に注意して下さい。<br>
 * パラメーターの初期値は-10000.0f、最小値は-10000.0f、最大値は0.0fです。
 */
#define CRIATOMEXASR_I3DL2_REVERB_PARAMETER_CENTER_OUTPUT				(16)

/*JP
 * \brief I3DL2リバーブのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_NUM_PARAMETERS						(17)

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: GENERIC
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_GENERIC \
	{ -1000,  -100, 1.49f, 0.83f,  -2602, 0.007f,    200, 0.011f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: PADDED CELL
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_PADDEDCELL \
	{ -1000, -6000, 0.17f, 0.10f,  -1204, 0.001f,    207, 0.002f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_ROOM \
	{ -1000,  -454, 0.40f, 0.83f,  -1646, 0.002f,     53, 0.003f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: BATH ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_BATHROOM \
	{ -1000, -1200, 1.49f, 0.54f,   -370, 0.007f,   1030, 0.011f, 100.0f,  60.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: LIVING ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_LIVINGROOM \
	{ -1000, -6000, 0.50f, 0.10f,  -1376, 0.003f,  -1104, 0.004f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: STONE ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_STONEROOM \
	{ -1000,  -300, 2.31f, 0.64f,   -711, 0.012f,     83, 0.017f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: AUDITORIUM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_AUDITORIUM \
	{ -1000,  -476, 4.32f, 0.59f,   -789, 0.020f,   -289, 0.030f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: CONCERT HALL
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_CONCERTHALL \
	{ -1000,  -500, 3.92f, 0.70f,  -1230, 0.020f,     -2, 0.029f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: CAVE
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_CAVE \
	{ -1000,     0, 2.91f, 1.30f,   -602, 0.015f,   -302, 0.022f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: ARENA
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_ARENA \
	{ -1000,  -698, 7.24f, 0.33f,  -1166, 0.020f,     16, 0.030f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: HANGER
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_HANGAR \
	{ -1000, -1000, 10.05f, 0.23f,   -602, 0.020f,    198, 0.030f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: CARPETED HALL WAY
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_CARPETEDHALLWAY \
	{ -1000, -4000, 0.30f, 0.10f,  -1831, 0.002f,  -1630, 0.030f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: HALL WAY
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_HALLWAY \
	{ -1000,  -300, 1.49f, 0.59f,  -1219, 0.007f,    441, 0.011f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: STONE CORRIDOR
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_STONECORRIDOR \
	{ -1000,  -237, 2.70f, 0.79f,  -1214, 0.013f,    395, 0.020f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: ALLEY
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_ALLEY \
	{ -1000,  -270, 1.49f, 0.86f,  -1204, 0.007f,     -4, 0.011f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: FOREST
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_FOREST \
	{ -1000, -3300, 1.49f, 0.54f,  -2560, 0.162f,   -613, 0.088f,  79.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: CITY
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_CITY \
	{ -1000,  -800, 1.49f, 0.67f,  -2273, 0.007f,  -2217, 0.011f,  50.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: MOUNTAINS
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_MOUNTAINS \
	{ -1000, -2500, 1.49f, 0.21f,  -2780, 0.300f,  -2014, 0.100f,  27.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: QUARRY
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_QUARRY \
	{ -1000, -1000, 1.49f, 0.83f, -10000, 0.061f,    500, 0.025f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: PLAIN
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_PLAIN \
	{ -1000, -2000, 1.49f, 0.50f,  -2466, 0.179f,  -2514, 0.100f,  21.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: PARKING LOT
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_PARKINGLOT \
	{ -1000,     0, 1.65f, 1.50f,  -1363, 0.008f,  -1153, 0.012f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: SEWER PIPE
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_SEWERPIPE \
	{ -1000, -1000, 2.81f, 0.14f,    429, 0.014f,    648, 0.021f,  80.0f,  60.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: UNDER WATER
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_UNDERWATER \
	{ -1000, -4000, 1.49f, 0.10f,   -449, 0.007f,   1700, 0.011f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: SMALL ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_SMALLROOM \
	{ -1000,  -600, 1.10f, 0.83f,   -400, 0.005f,    500, 0.010f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: MEDIUM ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_MEDIUMROOM \
	{ -1000,  -600, 1.30f, 0.83f,  -1000, 0.010f,   -200, 0.020f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: LARGE ROOM
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_LARGEROOM \
	{ -1000,  -600, 1.50f, 0.83f,  -1600, 0.020f,  -1000, 0.040f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: MEDIUM HALL
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_MEDIUMHALL \
	{ -1000,  -600, 1.80f, 0.70f,  -1300, 0.015f,   -800, 0.030f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: LARGE HALL
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_LARGEHALL \
	{ -1000,  -600, 1.80f, 0.70f,  -2000, 0.030f,  -1400, 0.060f, 100.0f, 100.0f, 5000.0f}

/*JP
 * \brief I3DL2リバーブのパラメーターのプリセット: PLATE
 * \ingroup CRIATOMASR_DSP_PARAM_I3DL2_REVERB
 */
#define CRIATOMEXASR_I3DL2_REVERB_PRESET_PLATE \
	{ -1000,  -200, 1.30f, 0.90f,      0, 0.002f,      0, 0.010f, 100.0f,  75.0f, 5000.0f}

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_MATRIX マトリクスのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief マトリクスで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */

/*JP
 * \brief 扱いうる最大のチャンネル数
 * \ingroup CRIATOMASR_DSP_PARAM_MATRIX
 * \par 説明:
 * マトリクスの処理可能な最大の入出力チャンネル数です。
 */
#define CRIATOMEXASR_MATRIX_MAX_NUM_CHANNELS							(8)

/*JP
 * \brief マトリクスのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_MATRIX
 */
#define CRIATOMEXASR_MATRIX_NUM_PARAMETERS							\
	(CRIATOMEXASR_MATRIX_MAX_NUM_CHANNELS * CRIATOMEXASR_MATRIX_MAX_NUM_CHANNELS)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ 3バンドイコライザ・32バンドイコライザのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief 3バンドイコライザ・32バンドイコライザで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */

/*JP
 * \brief ローシェルフフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_LOWSHELF 			(0)

/*JP
 * \brief ハイシェルフフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_HIGHSHELF			(1)

/*JP
 * \brief ピーキングフィルターを指定する時のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_PEAKING 			(2)

/*JP
 * \brief 3バンドイコライザ/32バンドイコライザの1バンドあたりのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND 				(4)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER ピッチシフタのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief ピッチシフタで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief ピッチ変更量[レシオ]
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER
 * \par 説明:
 * 本パラメーターインデックスにピッチシフタのピッチ変更量を指定します。<br>
 * ピッチシフト値（セント値）の比率（レシオ）です。パラメーターの初期値は1.0f、最小値は0.25f（-2400セントに相当）、最大値は4.0f（2400セントに相当）。<br>
 * \note レシオ値からセント値への変換はレシオ値に底が2の対数を取った値に、1200.0fを乗じることで取得できます。
 * \code
 * // セント値 cent からレシオ値 ratio へ変換
 * ratio = powf(2.0f, cent / 1200.0f);
 * // レシオ値 ratio からセント値 cent へ変換
 * cent = 1200.0f * log2f(ratio);
 * \endcode
 */
#define CRIATOMEXASR_PITCH_SHIFTER_PARAMETER_PITCH_RATIO				(0)

/*JP
 * \brief フォルマント変更量[レシオ]
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER
 * \par 説明:
 * 本パラメーターインデックスにピッチシフタのフォルマント変更量を指定します。<br>
 * ピッチシフト値（セント値）の比率（レシオ）です。パラメーターの初期値は1.0f、最小値は0.25f（-2400セントに相当）、最大値は4.0f（2400セントに相当）。<br>
 * \note レシオ値からセント値への変換はレシオ値に底が2の対数を取った値に、1200.0fを乗じることで取得できます。
 * \code
 * // セント値 cent からレシオ値 ratio へ変換
 * ratio = powf(2.0f, cent / 1200.0f);
 * // レシオ値 ratio からセント値 cent へ変換
 * cent = 1200.0f * log2f(ratio);
 * \endcode
 */
#define CRIATOMEXASR_PITCH_SHIFTER_PARAMETER_FORMANT_RATIO				(1)

/*JP
 * \brief 動作モード
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER
 * \par 説明:
 * 本パラメーターインデックスにピッチシフタの動作モードを指定します。<br>
 * 定位感を重視するか否か、人間の声を含んだ音声（ピッチのある音声）か否かで適切な動作モードが異なります。
 * \sa CRIATOMEXASR_PITCH_SHIFTER_MODE_MUSIC, CRIATOMEXASR_PITCH_SHIFTER_MODE_VOCAL, CRIATOMEXASR_PITCH_SHIFTER_MODE_SE, CRIATOMEXASR_PITCH_SHIFTER_MODE_SPEECH
 */
#define CRIATOMEXASR_PITCH_SHIFTER_PARAMETER_MODE						(2)

/*JP
 * \brief 入力音声データのピッチ周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER
 * \par 説明:
 * 本パラメーターインデックスに入力音声データのピッチ周波数を指定します。<br>
 * フォルマント解析の際のヒント情報になりますが、実際の音声データにかけ離れた値を指定すると音声に雑音が付加されるため注意して下さい。指定しなかった場合はデフォルトのピッチ（459.375Hz）が内部で使用されます。
 */
#define CRIATOMEXASR_PITCH_SHIFTER_PARAMETER_DATA_PITCH_FREQUENCY		(3)

/*JP
 * \brief ピッチシフタのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER
 */
#define CRIATOMEXASR_PITCH_SHIFTER_NUM_PARAMETERS						(4)

/*JP
 * \brief ピッチシフタの動作モードで音楽を指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER 
 * \par 説明:
 * LR→MS変換（L,Rchの音声をM,Schに変換を行う）を行い、フォルマントシフトを行いません。
 */
#define CRIATOMEXASR_PITCH_SHIFTER_MODE_MUSIC							(0)

/*JP
 * \brief ピッチシフタの動作モードでボーカルを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER 
 * \par 説明:
 * LR→MS変換を行い、かつフォルマントシフトを行います。
 */
#define CRIATOMEXASR_PITCH_SHIFTER_MODE_VOCAL							(1)

/*JP
 * \brief ピッチシフタの動作モードでSEを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER 
 * \par 説明:
 * LR→MS変換は行わず、フォルマントシフトも行いません。
 */
#define CRIATOMEXASR_PITCH_SHIFTER_MODE_SE								(2)

/*JP
 * \brief ピッチシフタの動作モードでスピーチを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_PITCH_SHIFTER 
 * \par 説明:
 * LR→MS変換は行わず、フォルマントシフトは行います。
 */
#define CRIATOMEXASR_PITCH_SHIFTER_MODE_SPEECH							(3)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_REVERB リバーブのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief リバーブで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 残響時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 * \par 説明:
 * 本パラメーターインデックスにリバーブの残響時間を指定します。<br>
 * パラメーターの初期値は3000.0f、最小値は1.0f、最大値は20000.0fです。
 */
#define CRIATOMEXASR_REVERB_PARAMETER_REVERB_TIME_MS					(0)

/*JP
 * \brief ルームサイズ[m]
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 * \par 説明:
 * 本パラメーターインデックスにリバーブのルームサイズを指定します。<br>
 * 最大ルームサイズの半分の値で初期化されます。パラメーターの最小値は1.0f、最大値は50.0fです。
 */
#define CRIATOMEXASR_REVERB_PARAMETER_ROOM_SIZE_M						(1)

/*JP
 * \brief プリディレイ時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 * \par 説明:
 * 本パラメーターインデックスにリバーブのプリディレイ時間を指定します。<br>
 * パラメーターの最小値は10.0f、最大値は1000.0fです。
 */
#define CRIATOMEXASR_REVERB_PARAMETER_PRE_DELAY_TIME_MS					(2)

/*JP
 * \brief 低域カットオフ周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 * \par 説明:
 * 本パラメーターインデックスにリバーブ出力の低域カットオフ周波数を指定します。<br>
 * 初期値は0.0fです。パラメーターの最小値は0.0f、最大値は24000.0fです。
 */
#define CRIATOMEXASR_REVERB_PARAMETER_LOW_COF							(3)

/*JP
 * \brief 高域カットオフ周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 * \par 説明:
 * 本パラメーターインデックスにリバーブ出力の高域カットオフ周波数を指定します。<br>
 * 初期値は8000.0fです。パラメーターの最小値は8000.0f、最大値は24000.fです。
 */
#define CRIATOMEXASR_REVERB_PARAMETER_HIGH_COF							(4)

/*JP
 * \brief リバーブのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB
 */
#define CRIATOMEXASR_REVERB_NUM_PARAMETERS								(5)

/*JP
 * \brief リバーブの動作モードでサラウンドを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB 
 * \par 説明:
 * 全Chの入力をモノラルへミックスし、出力Chに合わせてマトリクスサラウンドに展開を行います。<br>
 * 
 *  - 出力Chが5Ch以下の場合は、ステレオ出力を行います。
 *  - 出力Chが6Ch以上の場合は、サラウンドCh（サラウンドL,RCh）にリアCh（リアL,RCh）の
 *    逆位相の信号を出力します。
 *
 * \attention センターChとLFEの出力は無音になります。
 */
#define CRIATOMEXASR_REVERB_MODE_DEF_SURROUND							(0)

/*JP
 * \brief リバーブの動作モードでステレオを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB 
 * \par 説明:
 * 2Chで入出力を行います。
 */
#define CRIATOMEXASR_REVERB_MODE_DEF_STEREO								(1)

/*JP
 * \brief リバーブの動作モードでリアのみを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB 
 * \par 説明:
 * リアCh（リアL,RCh）のみで入出力を行います。
 */
#define CRIATOMEXASR_REVERB_MODE_DEF_REAR_ONLY							(2)

/*JP
 * \brief リバーブの動作モードでセンターのみを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_REVERB 
 * \par 説明:
 * センターChのみで入出力を行います。
 */
#define CRIATOMEXASR_REVERB_MODE_DEF_CENTER_ONLY						(3)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_SURROUNDER サラウンダのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief サラウンダで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 動作モード
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 本パラメーターインデックスにサラウンダの動作モードを指定します。
 * \sa CRIATOMEXASR_SURROUNDER_MODE_STRAIGHT, CRIATOMEXASR_SURROUNDER_MODE_CROSS, CRIATOMEXASR_SURROUNDER_MODE_MATRIX
 */
#define CRIATOMEXASR_SURROUNDER_PARAMETER_MODE							(0)

/*JP
 * \brief サラウンド成分の遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 本パラメーターインデックスにサラウンダのサラウンドチャンネル成分の遅延時間を指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は500.0fです。
 */
#define CRIATOMEXASR_SURROUNDER_PARAMETER_DELAY_TIME_MS					(1)

/*JP
 * \brief サラウンド成分のゲイン[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 本パラメーターインデックスにサラウンダのサラウンドチャンネル成分の出力ゲインを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は10の2.4乗（48dBに相当）です。
 */
#define CRIATOMEXASR_SURROUNDER_PARAMETER_GAIN							(2)

/*JP
 * \brief サラウンダのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 */
#define CRIATOMEXASR_SURROUNDER_NUM_PARAMETERS							(3)


/*JP
 * \brief サラウンダの動作モードでストレートを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 入力のLChをサラウンドLChに、RChをサラウンドRChに展開します。
 */
#define CRIATOMEXASR_SURROUNDER_MODE_STRAIGHT							(0)

/*JP
 * \brief サラウンダの動作モードでクロスを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 入力のLChをサラウンドRChに、RChをサラウンドLChに展開します。
 */
#define CRIATOMEXASR_SURROUNDER_MODE_CROSS								(1)

/*JP
 * \brief サラウンダの動作モードでマトリクスを指定する際のパラメーターの設定値
 * \ingroup CRIATOMASR_DSP_PARAM_SURROUNDER
 * \par 説明:
 * 入力のLCh - RCh（LCh入力からRCh入力を差し引いたもの）をサラウンドLChに、RCh - LChをサラウンドRChに展開します。
 */
#define CRIATOMEXASR_SURROUNDER_MODE_MATRIX								(2)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER ビットクラッシャーのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief ビットクラッシャーで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 歪みの強さ[dB]
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーの歪みの強さ（ドライブ）を指定します。<br>
 * パラメーターの初期値は0.5f、最小値は0.0f、最大値は48.0fです。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_DRIVE_DB						(0)

/*JP
 * \brief 量子化ビット数
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーの量子化ビット数を指定します。<br>
 * 小さく設定するほど振幅がLo-Fiになります。<br>
 * パラメーターの初期値は8、最小値は1、最大値は24です。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_DEPTH_BITS					(1)

/*JP
 * \brief ダウンサンプリング
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーのダウンサンプリングを指定します。<br>
 * 大きく設定するほど時間がLo-Fiになります。<br>
 * パラメーターの初期値は8、最小値は1、最大値は100です。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_DOWN_SAMPLING				(2)

/*JP
 * \brief dry成分の割合
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーのdry（原音）成分をミックスする割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_DRY_MIX						(3)

/*JP
 * \brief wet成分の割合
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーのwet（歪み）成分をミックスする割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_WET_MIX						(4)

/*JP
 * \brief 最終出力レベル[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 * \par 説明:
 * 本パラメーターインデックスにビットクラッシャーの最終出力レベルを指定します。<br>
 * パラメーターの初期値は0.5f、最小値は0.0f、最大値は10の2.4乗（48dBに相当する値）です。
 */
#define CRIATOMEXASR_BIT_CRUSHER_PARAMETER_OUTPUT_GAIN					(5)

/*JP
 * \brief ビットクラッシャーのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_BIT_CRUSHER
 */
#define CRIATOMEXASR_BIT_CRUSHER_NUM_PARAMETERS							(6)

/*JP
 * \defgroup CRIATOMASR_DSP_PARAM_PHASER フェーザーのパラメーター
 * \ingroup CRIATOMASR_DSP_PARAM
 * \brief フェーザーで設定するパラメーターの定義です。
 * \sa criAtomExAsrRack_SetEffectParameter, criAtomExAsrRack_GetEffectParameter
 */
/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーのフェイジング効果の強さを指定します。<br>
 * パラメーターの初期値は8、最小値は4、最大値は12です。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_STAGES							(0)

/*JP
 * \brief 深さ（LFO振幅）
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーの深さを指定します。<br>
 * パラメーターの初期値は0.5f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_DEPTH								(1)

/*JP
 * \brief レート（スピード、LFO周波数）[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーのLFOのレートを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.01f、最大値は100.0fです。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_RATE								(2)

/*JP
 * \brief フィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーのフィードバックゲインを指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_FEEDBACK							(3)

/*JP
 * \brief dry成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーのdry（原音）成分のミックス割合を指定します。<br>
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_DRY_MIX							(4)

/*JP
 * \brief wet成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 * \par 説明:
 * 本パラメーターインデックスにフェーザーのwet（原音）成分のミックス割合を指定します。
 * パラメーターの初期値は0.71f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_PHASER_PARAMETER_WET_MIX							(5)

/*JP
 * \brief フェーザーのパラメーター数
 * \ingroup CRIATOMASR_DSP_PARAM_PHASER
 */
#define CRIATOMEXASR_PHASER_NUM_PARAMETERS								(6)

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/
/*==========================================================================
 *      CRI AtomEx ASR API
 *=========================================================================*/
/*JP
 * \brief ASRの初期化コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ::criAtomExAsr_Initialize 関数に設定するコンフィグ構造体
 * （ ::CriAtomExAsrConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomExAsr_Initialize, CriAtomExAsrConfig
 */
#define criAtomExAsr_SetDefaultConfig(p_config)	\
{\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->num_buses = CRIATOMEXASR_DEFAULT_NUM_BUSES; \
	(p_config)->output_channels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;\
	(p_config)->output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_NATIVE;\
	(p_config)->context	= NULL;\
	(p_config)->max_racks = 8;\
	(p_config)->ambisonics_order_type = CRIATOMAMBISONICS_ORDER_TYPE_NONE;\
}

/*JP
 * \brief レベル測定機能コンフィグ構造体にデフォルト値をセット
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ::criAtomExAsr_AttachBusAnalyzer 関数に設定するコンフィグ構造体
 * （ ::CriAtomExAsrBusAnalyzerConfig ）に、デフォルト値をセットします。<br>
 * \sa criAtomExAsr_AttachBusAnalyzer, CriAtomExAsrBusAnalyzerConfig
 */
#define criAtomExAsr_SetDefaultConfigForBusAnalyzer(p_config) \
{\
	(p_config)->interval = 50;\
	(p_config)->peak_hold_time = 1000;\
}

/*==========================================================================
 *      CRI AtomEx ASR Rack API
 *=========================================================================*/
/*JP
 * \brief CriAtomAsrConfigへのデフォルトパラメーターをセット
 * \ingroup ATOMLIB_ASR
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomAsr_Initialize 関数に設定するコンフィグ構造体（ ::CriAtomAsrConfig ）に、
 * デフォルトの値をセットします。<br>
 * \sa
 * CriAtomAsrConfig
*/
#define criAtomExAsrRack_SetDefaultConfig(p_config)	\
{\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->num_buses = CRIATOMEXASR_DEFAULT_NUM_BUSES; \
	(p_config)->output_channels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;\
	(p_config)->output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_NATIVE;\
	(p_config)->output_rack_id = 0;\
	(p_config)->context = NULL;\
}

/*==========================================================================
 *      CRI Atom ASR API
 *=========================================================================*/
/*JP
 * \brief CriAtomAsrConfigへのデフォルトパラメーターをセット
 * \ingroup ATOMLIB_ASR
 * \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
 * \par 説明:
 * ::criAtomAsr_Initialize 関数に設定するコンフィグ構造体（ ::CriAtomAsrConfig ）に、
 * デフォルトの値をセットします。<br>
 * \sa
 * CriAtomAsrConfig
*/
#define criAtomAsr_SetDefaultConfig(p_config)	\
{\
	(p_config)->server_frequency = 60.0f;\
	(p_config)->num_buses = CRIATOMEXASR_DEFAULT_NUM_BUSES; \
	(p_config)->output_channels = CRIATOM_DEFAULT_OUTPUT_CHANNELS;\
	(p_config)->output_sampling_rate = CRIATOM_DEFAULT_OUTPUT_SAMPLING_RATE;\
	(p_config)->sound_renderer_type	= CRIATOM_SOUND_RENDERER_NATIVE;\
	(p_config)->context	= NULL;\
	(p_config)->max_racks = 8;\
	(p_config)->ambisonics_order_type = CRIATOMAMBISONICS_ORDER_TYPE_NONE;\
}

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
* \brief ライブラリ初期化用コンフィグ構造体にデフォルト値をセット
* \ingroup ATOMEXLIB_GLOBAL
* \param[out]	p_config	初期化用コンフィグ構造体へのポインタ
* \par 説明:
* ::criAtomEx_InitializeForUserPcmOutput 関数に設定するコンフィグ構造体
* （ ::CriAtomExConfigForUserPcmOutput ）に、デフォルトの値をセットします。<br>
* \sa CriAtomExConfigForUserPcmOutput
*/
#define criAtomEx_SetDefaultConfigForUserPcmOutput(p_config)			\
{															\
	criAtomEx_SetDefaultConfig(&(p_config)->atom_ex);		\
	criAtomExAsr_SetDefaultConfig(&(p_config)->asr);		\
	criAtomExHcaMx_SetDefaultConfig(&(p_config)->hca_mx);	\
}

/*==========================================================================
 *      CRI ASRバスエフェクト パラメーターインデックスアクセスマクロ
 *=========================================================================*/
/*JP
 * \brief wet成分のミックス
 * \ingroup CRIATOMASR_DSP_PARAM_CHORUS
 * \param[in] tap_index	設定対象のモジュレータタップのインデックス
 * \par 説明:
 * 本パラメーターインデックスにコーラスのwet（フィードバック）成分のミックス割合をモジュレータのインデックスにより指定します。<br>
 * 全てのタップでパラメーターの初期値は0.5f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_CHORUS_PARAMETER_WET_MIX(tap_index)				\
	((tap_index) + 5)

/*JP
 * \brief センドレベル[振幅]
 * \param[in] input_ch	設定対象の入力チャンネル
 * \param[in] output_ch	設定対象の出力チャンネル
 * \ingroup CRIATOMASR_DSP_PARAM_MATRIX
 * \par 説明:
 * 本パラメーターインデックスにマトリクスのセンドレベルを入出力チャンネル数を用いて指定します。<br>
 * パラメーターの最小値は0.0f、最大値は1.0fです。初期値にはinput_ch == output_chの要素には1.0f、それ以外には0.0fがセットされます。
 */
#define CRIATOMEXASR_MATRIX_PARAMETER_LEVELS(input_ch, output_ch)		\
	((input_ch) * CRIATOMEXASR_MATRIX_MAX_NUM_CHANNELS + (output_ch))

/*JP
 * \brief 各バンドのフィルタータイプ
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 * \param[in] band_index	設定対象のバンドインデックス
 * \par 説明:
 * 本パラメーターインデックスに3バンドイコライザ・32バンドイコライザの各バンドのフィルターのタイプを指定します。<br>
 * 各バンドのフィルターはバイクアッドフィルターから構成されます。
 * \attention 32バンドイコライザでは、ツール上で有効にしたバンドのフィルターのみが有効になり、バンド数も有効になっているバンド数のみに制限されます。
 * \sa CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_LOWSHELF, CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_HIGHSHELF, CRIATOMEXASR_MULTIBANDS_EQ_BAND_FILTER_TYPE_PEAKING
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_PARAMETER_TYPE(band_index)			\
	(CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND * (band_index))

/*JP
 * \brief 各バンドの中心周波数[Hz]
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 * \param[in] band_index	設定対象のバンドインデックス
 * \par 説明:
 * 本パラメーターインデックスに3バンドイコライザ・32バンドイコライザの各バンドのフィルターの中心周波数を指定します。<br>
 * パラメーターの初期値は24.0f、最小値は24.0f、最大値は24000.fです。
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_PARAMETER_FREQUENCY(band_index)		\
	(CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND * (band_index) + 1)	

/*JP
 * \brief 各バンドのQ値
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 * \param[in] band_index	設定対象のバンドインデックス
 * \par 説明:
 * 本パラメーターインデックスに3バンドイコライザ・32バンドイコライザの各バンドのQ値（尖鋭度、クオリティファクタ）を指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は10.0fです。<br>
 * バンドパスフィルター以外では信号処理の際に最小値は0.001fに制限されます。
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_PARAMETER_QUALITY_FACTOR(band_index)	\
	(CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND * (band_index) + 2)	

/*JP
 * \brief 各バンドの出力ゲイン[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 * \param[in] band_index	設定対象のバンドインデックス
 * \par 説明:
 * 本パラメーターインデックスに3バンドイコライザ・32バンドイコライザの各バンドの出力ゲインを指定します。<br>
 * パラメーターの初期値は1.0f、最小値は0.0f、最大値は5.0fです。<br>
 * ローシェルフ、ハイシェルフ、ピーキングフィルターの場合は信号処理の際に最小値が √1/65536.0fに制限されます。
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_PARAMETER_GAIN(band_index)			\
	(CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND * (band_index) + 3)	

/*JP
 * \brief 3バンドイコライザ・32バンドイコライザの全パラメーター数を、バンド数指定により計算します。
 * \ingroup CRIATOMASR_DSP_PARAM_MULTIBANDS_EQ
 * \param[in] num_bands	バンド数
 */
#define CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETERS(num_bands)			\
	((num_bands) * CRIATOMEXASR_MULTIBANDS_EQ_NUM_PARAMETER_PAR_BAND)

/*JP
 * \brief 遅延時間[ms]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \param[in] i_tap	設定対象のタップのインデックス
 * \par 説明:
 * 本パラメーターインデックスにマルチタップディレイの各タップの遅延時間を指定します。<br>
 * パラメーターの初期値は最大ディレイ時間の半分の値、最大値は10000.0f、最小値は4つのタップ1,2,3,4それぞれで20.0f、40.0f、60.0f、80.0fに制限されます。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_DELAY_TIME_MS(i_tap)		\
	(0 + (i_tap) * CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP)

/*JP
 * \brief 出力レベル[振幅]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \param[in] i_tap	設定対象のタップのインデックス
 * \par 説明:
 * 本パラメーターインデックスにマルチタップディレイの各タップの出力レベルを指定します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は1.0fです。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_LEVEL(i_tap)				\
	(1 + (i_tap) * CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP)

/*JP
 * \brief 方向（パン）角度[°]
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \param[in] i_tap	設定対象のタップのインデックス
 * \par 説明:
 * 本パラメーターインデックスにマルチタップディレイの各タップの水平方向の角度を指定します。<br>
 * この角度を指定することで、水平方向に広がりを持った遅延音声を表現できます。<br>
 * パラメーターの初期値は0.0f、最小値は-180.0f、最大値は180.fです。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_AZIMUTH(i_tap)			\
	(2 + (i_tap) * CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP)

/*JP
 * \brief フィードバックゲイン
 * \ingroup CRIATOMASR_DSP_PARAM_DELAY
 * \param[in] i_tap	設定対象のタップのインデックス
 * \par 説明:
 * 本パラメーターインデックスにマルチタップディレイのフィードバックゲインを指定します。
 * \attention フィードバックゲインが大きすぎると出力が発散します。<br>
 * パラメーターの初期値は0.0f、最小値は0.0f、最大値は各タップで1.0fですが、全タップの総和が0.90fになるように制限されます。
 */
#define CRIATOMEXASR_MULTITAP_DELAY_PARAMETER_FEEDBACK(i_tap)			\
	(3 + (i_tap) * CRIATOMEXASR_MULTITAP_DELAY_NUM_PARAMETER_PAR_TAP)

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/
/*==========================================================================
 *      CRI AtomEx ASR API
 *=========================================================================*/
/*JP
 * \brief ASR初期化用コンフィグ構造体
 * \ingroup ATOMEXLIB_ASR
 * ASR（Atom Sound Renderer）の動作仕様を指定するための構造体です。<br>
 * ::criAtomExAsr_Initialize 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomExAsr_SetDefaultConfig マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomExAsr_Initialize 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExAsr_SetDefaultConfig 
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExAsr_Initialize, criAtomExAsr_SetDefaultConfig
 */
typedef struct CriAtomExAsrConfigTag {
	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		\attention
		Atomライブラリ初期化時に指定した値（ ::CriAtomExConfig 構造体の
		server_frequency ）と、同じ値をセットする必要があります。<br>
		\sa CriAtomConfig
	*/
	CriFloat32 server_frequency;

	/*JP
		\par 説明:
		\brief バス数
		\par 説明:
		ASRが作成するバスの数を指定します。<br>
		バスはサウンドのミックスや、エフェクトの管理等を行います。<br>
		マスターバスの領域を1つ分含めるため、必ず1以上の値を設定して下さい。<br>
	*/
	CriSint32 num_buses;

	/*JP
		\brief 出力チャンネル数
		ASRの出力チャンネル数を指定します。<br>
		パン3Dもしくは3Dポジショニング機能を使用する場合は6ch以上を指定します。<br>
	*/
	CriSint32 output_channels;
	
	/*JP
		\brief 出力サンプリングレート
		\par 説明:
		出力および処理過程のサンプリングレートを指定します。<br>
		通常、ターゲット機のサウンドデバイスのサンプリングレートを指定します。<br>
		\par 備考:
		低くすると処理負荷を下げることができますが音質が落ちます。<br>
	*/
	CriSint32 output_sampling_rate;
	
	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		ASRの出力先サウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		\attention
		CRIATOM_SOUND_RENDERER_ASRおよびCRIATOM_SOUND_RENDERER_DEFAULTは指定しないでください。
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでASRラックを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
	
	/*JP
		\brief ASRラックの最大数
		\par 説明:
		作成可能なASRラックの最大個数です。<br>
	*/
	CriSint32 max_racks;

	/*JP
		\brief Ambisonicsのオーダータイプ
		\par 説明:
		AtomライブラリがAmbisonicsの再生を行う際、どのオーダータイプを使用するか設定します。<br>
		\par 備考:
		Ambisonicsの再生に非対応のプラットフォームでは、この値は無視されます。<br>
		また、 ::CRIATOMAMBISONICS_ORDER_TYPE_NONE を指定した場合、Ambisonicsの再生を行いません。<br>
	 */
	CriAtomAmbisonicsOrderType ambisonics_order_type;
} CriAtomExAsrConfig;

/*JP
 * \brief レベル測定機能アタッチ用コンフィグ構造体
 * \ingroup ATOMEXLIB_ASR
 * レベル測定機能をバスにアタッチするための構造体です。<br>
 * ::criAtomExAsr_AttachBusAnalyzer 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomExAsr_SetDefaultConfigForBusAnalyzer マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomExAsr_AttachBusAnalyzer 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExAsr_SetDefaultConfigForBusAnalyzer
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExAsr_AttachBusAnalyzer
 */
typedef struct {
	/*JP
		\brief 測定間隔（ミリ秒単位）
		\par 説明:
		測定結果を更新する間隔です。<br>
	*/
	CriSint32 interval;

	/*JP
		\brief ピークホールド時間（ミリ秒単位）
		\par 説明:
		ピーク値がより大きい値で更新されたとき、下がらないようにホールドする時間です。<br>
	*/
	CriSint32 peak_hold_time;
} CriAtomExAsrBusAnalyzerConfig;

/*JP
 * \brief レベル測定情報
 * \par 説明:
 * バスのレベル測定情報を取得するための構造体です。<br>
 * ::criAtomExAsr_GetBusAnalyzerInfo 関数で利用します。
 * \par 備考:
 * 各レベル値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 以下のコードでデシベル表記に変換することができます。<br>
 * dB = 10.0f * log10f(level);
 * \sa criAtomExAsr_GetBusAnalyzerInfo
 */
typedef struct CriAtomExAsrBusAnalyzerInfoTag {
	/*JP
		\brief 有効チャンネル数
		\par 説明:
		測定結果が有効なチャンネル数です。<br>
	*/
	CriSint32 num_channels;
	
	/*JP
		\brief RMSレベル
		\par 説明:
		測定間隔間の音声振幅のRMS（二乗平均平方根）を計算した値です。<br>
		音圧レベルとして扱われます。
	*/
	CriFloat32 rms_levels[CRIATOMEXASR_MAX_CHANNELS];
	
	/*JP
		\brief ピークレベル
		\par 説明:
		測定間隔間の音声振幅の最大値です。<br>
	*/
	CriFloat32 peak_levels[CRIATOMEXASR_MAX_CHANNELS];
	
	/*JP
		\brief ピークホールドレベル
		\par 説明:
		ホールドしているピークレベル値です。<br>
	*/
	CriFloat32 peak_hold_levels[CRIATOMEXASR_MAX_CHANNELS];
} CriAtomExAsrBusAnalyzerInfo;

/*JP
 * \brief パン情報構造体
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * バスにおけるパン情報をまとめた構造体です。<br>
 * バスのパン情報の設定や取得に使用します。
 * \sa criAtomExAsr_SetBusPanInfoByName, criAtomExAsr_GetBusPanInfoByName, criAtomExAsrRack_SetBusPanInfoByName, criAtomExAsrRack_GetBusPanInfoByName
 */
typedef struct CriAtomExAsrBusPanInfoTag {
	/*JP
		\brief 音量
		\par 説明:
		パンにおける音量です。<br>
		0.0f 〜 1.0fの範囲で設定・取得されます。<br>
		また、通常の音量と掛け合わされます。
	*/
	CriFloat32 volume;
	/*JP
		\brief 角度
		\par 説明:
		パンにおける角度です。<br>
		0.0f を正面とした -180.0f 〜 180.0fの範囲で設定・取得されます。
	*/
	CriFloat32 angle;
	/*JP
		\brief インテリア距離
		\par 説明:
		パンにおけるインテリア距離です。<br>
		0.0f 〜 1.0fの範囲で設定・取得されます。
	*/
	CriFloat32 distance;
	/*JP
		\brief スプレッド
		\par 説明:
		パンにおけるスプレッドです。<br>
		0.0f 〜 1.0fの範囲で設定・取得されます。
	*/
	CriFloat32 spread;
} CriAtomExAsrBusPanInfo;

/*JP
 * \brief 波形フィルターコールバック関数
 * \ingroup ATOMEXLIB_PLAYER
 * \par 説明:
 * \param[in]		obj				ユーザ指定オブジェクト
 * \param[in]		format			PCMの形式
 * \param[in]		num_channels	チャンネル数
 * \param[in]		num_samples		サンプル数
 * \param[in,out]	data			PCMデータのチャンネル配列
 * \return							なし
 * \par 説明:
 * バスに登録することができる PCM データを受け取るコールバック関数です。<br>
 * <br>
 * コールバック関数の登録には ::criAtomExAsr_SetBusFilterCallback 関数を使用します。<br>
 * コールバック関数を登録すると、サウンドレンダラが音声処理を行う度に、
 * コールバック関数が実行されるようになります。<br>
 * <br>
 * フィルターコールバック関数には、 PCM データのフォーマットやチャンネル数、
 * 参照可能なサンプル数、 PCM データを格納した領域のアドレスが返されます。<br>
 * コールバック内では PCM データの値を直接参照可能になるので、
 * 再生中の音声の振幅をチェックするといった用途に利用可能です。<br>
 * <br>
 * また、コールバック関数内で PCM データを加工すると、再生音に反映されるため、
 * PCM データに対してユーザ独自のエフェクトをかけることも可能です。<br>
 * （ただし、タイムストレッチ処理のようなデータ量が増減する加工を行うことはできません。）<br>
 * \par 備考:
 * PCM データはチャンネル単位で分離されています。<br>
 * （インターリーブされていません。）<br>
 * サンプル数は32の倍数で、下限は32、上限は256となります。<br>
 * また、サンプル数はプラットフォームデバイスの出力の進捗に応じて変化します。<br>
 * 第 6 引数（ data 配列）には、各チャンネルの PCM データ配列の先頭アドレスが格納されています。<br>
 * （二次元配列の先頭アドレスではなく、チャンネルごとの PCM データ配列の先頭アドレスを格納した
 * 一次元のポインタ配列です。）<br>
 * 格納されてくる PCM データはバスに設定されているエフェクトの処理後の音声です。<br>
 * <br>
 * プラットフォームによって、 PCM データのフォーマットは異なります。<br>
 * 実行環境のデータフォーマットについては、第 3 引数（ format ）で判別可能です。<br>
 * PCM データのフォーマットが 16 bit 整数型の場合、 format は CRIATOM_PCM_FORMAT_SINT16 となり、
 * PCM データのフォーマットが 32 bit 浮動小数点数型の場合、 format は CRIATOM_PCM_FORMAT_FLOAT32 となります。<br>
 * それぞれのケースで PCM データの値域は異なりますのでご注意ください。<br>
 * - CRIATOM_PCM_FORMAT_SINT16 時は -32768 〜 +32767
 * - CRIATOM_PCM_FORMAT_FLOAT32 時は -1.0f 〜 +1.0f
 * 
 * （多重音声のミキシングや前段のエフェクトによっては上記範囲を超えた値が出る可能性があります。）<br>
 * \attention
 * <br>
 * 本コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * コールバック関数内で長時間処理をブロックすると、音切れ等の問題が発生する可能性があります。<br>
 * \sa criAtomExAsr_SetBusFilterCallback
 */
typedef void (*CriAtomExAsrBusFilterCbFunc)(void *obj, CriAtomPcmFormat format,
	CriSint32 num_channels, CriSint32 num_samples, void *data[]);

/*JP
 * \brief エフェクトインターフェース構造体の不完全型
 * \par 説明:
 * エフェクトインターフェース登録関数の引数型です。
 * \sa criAtomExAsr_RegisterEffectInterface, criAtomExAsr_UnregisterEffectInterface
 */
typedef const struct CriAfxInterfaceWithVersionTag* CriAtomExAsrAfxInterfaceWithVersionPtr;

/*JP
 * \brief IRリバーブエフェクトの負荷計測構造体
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * IRリバーブの負荷計測で得られる情報をまとめた構造体です。
 * IRリバーブは一定サンプルを1ブロックとして非同期で処理し、ブロック単位で負荷を計測します。
 * \attention
 * プラットフォームによって計測される内容が異なる場合があります。<br>
 * 詳しくは各プラットフォームのCRI ADX2 マニュアルの IR リバーブを参照してください。
 * \sa criAtomExAsr_GetIrReverbPerformanceInfo
 */
typedef struct CriAtomExAsrIrReverbPerformanceInfoTag {
	/*JP
		\brief ブロックサイズ
		\par 説明:
		Craftで設定可能なIRリバーブの1ブロックのサンプル数です。
		\par 備考:
		現在IRリバーブのブロックサイズは512,1024のみをサポートします。<br>
		バスにIRリバーブエフェクトが存在しない場合、0を返します。
    */
	CriUint32 blocksize;
	
	/*JP
		\brief サンプリングレート
		\par 説明:
		IRリバーブ内部サンプリングレートです。
		\par 備考:
		現在現在IRリバーブのサンプリングレートは48000Hzのみをサポートします。<br>
		バスにIRリバーブエフェクトが存在しない場合、0を返します。
    */
	CriUint32 sampling_rate;
	
	/*JP
		\brief 処理回数
		\par 説明:
		IRリバーブの1ブロックの処理回数です。
    */
	CriUint32 process_count;

	/*JP
		\brief 最新処理時間（マイクロ秒）
		\par 説明:
		IRリバーブの最新の1ブロックの処理にかかった時間です。
	*/
	CriUint32 last_process_time;

	/*JP
		\brief 最大処理時間（マイクロ秒）
		\par 説明:
		IRリバーブの計測リセットから取得時点までで最も長い1ブロックの処理時間です。
	*/
	CriUint32 max_process_time;

	/*JP
		\brief 平均処理時間（マイクロ秒）
		\par 説明:
		IRリバーブの計測リセットから取得時点まの1ブロックの平均処理時間です。
	*/
	CriUint32 average_process_time;

	/*JP
		\brief 最新処理インターバル（マイクロ秒）
		\par 説明:
		IRリバーブの最新の1ブロックの処理間隔です。
	*/
	CriUint32 last_process_interval;

	/*JP
		\brief 最大処理インターバル（マイクロ秒）
		\par 説明:
		IRリバーブの計測リセットから取得時点までで最も長い1ブロックの処理インターバルです。
	*/
	CriUint32 max_process_interval;

	/*JP
		\brief 平均処理時間（マイクロ秒）
		\par 説明:
		IRリバーブの計測リセットから取得時点まの1ブロックの平均処理インターバルです。
	*/
	CriUint32 average_process_interval;

} CriAtomExAsrIrReverbPerformanceInfo;

/*==========================================================================
 *      CRI AtomEx ASR Rack API
 *=========================================================================*/

/*JP
 * \brief ASRラックID
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASRラック管理用のID型です。<br>
 * ::criAtomExAsrRack_Create 関数でASRラックを作成すると取得できます。<br>
 * \sa criAtomExAsrRack_Create, criAtomExAsrRack_AttachDspBusSetting
 */
typedef CriSint32 CriAtomExAsrRackId;

/*JP
 * \brief ASRラック作成用コンフィグ構造体
 * \ingroup ATOMEXLIB_ASR
 * ASR（Atom Sound Renderer）の動作仕様を指定するための構造体です。<br>
 * ::criAtomExAsrRack_Create 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomExAsrRack_SetDefaultConfig マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomExAsrRack_Create 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomExAsrRack_SetDefaultConfig 
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomExAsrRack_Create, criAtomExAsrRack_SetDefaultConfig
 */
typedef struct CriAtomExAsrRackConfigTag {
	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		\attention
		Atomライブラリ初期化時に指定した値（ ::CriAtomExConfig 構造体の
		server_frequency ）と、同じ値をセットする必要があります。<br>
		\sa CriAtomConfig
	*/
	CriFloat32 server_frequency;
	
	/*JP
		\par 説明:
		\brief バス数
		\par 説明:
		ASRが作成するバスの数を指定します。<br>
		バスはサウンドのミックスや、エフェクトの管理等を行います。<br>
	*/
	CriSint32 num_buses;

	/*JP
		\brief 出力チャンネル数
		\par 説明:
		ASRラックの出力チャンネル数を指定します。<br>
		パン3Dもしくは3Dポジショニング機能を使用する場合は6ch以上を指定します。<br>
	*/
	CriSint32 output_channels;
	
	/*JP
		\brief 出力サンプリングレート
		\par 説明:
		ASRラックの出力および処理過程のサンプリングレートを指定します。<br>
		通常、ターゲット機のサウンドデバイスのサンプリングレートを指定します。<br>
		\par 備考:
		低くすると処理負荷を下げることができますが音質が落ちます。<br>
	*/
	CriSint32 output_sampling_rate;
	
	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		ASRラックの出力先サウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
	*/
	CriAtomSoundRendererType sound_renderer_type;

	/*JP
		\brief 出力先ASRラックID
		\par 説明:
		ASRラックの出力先ASRラックIDを指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_ASR を指定した場合のみ有効です。<br>
	*/
	CriAtomExAsrRackId output_rack_id;

	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでASRラックを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;
} CriAtomExAsrRackConfig;

/*==========================================================================
 *      CRI Atom ASR API
 *=========================================================================*/
/*JP
 * \brief ASR初期化用コンフィグ構造体
 * \ingroup ATOMLIB_ASR
 * ASR（Atom Sound Renderer）の動作仕様を指定するための構造体です。<br>
 * ::criAtomAsr_Initialize 関数の引数に指定します。<br>
 * \par 備考:
 * デフォルト設定を使用する場合、 ::criAtomAsr_SetDefaultConfig マクロで
 * 構造体にデフォルトパラメーターをセットした後、 ::criAtomAsr_Initialize 関数
 * に構造体を指定してください。<br>
 * \attention
 * 将来的にメンバが増える可能性があるため、 ::criAtomAsr_SetDefaultConfig 
 * マクロを使用しない場合には、使用前に必ず構造体をゼロクリアしてください。<br>
 * （構造体のメンバに不定値が入らないようご注意ください。）
 * \sa criAtomAsr_Initialize, criAtomAsr_SetDefaultConfig
 */
typedef struct CriAtomAsrConfigTag {
	/*JP
		\brief サーバー処理の実行頻度
		\par 説明:
		サーバー処理を実行する頻度を指定します。<br>
		\attention
		Atomライブラリ初期化時に指定した値（ ::CriAtomConfig 構造体の
		server_frequency ）と、同じ値をセットする必要があります。<br>
		\sa CriAtomConfig
	*/
	CriFloat32 server_frequency;
	
	/*JP
		\par 説明:
		\brief バス数
		\par 説明:
		ASRが作成するバスの数を指定します。<br>
		バスはサウンドのミックスや、エフェクトの管理等を行います。<br>
	*/
	CriSint32 num_buses;

	/*JP
		\brief 出力チャンネル数
		\par 説明:
		ASRの出力チャンネル数を指定します。<br>
		パン3Dもしくは3Dポジショニング機能を使用する場合は6ch以上を指定します。<br>
	*/
	CriSint32 output_channels;
	
	/*JP
		\brief 出力サンプリングレート
		\par 説明:
		出力および処理過程のサンプリングレートを指定します。<br>
		通常、ターゲット機のサウンドデバイスのサンプリングレートを指定します。<br>
		\par 備考:
		低くすると処理負荷を下げることができますが音質が悪くなります。<br>
	*/
	CriSint32 output_sampling_rate;
	
	/*JP
		\brief サウンドレンダラタイプ
		\par 説明:
		ASRの出力先サウンドレンダラの種別を指定します。<br>
		sound_renderer_type に CRIATOM_SOUND_RENDERER_NATIVE を指定した場合、
		音声データはデフォルト設定の各プラットフォームのサウンド出力に転送されます。<br>
		\attention
		CRIATOM_SOUND_RENDERER_ASRおよびCRIATOM_SOUND_RENDERER_DEFAULTは指定しないでください。
	*/
	CriAtomSoundRendererType sound_renderer_type;
	
	/*JP
		\brief プラットフォーム固有のパラメーターへのポインタ
		\par 説明:
		プラットフォーム固有のパラメーターへのポインタを指定します。
		NULLを指定した場合、プラットフォーム毎のデフォルトパラメーターでASRラックを作成します。<br>
		パラメーター構造体は各プラットフォーム固有ヘッダーに定義されています。
		パラメーター構造体が定義されていないプラットフォームでは、常にNULLを指定してください。
	*/
	void *context;

	/*JP
		\brief ASRラックの最大数
		\par 説明:
		作成可能なASRラックの最大個数です。<br>
	*/
	CriSint32 max_racks;

	/*JP
		\brief Ambisonicsのオーダータイプ
		\par 説明:
		AtomライブラリがAmbisonicsの再生を行う際、どのオーダータイプを使用するか設定します。<br>
		\par 備考:
		Ambisonicsの再生に非対応のプラットフォームでは、この値は無視されます。<br>
		また、 ::CRIATOMAMBISONICS_ORDER_TYPE_NONE を指定した場合、Ambisonicsの再生を行いません。<br>
	 */
	CriAtomAmbisonicsOrderType ambisonics_order_type;
} CriAtomAsrConfig;

/*==========================================================================
*      CRI AtomEx API
*=========================================================================*/
/*JP
* \brief Atomライブラリ初期化用コンフィグ構造体
* \ingroup ATOMLIB_PC
* CRI Atomライブラリの動作仕様を指定するための構造体です。<br>
* ::criAtomEx_InitializeForUserPcmOutput 関数の引数に指定します。<br>
* \sa criAtomEx_InitializeForUserPcmOutput, criAtomEx_SetDefaultConfigForUserPcmOutput
*/
typedef struct CriAtomExConfigForUserPcmOutputTag {
	CriAtomExConfig			atom_ex;	/*JP< AtomEx初期化用コンフィグ構造体	*/
	CriAtomExAsrConfig		asr;		/*JP< ASR初期化用コンフィグ			*/
	CriAtomExHcaMxConfig	hca_mx;		/*JP< HCA-MX初期化用コンフィグ構造体	*/
} CriAtomExConfigForUserPcmOutput;

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
/*==========================================================================
 *      CRI AtomEx ASR API
 *=========================================================================*/
/*JP
 * \brief ASR初期化用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config	ASR初期化用コンフィグ構造体
 * \par 説明:
 * ASR（Atom Sound Renderer）の初期化に必要なワーク領域のサイズを取得します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExAsr_Initialize 関数でASRの初期化を行う場合、
 * 本関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ASRの初期化に必要なワークメモリのサイズは、ASR初期化用コンフィグ
 * 構造体（ ::CriAtomExAsrConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExAsr_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx_SetUserAllocator, criAtomExAsr_Initialize
 */
CriSint32 CRIAPI criAtomExAsr_CalculateWorkSize(const CriAtomExAsrConfig *config);

/*JP
 * \brief ワーク領域サイズ計算用コンフィグ構造体の設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config	ASR初期化用コンフィグ構造体
 * \par 説明:
 * ワーク領域サイズの計算用に、ASR初期化用コンフィグ構造体
 * （ ::CriAtomExAsrConfig 構造体）を仮登録します。<br>
 * <br>
 * エフェクトのアタッチに必要なワーク領域のサイズは、
 * ASR初期化時（ ::criAtomExAsr_Initialize 関数実行時）
 * に設定する構造体のパラメーターによって変化します。<br>
 * そのため、通常はエフェクトのアタッチに必要なワーク領域サイズを計算する前に、
 * ASRを初期化する必要があります。<br>
 * 本関数を使用してASR初期化用コンフィグ構造体を登録した場合、
 * エフェクトのアタッチに必要なワーク領域のサイズを、
 * 初期化処理なしに計算可能になります。<br>
 * （ ::criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData
 * 関数が実行可能となります。）<br>
 * \par 備考:
 * 引数（ config ）に NULL を指定した場合、デフォルト設定
 * （ ::criAtomExAsr_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。<br>
 * <br>
 * 現状、本関数で一旦コンフィグ構造体を設定すると、
 * 設定前の状態（未初期化状態でのワーク領域サイズ計算をエラーとする動作）
 * に戻すことができなくなります。<br>
 * （関数を再度実行してパラメーターを上書きすることは可能です。）<br>
 * \attention
 * 本関数で登録した初期化用コンフィグ構造体は、
 * ASR未初期化状態でのワーク領域サイズ計算にしか使用されません。<br>
 * ASR初期化後には本関数に設定したパラメーターではなく、
 * 初期化時に指定されたパラメーターがワーク領域サイズの計算に使用されます。<br>
 * （本関数で登録する構造体のパラメーターと、
 * ASRの初期化に使用する構造体のパラメーターが異なる場合、
 * ワーク領域サイズが不足し、ハンドルの作成に失敗する恐れがあります。）<br>
 * <br>
 * 本関数を実行した場合でも、 ::criAtomEx_CalculateWorkSizeForDspBusSetting 
 * 関数は使用できません。<br>
 * DSPバス設定アタッチ用ワーク領域サイズの計算には、
 * ::criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData 
 * 関数を使用してください。）<br>
 * \par 例:
 * \code
 * 	CriAtomExAsrConfig asr_config;
 * 	
 * 	// ワーク領域計算用にASR初期化設定を仮登録
 * 	criAtomExAsr_SetDefaultConfig(&asr_config);
 * 	criAtomExAsr_SetConfigForWorkSizeCalculation(&asr_config);
 * 	
 * 	// DSPバス設定アタッチ用ワーク領域サイズの計算
 * 	dsp_work_size = criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData(
 * 		acf_data, acf_data_size, "DspBusSetting_0");
 * 		：
 * \endcode
 * \sa criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData
 */
void CRIAPI criAtomExAsr_SetConfigForWorkSizeCalculation(const CriAtomExAsrConfig *config);

/*JP
 * \brief ASRの初期化
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config		ASR初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ASR（Atom Sound Renderer）の初期化を行います。<br>
 * 本関数を実行することでASRが起動しASRラックが1個追加され、レンダリング結果の出力を開始します。<br>
 * \par 備考:
 * ASRの初期化に必要なワークメモリのサイズは、ASR初期化用コンフィグ
 * 構造体（ ::CriAtomExAsrConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定<br>
 * （ ::criAtomExAsr_SetDefaultConfig 適用時と同じパラメーター）で初期化処理を行います。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * <br>
 * 本関数を実行後、必ず対になる ::criAtomExAsr_Finalize 関数を実行してください。<br>
 * また、 ::criAtomExAsr_Finalize 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa criAtomEx_SetUserAllocator, criAtomExAsr_Finalize, criAtomExAsrRack_Create
 */
void CRIAPI criAtomExAsr_Initialize(
	const CriAtomExAsrConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ASRの終了
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASR（Atom Sound Renderer）の終了処理を行います。<br>
 * 本関数を実行することで、レンダリング結果の出力が停止されます。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ASR初期化時に確保されたメモリ領域が解放されます。<br>
 * （ASR初期化時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、<br>
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa criAtomEx_SetUserAllocator, criAtomExAsr_Initialize
 */
void CRIAPI criAtomExAsr_Finalize(void);

/*JP
 * \brief バスのボリュームの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	volume		ボリューム値
 * \par 説明:
 * バスのボリュームを設定します。<br>
 * センドタイプがポストボリューム、ポストパンのセンド先に有効です。<br>
 * <br>
 * ボリューム値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * ボリュームのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsr_SetBusVolumeByName(const CriChar8* bus_name, CriFloat32 volume);

/*JP
 * \brief バスのボリュームの取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	volume		ボリューム値
 * \par 説明:
 * バスのボリュームを設定します。<br>
 * センドタイプがポストボリューム、ポストパンのセンド先に有効です。<br>
 * <br>
 * ボリューム値は実数値で得られます。<br>
 * ボリュームのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsr_GetBusVolumeByName(const CriChar8* bus_name, CriFloat32 *volume);

/*JP
 * \brief バスのパン情報の設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	pan_info	パン情報
 * \par 説明:
 * バスのパン情報を設定します。<br>
 * センドタイプがポストパンのセンド先に有効です。
 * \par 備考:
 * 本関数はデフォルトの ASR ラックの DSP バス設定を参照します。<br>
 * 任意の ASR ラックの DSP バス設定を参照する場合、 ::criAtomExAsrRack_SetBusPanInfoByName 関数を使用してください。<br>
 * <br>
 * パン情報のデフォルト値はCRI Atom Craftで設定した値です。
 */
void CRIAPI criAtomExAsr_SetBusPanInfoByName(const CriChar8 *bus_name, const CriAtomExAsrBusPanInfo *pan_info);

/*JP
 * \brief バスのパン情報の取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[out]	pan_info	パン情報
 * \par 説明:
 * バスのパン情報を取得します。
 * \par 備考:
 * 本関数はデフォルトの ASR ラックの DSP バス設定を参照します。<br>
 * 任意の ASR ラックの DSP バス設定を参照する場合、 ::criAtomExAsrRack_GetBusPanInfoByName 関数を使用してください。
 */
void CRIAPI criAtomExAsr_GetBusPanInfoByName(const CriChar8 *bus_name, CriAtomExAsrBusPanInfo *pan_info);

/*JP
 * \brief バスのレベル行列の設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name		バス名
 * \param[in]	input_channels	入力チャンネル数
 * \param[in]	output_channels	出力チャンネル数
 * \param[in]	matrix			レベル行列を1次元に表したレベル値の配列
 * \par 説明:
 * バスのレベル行列を設定します。<br>
 * センドタイプがポストパンのセンド先に有効です。<br>
 * <br>
 * レベルマトリックスは、音声データの各チャンネルの音声を、どのスピーカーから
 * どの程度の音量で出力するかを指定するための仕組みです。<br>
 * matrixは[input_channels * output_channels]の配列です。<br>
 * 入力チャンネルch_inから出力チャンネルch_outにセンドされるレベルは
 * matrix[ch_in * output_channels + ch_out]にセットします。<br>
 * レベル行列のデフォルト値は単位行列です。<br>
 * <br>
 * レベル値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * レベル値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのレベルで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 */
void CRIAPI criAtomExAsr_SetBusMatrixByName(const CriChar8* bus_name, 
	CriSint32 input_channels, CriSint32 output_channels, const CriFloat32 matrix[]);

/*JP
 * \brief バスのセンドレベルの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name 		バス名
 * \param[in]	sendto_bus_name センド先のバス名
 * \param[in]	level			レベル値
 * \par 説明:
 * センド先バスに音声データを送る際のレベルを設定します。<br>
 * <br>
 * レベル値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * レベル値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのレベルで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * レベルのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsr_SetBusSendLevelByName(
	const CriChar8* bus_name, const CriChar8* sendto_bus_name, CriFloat32 level);

/*JP
 * \brief エフェクト動作時パラメーターの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name		バス名
 * \param[in]	effect_name		エフェクト名
 * \param[in]	parameter_index	エフェクト動作時パラメーターインデックス
 * \param[in]	parameter_value エフェクト動作時パラメーター設定値
 * \par 説明:
 * デフォルトのASRラックIDを使用してエフェクトの動作時パラメーターを設定します。<br>
 * 動作時パラメーターを設定する際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。<br>
 * 指定したバスに指定したIDのエフェクトが存在しない場合、関数は失敗します。<br>
 * セットしたパラメーターはcriAtomExAsr_UpdateParameter関数を呼ぶまで実際にエフェクトに反映されません。<br>
 * パラメーターインデックスと実際のパラメーターの対応については、各エフェクトのパラメーターインデックス（ \ref CRIATOMASR_DSP_PARAM ）をご参照下さい。
 * \sa criAtomEx_AttachDspBusSetting, criAtomExAsr_UpdateEffectParameters
 */
void CRIAPI criAtomExAsr_SetEffectParameter(
	const CriChar8* bus_name, const CriChar8* effect_name, 
	CriUint32 parameter_index, CriFloat32 parameter_value);

/*JP
 * \brief エフェクト動作時パラメーターの反映
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name		バス名
 * \param[in]	effect_name		エフェクト名
 * \par 説明:
 * デフォルトのASRラックIDを使用してエフェクトの動作時パラメーターを反映します。<br>
 * 動作時パラメーターを実際に反映するには、criAtomExAsr_SetEffectParameter の他にも本関数を呼び出して下さい。
 * \sa criAtomEx_AttachDspBusSetting, criAtomExAsr_SetEffectParameter
 */
void CRIAPI criAtomExAsr_UpdateEffectParameters(const CriChar8* bus_name, const CriChar8* effect_name);

/*JP
 * \brief エフェクト動作時パラメーターの取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]		bus_name		バス名
 * \param[in]		effect_name		エフェクト名
 * \param[in]		parameter_index	エフェクト動作時パラメーターインデックス
 * \return 指定したパラメーターインデックスのエフェクト動作時パラメーター値を返します。
 * \par 説明:
 * デフォルトのASRラックIDを使用してエフェクトの動作時パラメーターを取得します。<br>
 * 動作時パラメーターを取得する際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。指定したバスに指定した名前のエフェクトが存在しない場合、関数は失敗します。<br>
 * 動作時パラメーターの詳細については、各エフェクトのパラメーターインデックス（ \ref CRIATOMASR_DSP_PARAM ）をご参照下さい。
 * \sa criAtomEx_AttachDspBusSetting
 */
CriFloat32 CRIAPI criAtomExAsr_GetEffectParameter(
	const CriChar8* bus_name, const CriChar8* effect_name, CriUint32 parameter_index);

/*JP
 * \brief エフェクトのバイパス設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	effect_name	エフェクト名
 * \param[in]	bypass		バイパス設定（CRI_TRUE:バイパスを行う, CRI_FALSE:バイパスを行わない）
 * \par 説明:
 * エフェクトのバイパス設定を行います。<br>
 * バイパス設定されたエフェクトは音声処理の際、スルーされるようになります。<br>
 * エフェクトのバイパス設定をする際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。指定したバスに指定したIDのエフェクトが存在しない場合、関数は失敗します。<br>
 * \attention
 * 音声再生中にバイパス設定を行うとノイズが発生することがあります。<br>
 * \sa criAtomEx_AttachDspBusSetting
 */
void CRIAPI criAtomExAsr_SetEffectBypass(
	const CriChar8* bus_name, const CriChar8* effect_name, CriBool bypass);

/*JP
 * \brief レベル測定機能の追加
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	config		レベル測定機能のコンフィグ構造体
 * \par 説明:
 * バスにレベル測定機能を追加し、レベル測定処理を開始します。<br>
 * 本関数を実行後、 ::criAtomExAsr_GetBusAnalyzerInfo 関数を実行することで、
 * RMSレベル（音圧）、ピークレベル（最大振幅）、ピークホールドレベルを
 * 取得することが可能です。
 * 複数バスのレベルを計測するには、バスごとに本関数を呼び出す必要があります。
 * \par 例:
 * \code
 * 	// レベル測定情報取得用構造体
 * 	CriAtomExAsrBusAnalyzerInfo info;
 * 	
 * 	// 0番バス（マスターバス）にレベル測定機能の追加
 * 	criAtomExAsr_AttachBusAnalyzer(0, NULL);
 * 	
 * 	　　：
 * 	
 * 	// レベル測定情報の取得
 * 	criAtomExAsr_GetBusAnalyzerInfo(0, &info);
 * 	
 * 	// 計測結果の表示
 *  for (i = 0; i < CRIATOMEXASR_MAX_CHANNELS; i++) {
 * 	    printf("[%d] RMS: %1.6f, Peak: %1.6f, Hold: %1.6f", 
 * 	        i, info.rms_levels[i], info.peak_levels[i], info.peak_hold_levels[i]);
 *  }
 * \endcode
 * \attention
 * 本関数は ::criAtomEx_AttachDspBusSetting 関数と同一のリソースを操作します。<br>
 * そのため、現状は ::criAtomEx_AttachDspBusSetting 関数を実行すると、
 * ::criAtomExAsr_GetBusAnalyzerInfo 関数による情報取得ができなくなります。<br>
 * 本関数と ::criAtomEx_AttachDspBusSetting 関数を併用する際には、
 * ::criAtomEx_AttachDspBusSetting 関数を実行する前に一旦
 * ::criAtomExAsr_DetachBusAnalyzer 関数でレベル測定機能を無効化し、
 * ::criAtomEx_AttachDspBusSetting 関数実行後に再度本関数を実行してください。<br>
 * \code
 * 		：
 * 	// DSPバス設定の変更前に一旦レベル測定機を無効化
 * 	criAtomExAsr_DetachBusAnalyzer(0);
 * 	
 * 	// DSPバス設定の更新
 * 	criAtomEx_AttachDspBusSetting("DspBusSetting_0", NULL, 0);
 * 	
 * 	// レベル測定機の再アタッチ
 * 	criAtomExAsr_AttachBusAnalyzer(0, NULL);
 * 		：
 * \endcode
 * \sa criAtomExAsr_GetBusAnalyzerInfo, criAtomExAsr_DetachBusAnalyzer
 */
void CRIAPI criAtomExAsr_AttachBusAnalyzerByName(
	const CriChar8* bus_name, const CriAtomExAsrBusAnalyzerConfig* config);

/*JP
 * \brief レベル測定機能の削除
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \par 説明:
 * バスからレベル測定機能を削除します。
 * \sa criAtomExAsr_AttachBusAnalyzer
 */
void CRIAPI criAtomExAsr_DetachBusAnalyzerByName(const CriChar8* bus_name);

/*JP
 * \brief レベル測定結果の取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[out]	info		レベル測定結果の構造体
 * \par 説明:
 * バスからレベル測定機能の結果を取得します。
 * \sa criAtomExAsr_AttachBusAnalyzer
 */
void CRIAPI criAtomExAsr_GetBusAnalyzerInfoByName(
	const CriChar8* bus_name, CriAtomExAsrBusAnalyzerInfo *info);

/*JP
 * \brief 波形フィルターコールバック関数の登録
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	bus_name	バス名
 * \param[in]	pre_func	エフェクト処理前のフィルターコールバック関数
 * \param[in]	post_func	エフェクト処理後のフィルターコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * バスに流れている PCM データを受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、サウンドレンダラが音声処理を行ったタイミングで呼び出されます。<br>
 * エフェクト処理前とエフェクト処理後の2種類の使用しないほうはNULL指定が可能です。<br>
 * \attention
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * 波形フィルターコールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * \sa CriAtomExPlayerFilterCbFunc
 */
void CRIAPI criAtomExAsr_SetBusFilterCallbackByName(const CriChar8* bus_name, 
	CriAtomExAsrBusFilterCbFunc pre_func, CriAtomExAsrBusFilterCbFunc post_func, void *obj);

/*JP
 * \brief 最大バス数を取得
 * \ingroup ATOMEXLIB_ASR
 * \return						最大バス数
 * \par 説明:
 * 利用可能な最大バス数を取得します。
 * <br>
 * デフォルト設定では ::CRIATOMEXASR_DEFAULT_NUM_BUSES を返します。
 * <br>
 * 最大バス数を変更するには、CriAtomExAsrConfig::num_buses を変更して
 * ASRラックを作成してください。
 * \sa CriAtomExAsrConfig, criAtomExAsr_Create, criAtomExAsr_SetDefaultConfig
 */
CriSint32 CRIAPI criAtomExAsr_GetNumBuses(void);

/*JP
 * \brief ユーザ定義エフェクトインターフェースの登録
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	afx_interface	ユーザ定義エフェクトのバージョン情報付きインターフェース
 * \return						登録に成功したか？（CRI_TRUE:登録に成功した, CRI_FALSE:登録に失敗した）
 * \par 説明:
 * ユーザ定義エフェクトインターフェースをASRに登録します。<br>
 * ユーザ定義エフェクトインターフェースを登録したエフェクトはDSPバス設定をアタッチする際に使用できるようになります。<br>
 * 以下の条件に該当する場合は、ユーザ定義エフェクトインターフェースの登録に失敗し、エラーコールバックが返ります:
 *  - 同一のエフェクト名を持つユーザ定義エフェクトインターフェースが既に登録されている
 *  - Atomが使用しているユーザ定義エフェクトインターフェースと異なる
 *  - ユーザ定義エフェクトインターフェースの登録数上限（ ::CRIATOMEXASR_MAX_NUM_USER_EFFECT_INTERFACES ）に達した
 * \attention
 * 本関数はCRI ADX2 Audio Effect Plugin SDKで作成したユーザ定義エフェクトを登録する場合にのみ使用して下さい。<br>
 * ユーザ定義エフェクトインターフェースは、ユーザ定義エフェクトを含むDSPバス設定をアタッチする前に<br>
 * 本関数によって登録を行って下さい。<br>
 * ACFにデフォルトDSPバス設定が存在する場合、ACFの登録（ ::criAtomEx_RegisterAcfFile, ::criAtomEx_RegisterAcfData 関数）によってもDSPバス設定がアタッチされるため、<br>
 * ユーザ定義エフェクトがデフォルトDSPバス設定に含まれている場合はACFを登録する前にユーザ定義エフェクトインターフェースを登録して下さい。<br>
 * 一度登録を行ったインターフェースのポインタは、DSPバス設定をアタッチしている間参照され続けます。<br>
 * Atomライブラリ使用中にインターフェースの登録解除を行う場合は、 ::criAtomExAsr_UnregisterEffectInterface を使用して下さい。
 * \sa criAtomExAsr_UnregisterEffectInterface, criAtomEx_AttachDspBusSetting, criAtomEx_DetachDspBusSetting, criAtomEx_RegisterAcfFile, criAtomEx_RegisterAcfData 
 */
CriBool CRIAPI criAtomExAsr_RegisterEffectInterface(CriAtomExAsrAfxInterfaceWithVersionPtr afx_interface);

/*JP
 * \brief ユーザ定義エフェクトインターフェースの登録解除
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	afx_interface	ユーザ定義エフェクトのバージョン情報付きインターフェース
 * \par 説明:
 * エフェクトインターフェースの登録を解除します。<br>
 * 登録を解除したエフェクトはDSPバス設定をアタッチする際に使用できなくなります。<br>
 * 登録処理を行っていないエフェクトインターフェースの登録を解除することはできません（エラーコールバックが返ります）。
 * \attention
 * 本関数はCRI ADX2 Audio Effect Plugin SDKで作成したユーザ定義エフェクトを登録解除する場合にのみ使用して下さい。<br>
 * 登録を行ったユーザ定義エフェクトインターフェースはDSPバス設定がアタッチされている間参照され続けるため、<br>
 * 本関数は必ず ::criAtomEx_DetachDspBusSetting の呼び出しの後に行って下さい。<br>
 * Atomライブラリの終了時（::criAtomEx_Finalize 関数の呼び出し時）には全てのユーザ定義エフェクトインターフェースの登録が解除されます。
 * \sa criAtomExAsr_RegisterEffectInterface, criAtomEx_AttachDspBusSetting, criAtomEx_DetachDspBusSetting
 */
void CRIAPI criAtomExAsr_UnregisterEffectInterface(CriAtomExAsrAfxInterfaceWithVersionPtr afx_interface);

/*JP
 * \brief IRリバーブエフェクトの負荷計測リセット
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASRエフェクトのIRリバーブの負荷計測をリセットします。
 * \par 備考:
 * DSPバスにIRリバーブエフェクトがセットされていなくても本関数を呼び出すことは可能ですが、何も処理されません。
 * \sa criAtomExAsr_GetIrReverbPerformanceInfo
 */
void CRIAPI criAtomExAsr_ResetIrReverbPerformanceInfo(void);

/*JP
 * \brief IRリバーブエフェクトの負荷計測
 * \ingroup ATOMEXLIB_ASR
 * \param[out]	info	IRリバーブの負荷計測情報構造体
 * \par 説明:
 * DSPバス上のIRリバーブエフェクトの負荷ををまとめて計測します。<br>
 * \par 備考:
 * DSPバスにIRリバーブエフェクトがセットされていなくても本関数を呼び出すことは可能ですが、何も処理されません。
 * \attention
 * プラットフォームによって計測される内容が異なる場合があります。<br>
 * 詳しくは各プラットフォームのCRI ADX2 マニュアルの IR リバーブを参照してください。
 * \sa criAtomExAsr_ResetIrReverbPerformanceInfo
 */
void CRIAPI criAtomExAsr_GetIrReverbPerformanceInfo(CriAtomExAsrIrReverbPerformanceInfo *info);

/*==========================================================================
 *      CRI AtomEx ASR Rack API
 *=========================================================================*/
/*JP
 * \brief ASRラック作成用ワーク領域サイズの計算
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config	ASR初期化用コンフィグ構造体
 * \par 説明:
 * ASRラックの作成に必要なワーク領域のサイズを取得します。<br>
 * ::criAtomEx_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomExAsrRack_Create 関数でASRの初期化を行う場合、
 * 本関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ASRラックの初期化に必要なワークメモリのサイズは、ASRラック初期化用コンフィグ
 * 構造体（ ::CriAtomExAsrRackConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomExAsr_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtomEx_SetUserAllocator, criAtomExAsrRack_Create
 */
CriSint32 CRIAPI criAtomExAsrRack_CalculateWorkSize(const CriAtomExAsrRackConfig *config);

/*JP
 * \brief DSPバス設定のアタッチ用ワークサイズの計算
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config		ASRラック作成用コンフィグ構造体
 * \param[in]	setting		DSPバス設定の名前
 * \return		CriSint32	必要ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からバスを構築するのに必要なワーク領域サイズを計算します。<br>
 * 本関数を実行するには、あらかじめ::criAtomEx_RegisterAcfConfig 関数でACF情報を
 * 登録しておく必要があります<br>
 * configには ::criAtomExAsrRack_Create 関数に指定するものと同じ構造体を指定してください。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、CRI Atom Craftで作成した
 * DSPバス設定の内容によって変化します。<br>
 * \sa criAtomExAsrRack_AttachDspBusSetting, criAtomEx_RegisterAcfConfig
 */
CriSint32 CRIAPI criAtomExAsrRack_CalculateWorkSizeForDspBusSettingFromConfig(
	const CriAtomExAsrRackConfig *config, const CriChar8 *setting);

/*JP
 * \brief DSPバス設定のアタッチ用ワークサイズの計算
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	acf_data		ACFデータ
 * \param[in]	acf_data_size	ACFデータサイズ
 * \param[in]	rack_config		ASRラック作成用コンフィグ構造体
 * \param[in]	setting			DSPバス設定の名前
 * \return		CriSint32		必要ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からバスを構築するのに必要なワーク領域サイズを計算します。<br>
 * ::criAtomExAsrRack_CalculateWorkSizeForDspBusSettingFromConfig 関数と違い、
 * メモリ上にロード済みのACFデータを使用してワークメモリサイズの計算が可能です。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、CRI Atom Craftで作成した
 * DSPバス設定の内容によって変化します。<br>
 * \sa criAtomExAsrRack_AttachDspBusSetting, criAtomEx_RegisterAcfConfig
 */
CriSint32 CRIAPI criAtomExAsrRack_CalculateWorkSizeForDspBusSettingFromAcfDataAndConfig(
	void *acf_data, CriSint32 acf_data_size,
	const CriAtomExAsrRackConfig *rack_config, const CriChar8 *setting);

/*JP
 * \brief ASRラックの作成
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	config				ASR初期化用コンフィグ構造体
 * \param[in]	work				ワーク領域
 * \param[in]	work_size			ワーク領域サイズ
 * \return		CriAtomExAsrRackId 	ASRラックID
 * \par 説明:
 * ASRラックの作成を行います。<br>
 * ASRラックとはバスの集合体のことで、DSPバス設定をアタッチすることができます。<br>
 * 本関数を実行することでASRにASRラックが追加され、レンダリング結果の出力を開始します。<br>
 * この関数で追加したASRラックは出力先を選択することができ、プラットフォームネイティブの
 * サウンドレンダラか、ASRを選択することで他のASRラックに出力することも可能です。<br>
 * \par 備考:
 * ::criAtomExAsr_Initialize 関数を実行すると、デフォルトのASRラックが追加されます。<br>
 * criAtomExAsr_*** 関数はデフォルトのASRラックを操作するAPIになります。<br>
 * <br>
 * ASRの初期化に必要なワークメモリのサイズは、ASR初期化用コンフィグ
 * 構造体（ ::CriAtomExAsrConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定<br>
 * （ ::criAtomExAsr_SetDefaultConfig 適用時と同じパラメーター）で初期化処理を行います。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。<br>
 * ASRラックの生成に成功した場合は、本関数は生成したASRラックIDを返します。
 * 生成に失敗した場合は -1 を返します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomEx_SetUserAllocator, criAtomExAsrRack_Destroy, criAtomExAsrRack_AttachDspBusSetting
 */
CriAtomExAsrRackId CRIAPI criAtomExAsrRack_Create(
	const CriAtomExAsrRackConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ASRラックの破棄
 * \ingroup ATOMEXLIB_ASR
 * \par 説明:
 * ASRラックの破棄を行います。<br>
 * 本関数を実行することで、レンダリング結果の出力が停止されます。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ASRラック作成時に確保されたメモリ領域が解放されます。<br>
 * （ASRラック作成時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、<br>
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa criAtomEx_SetUserAllocator, criAtomExAsrRack_Create
 */
void CRIAPI criAtomExAsrRack_Destroy(CriAtomExAsrRackId rack_id);

/*JP
 * \brief DSPバス設定のアタッチ用ワークサイズの計算
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	setting		DSPバス設定の名前
 * \return		CriSint32	必要ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からバスを構築するのに必要なワーク領域サイズを計算します。<br>
 * 本関数を実行するには、あらかじめ::criAtomEx_RegisterAcfConfig 関数でACF情報を
 * 登録しておく必要があります<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、CRI Atom Craftで作成した
 * DSPバス設定の内容によって変化します。<br>
 * \sa criAtomExAsrRack_AttachDspBusSetting, criAtomEx_RegisterAcfConfig
 */
CriSint32 CRIAPI criAtomExAsrRack_CalculateWorkSizeForDspBusSetting(
	CriAtomExAsrRackId rack_id, const CriChar8 *setting);

/*JP
 * \brief DSPバス設定のアタッチ
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	setting		DSPバス設定の名前
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * DSPバス設定からバスを構築してASRラックにアタッチします。<br>
 * 本関数を実行するには、あらかじめ::criAtomEx_RegisterAcfConfig 関数でACF情報を
 * 登録しておく必要があります<br>
 * \par 備考:
 * DSPバス設定のアタッチに必要なワークメモリのサイズは、
 * CRI Atom Craftで作成したDSPバス設定の内容によって変化します。<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa criAtomExAsrRack_DetachDspBusSetting, criAtomEx_RegisterAcfConfig
 */
void CRIAPI criAtomExAsrRack_AttachDspBusSetting(CriAtomExAsrRackId rack_id,
	const CriChar8 *setting, void *work, CriSint32 work_size);

/*JP
 * \brief DSPバス設定のデタッチ
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \par 説明:
 * DSPバス設定をASRラックからデタッチします。<br>
 * ::criAtomEx_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * DSPバス設定アタッチ時に確保されたメモリ領域が解放されます。<br>
 * （DSPバス設定アタッチ時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * \sa criAtomExAsrRack_AttachDspBusSetting
 */
void CRIAPI criAtomExAsrRack_DetachDspBusSetting(CriAtomExAsrRackId rack_id);

/*JP
 * \brief DSPバススナップショットの適用
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	snapshot_name	スナップショット名
 * \param[in]	time_ms			時間（ミリ秒）
 * \par 説明:
 * DSPバススナップショットを適用します。<br>
 * 本関数を呼び出すと、スナップショットで設定したパラメーターに time_ms 掛けて変化します。<br>
 * 引数 snapshot_name に CRI_NULL を指定すると、元のDSPバス設定の状態（スナップショットが適用されていない状態）に戻ります。<br>
 * \sa criAtomExAsrRack_AttachDspBusSetting
 */
void CRIAPI criAtomExAsrRack_ApplyDspBusSnapshot(CriAtomExAsrRackId rack_id,
	const CriChar8 *snapshot_name, CriSint32 time_ms);

/*JP
 * \brief 適用中のDSPバススナップショット名の取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \par 説明:
 * ASRラックIDを指定して適用中のDSPバススナップショット名を取得します。
 * スナップショットが適用されていない場合はCRI_NULLが返ります。
 * \sa criAtomExAsrRack_ApplyDspBusSnapshot
 */
const CriChar8* CRIAPI criAtomExAsrRack_GetAppliedDspBusSnapshotName(CriAtomExAsrRackId rack_id);

/*JP
 * \brief バスのボリュームの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[in]	volume		ボリューム値
 * \par 説明:
 * バスのボリュームを設定します。<br>
 * センドタイプがポストボリューム、ポストパンのセンド先に有効です。<br>
 * <br>
 * ボリューム値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * ボリューム値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのボリュームで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * ボリュームのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsrRack_SetBusVolumeByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriFloat32 volume);

/*JP
 * \brief バスのボリュームの取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[in]	volume		ボリューム値
 * \par 説明:
 * バスのボリュームを設定します。<br>
 * センドタイプがポストボリューム、ポストパンのセンド先に有効です。<br>
 * <br>
 * ボリューム値は実数値で得られます。<br>
 * ボリュームのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsrRack_GetBusVolumeByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriFloat32* volume);

/*JP
 * \brief バスのパン情報の設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASR ラック ID
 * \param[in]	bus_name	バス名
 * \param[in]	pan_info	パン情報
 * \par 説明:
 * バスのパン情報を設定します。<br>
 * センドタイプがポストパンのセンド先に有効です。<br>
 * <br>
 * パン情報のデフォルト値は CRI Atom Craft で設定した値です。
 */
void CRIAPI criAtomExAsrRack_SetBusPanInfoByName(CriAtomExAsrRackId rack_id, const CriChar8 *bus_name,
	const CriAtomExAsrBusPanInfo *pan_info);

/*JP
 * \brief バスのパン情報の取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASR ラック ID
 * \param[in]	bus_name	バス名
 * \param[out]	pan_info	パン情報
 * \par 説明:
 * バスのパン情報を取得します。
 */
void CRIAPI criAtomExAsrRack_GetBusPanInfoByName(CriAtomExAsrRackId rack_id, const CriChar8 *bus_name,
	CriAtomExAsrBusPanInfo *pan_info);

/*JP
 * \brief バスのレベル行列の設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \param[in]	bus_name		バス名
 * \param[in]	input_channels	入力チャンネル数
 * \param[in]	output_channels	出力チャンネル数
 * \param[in]	matrix			レベル行列を1次元に表したレベル値の配列
 * \par 説明:
 * バスのレベル行列を設定します。<br>
 * センドタイプがポストパンのセンド先に有効です。<br>
 * <br>
 * レベルマトリックスは、音声データの各チャンネルの音声を、どのスピーカーから
 * どの程度の音量で出力するかを指定するための仕組みです。<br>
 * matrixは[input_channels * output_channels]の配列です。<br>
 * 入力チャンネルch_inから出力チャンネルch_outにセンドされるレベルは
 * matrix[ch_in * output_channels + ch_out]にセットします。<br>
 * レベル行列のデフォルト値は単位行列です。<br>
 * <br>
 * レベル値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * レベル値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのレベルで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 */
void CRIAPI criAtomExAsrRack_SetBusMatrixByName(
	CriAtomExAsrRackId rack_id, const CriChar8* bus_name, CriSint32 input_channels, 
	CriSint32 output_channels, const CriFloat32 matrix[]);

/*JP
 * \brief バスのセンドレベルの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \param[in]	bus_name		バス名
 * \param[in]	sendto_bus_name	センド先のバス名
 * \param[in]	level			レベル値
 * \par 説明:
 * センド先バスに音声データを送る際のレベルを設定します。<br>
 * <br>
 * レベル値には、0.0f〜1.0fの範囲で実数値を指定します。<br>
 * レベル値は音声データの振幅に対する倍率です（単位はデシベルではありません）。<br>
 * 例えば、1.0fを指定した場合、原音はそのままのレベルで出力されます。<br>
 * 0.5fを指定した場合、原音波形の振幅を半分にしたデータと同じ音量（-6dB）で
 * 音声が出力されます。<br>
 * 0.0fを指定した場合、音声はミュートされます（無音になります）。<br>
 * レベルのデフォルト値はCRI Atom Craftで設定した値です。<br>
 */
void CRIAPI criAtomExAsrRack_SetBusSendLevelByName(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, const CriChar8* sendto_bus_name, CriFloat32 level);

/*JP
 * \brief エフェクト動作時パラメーターの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \param[in]	bus_name		バス名
 * \param[in]	effect_name		エフェクト名
 * \param[in]	parameter_index	エフェクト動作時パラメーターインデックス
 * \param[in]	parameter_value エフェクトパラメーター設定値
 * \par 説明:
 * エフェクトの動作時パラメーターを設定します。<br>
 * エフェクトパラメーターを設定する際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。指定したバスに指定した名前のエフェクトが存在しない場合、関数は失敗します。<br>
 * また、
 * エフェクトのパラメーターは、各エフェクトのパラメーターインデックス（ \ref CRIATOMASR_DSP_PARAM ）をご参照下さい。
 * \sa criAtomEx_AttachDspBusSetting, criAtomExAsrRack_UpdateEffectParameters
 */
void CRIAPI criAtomExAsrRack_SetEffectParameter(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, const CriChar8* effect_name, 
	const CriUint32 parameter_index, const CriFloat32 parameter_value);

/*JP
 * \brief エフェクトの動作時パラメーターの反映
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \param[in]	bus_name		バス名
 * \param[in]	effect_name		エフェクト名
 * \par 説明:
 * エフェクトの動作時パラメーターを反映します。<br>
 * 動作時パラメーターを実際に反映するには、criAtomExAsrRack_SetEffectParameter の他にも本関数を呼び出して下さい。
 * \sa criAtomEx_AttachDspBusSetting, criAtomExAsrRack_SetEffectParameter
 */
void CRIAPI criAtomExAsrRack_UpdateEffectParameters(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, const CriChar8* effect_name);

/*JP
 * \brief エフェクトの動作時パラメーターの取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]		rack_id			ASRラックID
 * \param[in]		bus_name		バス名
 * \param[in]		effect_name		エフェクト名
 * \param[in]		parameter_index	エフェクトの動作時パラメーターインデックス
 * \return 指定したパラメーターインデックス値のエフェクトパラメーター値を返します。
 * \par 説明:
 * エフェクトの動作時パラメーターを取得します。<br>
 * 動作時パラメーターを取得する際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。指定したバスに指定した名前のエフェクトが存在しない場合、関数は失敗します。<br>
 * エフェクトの動作時パラメーターの詳細は、各エフェクトのパラメーターインデックス（ \ref CRIATOMASR_DSP_PARAM ）をご参照下さい。
 * \sa criAtomEx_AttachDspBusSetting
 */
CriFloat32 CRIAPI criAtomExAsrRack_GetEffectParameter(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, const CriChar8* effect_name, 
	const CriUint32 parameter_index);

/*JP
 * \brief エフェクトのバイパス設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[in]	effect_name	エフェクト名
 * \param[in]	bypass		バイパス設定（CRI_TRUE:バイパスを行う, CRI_FALSE:バイパスを行わない）
 * \par 説明:
 * エフェクトのバイパス設定を行います。<br>
 * バイパス設定されたエフェクトは音声処理の際、スルーされるようになります。<br>
 * エフェクトのバイパス設定をする際は、本関数呼び出し前にあらかじめ
 * ::criAtomEx_AttachDspBusSetting 関数でバスが構築されている必要があります。<br>
 * どのバスにどのエフェクトが存在するかは、アタッチしたDSPバス設定に依存します。指定したバスに指定した名前のエフェクトが存在しない場合、関数は失敗します。<br>
 * \attention
 * 音声再生中にバイパス設定を行うとノイズが発生することがあります。<br>
 * \sa criAtomEx_AttachDspBusSetting
 */
void CRIAPI criAtomExAsrRack_SetEffectBypass(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, const CriChar8* effect_name, const CriBool bypass);

/*JP
 * \brief レベル測定機能の追加
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[in]	config		レベル測定機能のコンフィグ構造体
 * \par 説明:
 * バスにレベル測定機能を追加し、レベル測定処理を開始します。<br>
 * 本関数を実行後、 ::criAtomExAsrRack_GetBusAnalyzerInfo 関数を実行することで、
 * RMSレベル（音圧）、ピークレベル（最大振幅）、ピークホールドレベルを
 * 取得することが可能です。
 * 複数バスのレベルを計測するには、バスごとに本関数を呼び出す必要があります。
 * \attention
 * 本関数は ::criAtomExAsrRack_AttachDspBusSetting 関数と同一のリソースを操作します。<br>
 * そのため、現状は ::criAtomExAsrRack_AttachDspBusSetting 関数を実行すると、
 * ::criAtomExAsrRack_GetBusAnalyzerInfo 関数による情報取得ができなくなります。<br>
 * 本関数と ::criAtomExAsrRack_AttachDspBusSetting 関数を併用する際には、
 * ::criAtomExAsrRack_AttachDspBusSetting 関数を実行する前に一旦
 * ::criAtomExAsrRack_DetachBusAnalyzer 関数でレベル測定機能を無効化し、
 * ::criAtomExAsrRack_AttachDspBusSetting 関数実行後に再度本関数を実行してください。<br>
 * \sa criAtomExAsrRack_GetBusAnalyzerInfo, criAtomExAsrRack_DetachBusAnalyzer
 */
void CRIAPI criAtomExAsrRack_AttachBusAnalyzerByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, const CriAtomExAsrBusAnalyzerConfig* config);

/*JP
 * \brief レベル測定機能の削除
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \par 説明:
 * バスからレベル測定機能を削除します。
 * \sa criAtomExAsrRack_AttachBusAnalyzer
 */
void CRIAPI criAtomExAsrRack_DetachBusAnalyzerByName(
	CriAtomExAsrRackId rack_id, const CriChar8* bus_name);

/*JP
 * \brief レベル測定結果の取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[out]	info		レベル測定結果の構造体
 * \par 説明:
 * バスからレベル測定機能の結果を取得します。
 * \sa criAtomExAsrRack_AttachBusAnalyzer
 */
void CRIAPI criAtomExAsrRack_GetBusAnalyzerInfoByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriAtomExAsrBusAnalyzerInfo *info);

/*JP
 * \brief 波形フィルターコールバック関数の登録
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id		ASRラックID
 * \param[in]	bus_name	バス名
 * \param[in]	pre_func	エフェクト処理前のフィルターコールバック関数
 * \param[in]	post_func	エフェクト処理後のフィルターコールバック関数
 * \param[in]	obj			ユーザ指定オブジェクト
 * \par 説明:
 * バスに流れている PCM データを受け取るコールバック関数を登録します。<br>
 * 登録されたコールバック関数は、サウンドレンダラが音声処理を行ったタイミングで呼び出されます。<br>
 * エフェクト処理前とエフェクト処理後の2種類の使用しないほうはNULL指定が可能です。<br>
 * \attention
 * コールバック関数内で、AtomライブラリのAPIを実行しないでください。<br>
 * コールバック関数はAtomライブラリ内のサーバー処理から実行されます。<br>
 * そのため、サーバー処理への割り込みを考慮しないAPIを実行した場合、
 * エラーが発生したり、デッドロックが発生する可能性があります。<br>
 * <br>
 * 波形フィルターコールバック関数内で長時間処理をブロックすると、音切れ等の問題
 * が発生しますので、ご注意ください。<br>
 * \sa CriAtomExPlayerFilterCbFunc
 */
void CRIAPI criAtomExAsrRack_SetBusFilterCallbackByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriAtomExAsrBusFilterCbFunc pre_func, 
	CriAtomExAsrBusFilterCbFunc post_func, void *obj);

/*JP
 * \brief 代替ASRラックIDの設定
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \param[in]	alt_rack_id		代替ASRラックID
 * \par 説明:
 * 指定したIDのASRラックが存在しない場合に、代わりになるASRラックのIDを設定します。<br>
 * （ rack_id のASRラックが存在しない場合に、その音声を alt_rack_id のASRラック経由で出力します。）<br>
 * <br>
 * デフォルト設定は ::CRIATOMEXASR_RACK_DEFAULT_ID
 * （指定したIDのASRラックがなければデフォルトASRから出力する）です。<br>
 * \par 備考:
 * 存在しないASRラックへの出力をエラーとして扱いたい場合、
 * alt_rack_id に rack_id と同じ値を設定してください。<br>
 */
void CRIAPI criAtomExAsrRack_SetAlternateRackId(
	CriAtomExAsrRackId rack_id, CriAtomExAsrRackId alt_rack_id);

/*JP
 * \brief 最大バス数を取得
 * \ingroup ATOMEXLIB_ASR
 * \param[in]	rack_id			ASRラックID
 * \return						最大バス数
 * \par 説明:
 * 指定したIDのASRラックで利用可能な最大バス数を取得します。
 * <br>
 * デフォルト設定では ::CRIATOMEXASR_DEFAULT_NUM_BUSES を返します。
 * <br>
 * 最大バス数を変更するには、CriAtomExAsrRackConfig::num_buses を変更して
 * ASRラックを作成してください。
 * \sa CriAtomExAsrRackConfig, criAtomExAsrRack_Create, criAtomExAsrRack_SetDefaultConfig
 */
CriSint32 CRIAPI criAtomExAsrRack_GetNumBuses(CriAtomExAsrRackId rack_id);

/*JP
* \brief PCMデータの取得
* \ingroup ATOMLIB_PC
* \param[in]	output_channels		出力バッファーのチャンネル数
* \param[in]	output_samples		出力バッファーに格納可能なサンプル数
* \param[out]	output_buffer		出力バッファー
* \return		CriSint32			取得できたサンプル数
* \retval		0以上				取得できたサンプル数
* \retval		負値				エラーが発生
* \par 説明:
* Atomライブラリの出力PCMデータを取得します。<br>
* <br>
* 本関数を使用するには、事前に ::criAtomEx_InitializeForUserPcmOutput
* 関数を使用してライブラリを初期化しておく必要があります。<br>
* \attention
* 本関数の呼び出しは、独立したスレッド上で定期的に行う必要があります。<br>
* 現状、AtomライブラリのAPIには、
* PCMデータが出力されるまで処理を返さないものがいくつか存在します。<br>
* （ボイスプールの破棄処理等。）<br>
* こういった関数と本関数とを同一スレッド上で順番に呼び出すと、
* 当該APIがPCMデータの出力を永遠に待ち続ける形になり、
* 処理が復帰しなくなる可能性があります。<br>
* \sa criAtomEx_InitializeForUserPcmOutput
*/
CriSint32 CRIAPI criAtomExAsr_GetPcmDataFloat32(
	CriSint32 output_channels, CriSint32 output_samples, CriFloat32 *output_buffer[]);

/*JP
* \brief PCMデータ残量の取得
* \ingroup ATOMLIB_PC
* \return CriSint32 PCMデータ残量（サンプル数単位）
* \par 説明:
* ::criAtomExAsr_GetPcmDataFloat32 関数で取得可能なサンプル数を返します。<br>
* \sa criAtomExAsr_GetPcmDataFloat32
*/
CriSint32 CRIAPI criAtomExAsr_GetNumBufferedSamples(void);

/*JP
* \brief PCMバッファーサイズの指定
* \ingroup ATOMLIB_PC
* \param[in]	num_samples	PCMバッファーサイズ（サンプル数単位）
* \par 説明:
* Atomライブラリ内でPCMデータの保存に使用するバッファーのサイズを指定します。<br>
* （サイズはサンプル数単位で指定します。）<br>
* <br>
* バッファーサイズに 0 を指定した場合、2V分のバッファーが作成されます。<br>
* \par 備考:
* ユーザPCM出力方式でAtomライブラリを初期化した場合、
* AtomライブラリはASRの出力結果をライブラリ内のバッファー（PCMバッファー）に保持します。<br>
* デフォルト状態では、PCMバッファーのサイズはライブラリ初期化時のパラメーターに応じて自動的に決定されますが、
* 本関数を実行することで、PCMバッファーのサイズを任意のサイズに変更することが可能です。<br>
* \attention
* PCMバッファーの確保は ::criAtomEx_InitializeForUserPcmOutput 関数内で行われます。<br>
* そのため、本関数は ::criAtomEx_InitializeForUserPcmOutput
* 関数よりも先に実行する必要があります。<br>
* <br>
* PCMバッファーに蓄えられるPCMデータのサンプル数が、
* ユーザがPCMデータを取得する間隔より少ない場合、
* 音途切れ等の問題が発生する可能性があります。<br>
* 逆に、PCMバッファーのサイズが大きすぎる場合、
* 発音開始からサウンド出力までの遅延が大きくなる可能性があります。<br>
* <br>
* PC環境では、PCMバッファーサイズを小さくした場合に再生が正しく行えるかどうかが、
* サウンドデバイスの性能にも左右されます。<br>
* 多くの環境で音途切れなく再生を行いたい場合には、
* PCMバッファーサイズにある程度大きめの値を指定するか、
* または可能な限り短い間隔で ::criAtomExAsr_GetPcmDataFloat32 関数を実行してください。<br>
*/
void CRIAPI criAtomExAsr_SetPcmBufferSize(CriSint32 num_samples);

/*JP
* \brief ASRラックのPCMデータの取得
* \ingroup ATOMLIB_PC
* \param[in]	rack_id			ASRラックID
* \param[in]	output_channels		出力バッファーのチャンネル数
* \param[in]	output_samples		出力バッファーに格納可能なサンプル数
* \param[out]	output_buffer		出力バッファー
* \return		CriSint32			取得できたサンプル数
* \retval		0以上				取得できたサンプル数
* \retval		負値				エラーが発生
* \par 説明:
* ASRラックの出力PCMデータを取得します。<br>
* <br>
* 本関数を使用するには、事前に ::criAtomEx_InitializeForUserPcmOutput
* 関数を使用してライブラリを初期化しておく必要があります。<br>
* \attention
* 本関数の呼び出しは、独立したスレッド上で定期的に行う必要があります。<br>
* 現状、AtomライブラリのAPIには、
* PCMデータが出力されるまで処理を返さないものがいくつか存在します。<br>
* （ボイスプールの破棄処理等。）<br>
* こういった関数と本関数とを同一スレッド上で順番に呼び出すと、
* 当該APIがPCMデータの出力を永遠に待ち続ける形になり、
* 処理が復帰しなくなる可能性があります。<br>
* \sa criAtomEx_InitializeForUserPcmOutput
*/
CriSint32 CRIAPI criAtomExAsrRack_GetPcmDataFloat32(CriAtomExAsrRackId rack_id,
	CriSint32 output_channels, CriSint32 output_samples, CriFloat32 *output_buffer[]);

/*JP
* \brief ASRラックのPCMデータ残量の取得
* \ingroup ATOMLIB_PC
* \return CriSint32 PCMデータ残量（サンプル数単位）
* \par 説明:
* ::criAtomExAsrRack_GetPcmDataFloat32 関数で取得可能なサンプル数を返します。<br>
* \sa criAtomExAsrRack_GetPcmDataFloat32
*/
CriSint32 CRIAPI criAtomExAsrRack_GetNumBufferedSamples(CriAtomExAsrRackId rack_id);

/*JP
* \brief 指定したバスの振幅解析器の解析結果取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_no				バス番号
* \param[out]	rms					振幅結果出力バッファー
* \param[in]	num_channels		振幅結果出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* 振幅解析器の現在の解析結果（RMS値）を取得します。
* 指定したバスに振幅解析器がない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetAmplitudeAnalyzerRms(CriAtomExAsrRackId rack_id,
	CriSint32 bus_no, CriFloat32* rms, CriUint32 num_channels);

/*JP
* \brief 指定したバスの振幅解析器の解析結果取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_name			バス名
* \param[out]	rms					振幅結果出力バッファー
* \param[in]	num_channels		振幅結果出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* 振幅解析器の現在の解析結果（RMS値）を取得します。<br>
* 指定したバスに振幅解析器がない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetAmplitudeAnalyzerRmsByName(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, CriFloat32* rms, CriUint32 num_channels);

/*JP
* \brief 指定したバスのコンプレッサーの振幅乗算値取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_no				バス番号
* \param[out]	gain				振幅乗算値出力バッファー
* \param[in]	num_channels		振幅乗算値出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* コンプレッサーが入力波形に乗算する値を取得します。<br>
* 指定したバスにコンプレッサーがない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetCompressorGain(CriAtomExAsrRackId rack_id,
	CriSint32 bus_no, CriFloat32* gain, CriUint32 num_channels);

/*JP
* \brief 指定したバスのコンプレッサーの振幅乗算値取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_name			バス名
* \param[out]	gain				振幅乗算値出力バッファー
* \param[in]	num_channels		振幅乗算値出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* コンプレッサーが入力波形に乗算する値を取得します。<br>
* 指定したバスにコンプレッサーがない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetCompressorGainByName(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, CriFloat32* gain, CriUint32 num_channels);

/*JP
* \brief 指定したバスのコンプレッサーの振幅値取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_no				バス番号
* \param[out]	rms					振幅乗算値出力バッファー
* \param[in]	num_channels		振幅乗算値出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* コンプレッサーに適用されている振幅値を取得します。<br>
* 指定したバスにコンプレッサーがない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetCompressorRms(CriAtomExAsrRackId rack_id,
	CriSint32 bus_no, CriFloat32* rms, CriUint32 num_channels);

/*JP
* \brief 指定したバスのコンプレッサーの振幅値取得
* \param[in]	rack_id				ASRラックID
* \param[in]	bus_name			バス名
* \param[out]	rms					振幅値出力バッファー
* \param[in]	num_channels		振幅値出力バッファーのチャンネル数
* \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
* \par 説明:
* コンプレッサーに適用されている振幅値を取得します。<br>
* 指定したバスにコンプレッサーがない場合や、指定したチャンネル数がASRバスよりも多い場合、取得に失敗します。
*/
CriBool CRIAPI criAtomExAsrRack_GetCompressorRmsByName(CriAtomExAsrRackId rack_id,
	const CriChar8* bus_name, CriFloat32* rms, CriUint32 num_channels);

/*JP
 * \brief 指定したASRラックのAISACコントロールに値を適用（コントロールID指定）
 * \param[in]	rack_id				ASRラックID
 * \param[in]	control_id			AISACコントロールID
 * \param[in]	control_value		AISACコントロール値
 * \return	CriBool 適用に成功したか？（CRI_TRUE:適用に成功した, CRI_FALSE:適用に失敗した）
 * \par 説明:
 * 指定したASRラックにアタッチされているDSPバス設定のAISACコントロールに値をセットします。<br>
 * 失敗した場合、エラーコールバックが返されます。
 */
CriBool CRIAPI criAtomExAsrRack_SetAisacControlById(CriAtomExAsrRackId rack_id,
	CriAtomExAisacControlId control_id, CriFloat32 control_value);

/*JP
 * \brief 指定したASRラックのAISACコントロールに値を適用（コントロール名指定）
 * \param[in]	rack_id				ASRラックID
 * \param[in]	control_name		AISACコントロール名
 * \param[in]	control_value		AISACコントロール値
 * \return	CriBool 適用に成功したか？（CRI_TRUE:適用に成功した, CRI_FALSE:適用に失敗した）
 * \par 説明:
 * 指定したASRラックにアタッチされているDSPバス設定のAISACコントロールに値をセットします。<br>
 * 失敗した場合、エラーコールバックが返されます。
 */
CriBool CRIAPI criAtomExAsrRack_SetAisacControlByName(CriAtomExAsrRackId rack_id,
	const CriChar8* control_name, CriFloat32 control_value);

/*JP
 * \brief 指定したASRラックのAISACコントロールに値を取得（コントロールID指定）
 * \param[in]	rack_id				ASRラックID
 * \param[in]	control_id			AISACコントロールID
 * \param[out]	control_value		AISACコントロール値
 * \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
 * \par 説明:
 * 指定したASRラックにアタッチされているDSPバス設定のAISACコントロールに値を取得します。<br>
 * 失敗した場合、エラーコールバックが返されます。
 */
CriBool CRIAPI criAtomExAsrRack_GetAisacControlById(CriAtomExAsrRackId rack_id,
	CriAtomExAisacControlId control_id, CriFloat32 *control_value);

/*JP
 * \brief 指定したASRラックのAISACコントロールに値を取得（コントロール名指定）
 * \param[in]	rack_id				ASRラックID
 * \param[in]	control_name		AISACコントロール名
 * \param[out]	control_value		AISACコントロール値
 * \return	CriBool 取得に成功したか？（CRI_TRUE:取得に成功した, CRI_FALSE:取得に失敗した）
 * \par 説明:
 * 指定したASRラックにアタッチされているDSPバス設定のAISACコントロールに値を取得します。<br>
 * 失敗した場合、エラーコールバックが返されます。
 */
CriBool CRIAPI criAtomExAsrRack_GetAisacControlByName(CriAtomExAsrRackId rack_id,
	const CriChar8* control_name, CriFloat32 *control_value);
/*==========================================================================
 *      CRI Atom ASR API
 *=========================================================================*/
/*JP
 * \brief ASR初期化用ワーク領域サイズの計算
 * \ingroup ATOMLIB_ASR
 * \param[in]	config	ASR初期化用コンフィグ構造体
 * \par 説明:
 * ASR（Atom Sound Renderer）の初期化に必要なワーク領域のサイズを取得します。<br>
 * ::criAtom_SetUserAllocator マクロによるアロケーター登録を行わずに
 * ::criAtomAsr_Initialize 関数でASRの初期化を行う場合、
 * 本関数で計算したサイズ分のメモリをワーク領域として渡す必要があります。<br>
 * <br>
 * ワーク領域サイズの計算に失敗すると、本関数は -1 を返します。<br>
 * ワーク領域サイズの計算に失敗した理由については、エラーコールバックのメッセージで確認可能です。<br>
 * \par 備考:
 * ASRの初期化に必要なワークメモリのサイズは、ASR初期化用コンフィグ
 * 構造体（ ::CriAtomAsrConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定
 * （ ::criAtomAsr_SetDefaultConfig 適用時と同じパラメーター）で
 * ワーク領域サイズを計算します。
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \sa criAtom_SetUserAllocator, criAtomAsr_Initialize
 */
CriSint32 CRIAPI criAtomAsr_CalculateWorkSize(const CriAtomAsrConfig *config);

/*JP
 * \brief ASRの初期化
 * \ingroup ATOMLIB_ASR
 * \param[in]	config		ASR初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ASR（Atom Sound Renderer）の初期化を行います。<br>
 * 本関数を実行することでASRが起動され、レンダリング結果の出力を開始します。<br>
 * \par 備考:
 * ASRの初期化に必要なワークメモリのサイズは、ASR初期化用コンフィグ
 * 構造体（ ::CriAtomAsrConfig ）の内容によって変化します。<br>
 * <br>
 * 引数にNULLを指定した場合、デフォルト設定<br>
 * （ ::criAtomAsr_SetDefaultConfig 適用時と同じパラメーター）で初期化処理を行います。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。<br>
 * \attention
 * 本関数を実行する前に、ライブラリを初期化しておく必要があります。<br>
 * <br>
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。
 * <br>
 * 本関数を実行後、必ず対になる ::criAtomAsr_Finalize 関数を実行してください。<br>
 * また、 ::criAtomAsr_Finalize 関数を実行するまでは、本関数を再度実行しないでください。<br>
 * \sa criAtom_SetUserAllocator, criAtomAsr_Finalize
 */
void CRIAPI criAtomAsr_Initialize(
	const CriAtomAsrConfig *config, void *work, CriSint32 work_size);

/*JP
 * \brief ASRの終了
 * \ingroup ATOMLIB_ASR
 * \par 説明:
 * ASR（Atom Sound Renderer）の終了処理を行います。<br>
 * 本関数を実行することで、レンダリング結果の出力が停止されます。<br>
 * ::criAtom_SetUserAllocator マクロを使用してアロケーターを登録済みの場合、
 * ASR初期化時に確保されたメモリ領域が解放されます。<br>
 * （ASR初期化時にワーク領域を渡した場合、本関数実行後であれば
 * ワーク領域を解放可能です。）<br>
 * \attention
 * 本関数は完了復帰型の関数です。<br>
 * 本関数を実行すると、しばらくの間Atomライブラリのサーバー処理がブロックされます。<br>
 * 音声再生中に本関数を実行すると、音途切れ等の不具合が発生する可能性があるため、<br>
 * 本関数の呼び出しはシーンの切り替わり等、負荷変動を許容できるタイミングで行ってください。<br>
 * \sa criAtom_SetUserAllocator, criAtomAsr_Initialize
 */
void CRIAPI criAtomAsr_Finalize(void);

/*==========================================================================
 *      CRI AtomEx API
 *=========================================================================*/
/*JP
 * \brief ユーザPCM出力方式用ワーク領域サイズ計算
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \return		CriSint32	ワーク領域サイズ
 * \par 説明:
 * ユーザPCM出力方式でライブラリを初期化するために必要な、
 * ワーク領域のサイズを取得します。<br>
 * \par 備考:
 * ライブラリが必要とするワーク領域のサイズは、ライブラリ初期化用コンフィグ
 * 構造体（ ::CriAtomExConfigForUserPcmOutput ）の内容によって変化します。<br>
 * <br>
 * 引数 config の情報は、関数内でのみ参照されます。<br>
 * 関数を抜けた後は参照されませんので、関数実行後に config の領域を解放しても
 * 問題ありません。
 * \attention
 * 本関数は ::criAtomEx_InitializeForUserPcmOutput 関数を使用して
 * ライブラリを初期化する場合に使用します。<br>
 * ::criAtomEx_Initialize 関数を使用する場合には、本関数ではなく
 * ::criAtomEx_CalculateWorkSize 関数を使用してワーク領域サイズを計算してください。<br>
 * \sa CriAtomExConfigForUserPcmOutput, criAtomEx_InitializeForUserPcmOutput
 */
CriSint32 CRIAPI criAtomEx_CalculateWorkSizeForUserPcmOutput(
	const CriAtomExConfigForUserPcmOutput *config);

/*JP
 * \brief ユーザPCM出力用ライブラリ初期化
 * \ingroup ATOMEXLIB_GLOBAL
 * \param[in]	config		初期化用コンフィグ構造体
 * \param[in]	work		ワーク領域
 * \param[in]	work_size	ワーク領域サイズ
 * \par 説明:
 * ユーザPCM出力モードでライブラリを初期化します。<br>
 * <br>
 * 本関数を使用して初期化処理を行った場合、Atomライブラリは音声出力を行いません。<br>
 * ユーザは ::criAtomExAsr_GetPcmDataFloat32 
 * 関数を使用してライブラリから定期的にPCMデータを取得し、
 * アプリケーション側で音声出力を行う必要があります。<br>
 * \attention
 * 本関数と以下の関数は併用できません。<br>
 * 	- ::criAtomEx_Initialize
 * 	- ::criAtomExAsr_Initialize
 * 	- ::criAtomExHcaMx_Initialize
 * 	- 各プラットフォームにおけるAtomライブラリ初期化関数
 * \sa CriAtomExConfigForUserPcmOutput, criAtomEx_FinalizeForUserPcmOutput,
 * criAtomExAsr_GetPcmDataFloat32, criAtomEx_CalculateWorkSizeForUserPcmOutput
 */
void CRIAPI criAtomEx_InitializeForUserPcmOutput(
	const CriAtomExConfigForUserPcmOutput *config, void *work, CriSint32 work_size);

/*JP
 * \brief ユーザPCM出力用ライブラリ終了処理
 * \ingroup ATOMEXLIB_GLOBAL
 * \par 説明:
 * ユーザPCM出力モードで初期化されたライブラリに対し、終了処理を行います。<br>
 * \attention
 * 本関数は ::criAtomEx_InitializeForUserPcmOutput
 * 関数を使用してライブラリを初期化した場合に使用します。<br>
 * ::criAtomEx_Initialize 関数を使用した場合には、本関数ではなく
 * ::criAtomEx_Finalize 関数を使用して終了処理を行ってください。<br>
 * \sa criAtomEx_InitializeForUserPcmOutput
 */
void CRIAPI criAtomEx_FinalizeForUserPcmOutput(void);

/***************************************************************************
 *      暫定API（使用はお控え下さい）
 *      Tentative API (Please don't use it)
 ***************************************************************************/
/* 以下に宣言されている関数はAtomの内部処理用、ゲームエンジンとの連携等にて
 * 暫定的に使用されているAPIです。
 * 今後のアップデートにて予告なく変更・削除が行われるため、使用はお控え下さい。
 */
void CRIAPI criAtomExAsr_PauseOutputVoice(CriBool sw);
CriBool CRIAPI criAtomExAsrRack_GetNumOutputSamples(
	CriAtomExAsrRackId rack_id, CriSint64 *num_samples, CriSint32 *sampling_rate);
CriSint32 CRIAPI criAtomExAsrRack_GetOutputChannels(CriAtomExAsrRackId rack_id);
CriUint16 CRIAPI criAtomExAsrRack_GetBusNumber(
	CriAtomExAsrRackId rack_id, const CriChar8 *bus_name);
void CRIAPI criAtomAsr_PauseOutputVoice(CriBool sw);
CriSint32 CRIAPI criAtomExAsrRack_GetAmbisonicRackId(void);

#ifdef __cplusplus
}
#endif

/***************************************************************************
 *      旧バージョンとの互換用
 *      For compatibility with old version
 ***************************************************************************/
#define CRIATOMEXASR_DEFAULT_NUM_BASES	(CRIATOMEXASR_DEFAULT_NUM_BUSES)
#define CRIATOMEXASR_MAX_BASES			(CRIATOMEXASR_MAX_BUSES)
#define criAtomExAsr_CalculateWorkSizeForDspBusSettingFromAcfData(acf_data, acf_buffer_size, setting_name)	\
	criAtomEx_CalculateWorkSizeForDspBusSettingFromAcfData((acf_data), (acf_buffer_size), (setting_name))
#define criAtomExAsr_CalculateWorkSizeForDspBusSetting(setting) \
	criAtomEx_CalculateWorkSizeForDspBusSetting(setting)
#define criAtomExAsr_AttachDspBusSetting(setting, work, work_size) \
	criAtomEx_AttachDspBusSetting(setting, work, work_size)
#define criAtomExAsr_DetachDspBusSetting() \
	criAtomEx_DetachDspBusSetting()
/* レンダラーの出力Ch数設定に応じて、自動でダウンミックスするため下記2関数は無効にしています */
#define criAtomExAsr_SetDownmixMode(downmix_mode)
#define criAtomExAsrRack_SetDownmixMode(rack_id, downmix_mode)

/* 誤表記マクロ */
#define CRIATOMEXASR_BIQUAD_FILTER_ANALYZER_NAME				"CRIWARE/Biquad"
#define CRIATOMEXASR_BANDPASS_FILTER_PARAMETER_TYPE				(-1)
#define CRIATOMEXASR_BUTTERWORTH_FILTER_PARAMETER_TYPE			(-1)
#define CRIATOMEXASR_BUTTERWORTH_FILTER_PARAMETER_LOW_FREQ		(0)
#define CRIATOMEXASR_BUTTERWORTH_FILTER_PARAMETER_HIGH_FREQ		(1)
#define CRIATOMEXASR_BUTTERWORTH_FILTER_NUM_PARAMETERS			(2)

/* 
 * CRI Atom Ver.2.13.00 以降では、ASRバスに使用するエフェクトの識別を
 * id（列挙型）から文字列に変更し、またエフェクトのパラメーターは構造体からfloat配列に変更しています。
 * この変更に伴い、以下の列挙型と構造体は内部的に使用しません。
 * 過去互換の為、型定義だけを残します。
 */
typedef enum {
	CRIATOMEXASR_DSP_ID_INVALID = 0,		
	CRIATOMEXASR_DSP_ID_BANDPASS_FILTER,	
	CRIATOMEXASR_DSP_ID_BIQUAD_FILTER,		
	CRIATOMEXASR_DSP_ID_DELAY,				
	CRIATOMEXASR_DSP_ID_ECHO,				
	CRIATOMEXASR_DSP_ID_REVERB,				
	CRIATOMEXASR_DSP_ID_PITCH_SHIFTER,		
	CRIATOMEXASR_DSP_ID_3BAND_EQ,			
	CRIATOMEXASR_DSP_ID_COMPRESSOR,			
	CRIATOMEXASR_DSP_ID_COMPRESSOR_EX,		
	CRIATOMEXASR_DSP_ID_CHORUS,				
	CRIATOMEXASR_DSP_ID_FLANGER,			
	CRIATOMEXASR_DSP_ID_DISTORTION,			
	CRIATOMEXASR_DSP_ID_AMPLITUDE_ANALYZER,	
	CRIATOMEXASR_DSP_ID_SURROUNDER,			
	CRIATOMEXASR_DSP_ID_I3DL2_REVERB,		
	CRIATOMEXASR_DSP_ID_MULTI_TAP_DELAY,	
	CRIATOMEXASR_DSP_ID_LIMITER,			
	CRIATOMEXASR_DSP_ID_MATRIX,				
	CRIATOMEXASR_DSP_ID_32BANDS_EQ,
	CRIATOMEXASR_DSP_ID_BIT_CRUSHER,
	CRIATOMEXASR_DSP_ID_PHASER,
    CRIATOMEXASR_DSP_ID_BUS_BUFFER_POOL,
    CRIATOMEXASR_DSP_ID_MID_SIDE,
	CRIATOMEXASR_DSP_ID_IR_REVERB,
	CRIATOMEXASR_DSP_ID_CHANNELSPLIT_EQ,
	CRIATOMEXASR_DSP_ID_NO_TYPE = 0xFF,
	CRIATOMEXASR_DSP_ID_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrDspId;

typedef struct CriAtomExAsrBandpassFilterParameterTag {
	CriFloat32 cof_high;
	CriFloat32 cof_low;
} CriAtomExAsrBandpassFilterParameter;

typedef struct CriAtomExAsrBiquadFilterParameterTag {
	CriAtomExBiquadFilterType type;
	CriFloat32 frequency;
	CriFloat32 q_value;
	CriFloat32 gain;
} CriAtomExAsrBiquadFilterParameter;

typedef struct CriAtomExAsrDelayParameterTag {
	CriFloat32 max_delay_time_ms;
	CriFloat32 delay_time_ms;
} CriAtomExAsrDelayParameter;

typedef struct CriAtomExAsrEchoParameterTag {
	CriFloat32 max_delay_time_ms;
	CriFloat32 delay_time_ms;
	CriFloat32 gain;
} CriAtomExAsrEchoParameter;

typedef enum {
	CRIATOMEXASR_REVERB_MODE_SURROUND = 0,
	CRIATOMEXASR_REVERB_MODE_STEREO,
	CRIATOMEXASR_REVERB_MODE_REAR_ONLY,
	CRIATOMEXASR_REVERB_MODE_CENTER_ONLY,
	CRIATOMEXASR_REVERB_MODE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrReverbMode;

typedef struct CriAtomExAsrReverbParameterTag {
	CriFloat32 max_predelay_time_ms;
	CriFloat32 max_room_size;
	CriAtomExAsrReverbMode mode;
	CriFloat32 reverb_time_ms;
	CriFloat32 room_size;
	CriFloat32 predelay_time_ms;
	CriFloat32 cof_low;
	CriFloat32 cof_high;
} CriAtomExAsrReverbParameter;

typedef enum {
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_128 = 0,
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_256,    
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_512,    
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_1024,   
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_2048,   
	CRIATOMEXASR_PITCHSHIFTER_WINDOW_WIDTH_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrPitchShifterWindowWidthType;

typedef enum {
	CRIATOMEXASR_PITCHSHIFTER_OVERLAP_1 = 0, 
	CRIATOMEXASR_PITCHSHIFTER_OVERLAP_2,     
	CRIATOMEXASR_PITCHSHIFTER_OVERLAP_4,     
	CRIATOMEXASR_PITCHSHIFTER_OVERLAP_8,     
	CRIATOMEXASR_PITCHSHIFTER_OVERLAP_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrPitchShifterOverlapType;

typedef struct CriAtomExAsrPitchShifterParameterTag {
	CriFloat32 pitch_cent;
	CriFloat32 formant_cent;
	CriSint32 mode;
    CriAtomExAsrPitchShifterWindowWidthType window_width;
    CriAtomExAsrPitchShifterOverlapType overlap;
} CriAtomExAsrPitchShifterParameter;

typedef enum {
	CRIATOMEX_EQ_BAND_TYPE_LOWSHELF 	= 0,	
	CRIATOMEX_EQ_BAND_TYPE_HIGHSHELF 	= 1,	
	CRIATOMEX_EQ_BAND_TYPE_PEAKING 		= 2,	
	CRIATOMEX_EQ_BAND_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrEqBandType;

typedef struct CriAtomExAsr3BandsEqParameterTag {
	struct {
		CriAtomExAsrEqBandType type;
		CriFloat32 frequency;
		CriFloat32 q_value;
		CriFloat32 gain;
	} bands[3];
} CriAtomExAsr3BandsEqParameter;

typedef struct CriAtomExAsr32BandsEqParameterTag {
	CriSint32 num_used_bands;
	struct {
		CriAtomExAsrEqBandType type;
		CriFloat32 frequency;
		CriFloat32 q_value;
		CriFloat32 gain;
	} bands[32];
} CriAtomExAsr32BandsEqParameter;

typedef struct CriAtomExAsrCompressorParameterTag {
	CriFloat32 threshold;
	CriFloat32 ratio;
	CriFloat32 attack_time;
	CriFloat32 release_time;
	CriFloat32 output_gain; 
	CriFloat32 surround_link;
	CriSint32 side_chain_input_bus_no;
} CriAtomExAsrCompressorParameter;

typedef enum {
	CRIATOMEXASR_SPLIT_EQ_NONE     = 0,
	CRIATOMEXASR_SPLIT_EQ_LOWPASS  = 1,
	CRIATOMEXASR_SPLIT_EQ_HIGHPASS = 2,
	CRIATOMEXASR_SPLIT_EQ_BANDPASS = 3,
	CRIATOMEXASR_SPLIT_EQ_NOTCH    = 4,
	CRIATOMEXASR_SPLIT_EQ_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrSplitEqType;

typedef struct CriAtomExAsrCompressorExParameterTag {
	CriAtomExAsrCompressorParameter base;
	CriAtomExAsrSplitEqType eq_type;
	CriFloat32 frequency;
	CriFloat32 q_value;
} CriAtomExAsrCompressorExParameter;

typedef struct CriAtomExAsrChorusParameterTag {
	CriFloat32 max_delay_time_ms;
	CriFloat32 delay_time_ms;
	CriFloat32 rate;
	CriFloat32 depth;
	CriFloat32 feedback;
	CriFloat32 dry_mix; 
	CriFloat32 wet_mix1;
	CriFloat32 wet_mix2;
	CriFloat32 wet_mix3;
} CriAtomExAsrChorusParameter;

typedef struct CriAtomExAsrFlangerParameterTag {
	CriFloat32 delay_time_ms;
	CriFloat32 rate;
	CriFloat32 depth;
	CriFloat32 feedback;
	CriFloat32 dry_mix; 
	CriFloat32 wet_mix;
} CriAtomExAsrFlangerParameter;

typedef struct CriAtomExAsrDistortionParameterTag {
	CriFloat32 drive;
	CriFloat32 dry_mix; 
	CriFloat32 wet_mix;
	CriFloat32 output_gain; 
} CriAtomExAsrDistortionParameter;

typedef enum {
	CRIATOMEX_SURROUNDER_MODE_STRAIGHT = 0,
	CRIATOMEX_SURROUNDER_MODE_CROSS = 1,
	CRIATOMEX_SURROUNDER_MODE_MATRIX = 2,
	CRIATOMEX_SURROUNDER_MODE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrSurrounderMode;

typedef struct CriAtomExAsrSurrounderParameterTag {
	CriFloat32 max_delay_time_ms;
	CriFloat32 delay_time_ms;
	CriFloat32 gain;
	CriAtomExAsrSurrounderMode mode;
} CriAtomExAsrSurrounderParameter;

typedef struct CriAtomExAsrI3DL2ReverbParameterTag {
	CriFloat32 room;
	CriFloat32 room_hf;
	CriFloat32 decay_time;
	CriFloat32 decay_hf_ratio;
	CriFloat32 reflections;
	CriFloat32 reflections_delay;
	CriFloat32 reverb;
	CriFloat32 reverb_delay;
	CriFloat32 diffusion;
	CriFloat32 density;
	CriFloat32 hf_reference;
	CriFloat32 front_input;
	CriFloat32 rear_input;
	CriFloat32 center_input;
	CriFloat32 front_output;
	CriFloat32 rear_output;
	CriFloat32 center_output;
} CriAtomExAsrI3DL2ReverbParameter;

typedef struct CriAtomExAsrMultiTapDelayParameterTag {
	CriFloat32 max_delay_time_ms;
	struct {
		CriFloat32 delay_time_ms;
		CriFloat32 level;
		CriFloat32 pan;
		CriFloat32 feedback;
	} taps[4];
} CriAtomExAsrMultiTapDelayParameter;

typedef enum {
	CRIATOMEX_LIMITER_TYPE_PEAK = 0,
	CRIATOMEX_LIMITER_TYPE_RMS = 1,
	CRIATOMEX_LIMITER_TYPE_ENUM_SIZE_IS_4BYTES = 0x7FFFFFFF
} CriAtomExAsrLimiterType;

typedef struct CriAtomExAsrLimiterParameterTag {
	CriAtomExAsrLimiterType type;
	CriFloat32 threshold;
	CriFloat32 attack_time;
	CriFloat32 release_time;
	CriFloat32 output_gain; 
	CriFloat32 surround_link;
	CriSint32 side_chain_input_bus_no;
} CriAtomExAsrLimiterParameter;

typedef struct CriAtomExAsrMatrixParameterTag {
	CriFloat32		levels[CRIATOMEXASR_MAX_CHANNELS][CRIATOMEXASR_MAX_CHANNELS];
} CriAtomExAsrMatrixParameter;

#ifdef __cplusplus
extern "C" {
#endif

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsr_SetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetDspParameter(
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, const void* parameter);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsr_SetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetDspParameterByName(
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, const void* parameter);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsr_GetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetDspParameter(
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, void* parameter_buf, CriSint32 parameter_size);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsr_GetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetDspParameterByName(
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, void* parameter_buf, CriSint32 parameter_size);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_SetEffectBypass 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetDspBypass(
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, CriBool bypass);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すと警告が発生しますが、処理は行われます。
 * ::criAtomExAsrRack_SetEffectBypass 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetDspBypassByName(
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, CriBool bypass);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusVolumeByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusVolume(CriSint32 bus_no, CriFloat32 volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_GetBusVolumeByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetBusVolume(CriSint32 bus_no, CriFloat32 *volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusPan3d(CriSint32 bus_no, 
	CriFloat32 pan3d_angle, CriFloat32 pan3d_distance, CriFloat32 pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_GetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetBusPan3d(CriSint32 bus_no, 
	CriFloat32 *pan3d_angle, CriFloat32 *pan3d_distance, CriFloat32 *pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusPan3dByName(const CriChar8* bus_name,
	CriFloat32 pan3d_angle, CriFloat32 pan3d_distance, CriFloat32 pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_GetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetBusPan3dByName(const CriChar8* bus_name,
	CriFloat32 *pan3d_angle, CriFloat32 *pan3d_distance, CriFloat32 *pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusMatrixByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusMatrix(CriSint32 bus_no, 
	CriSint32 input_channels, CriSint32 output_channels, const CriFloat32 matrix[]);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusSendLevelByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusSendLevel(
	CriSint32 bus_no, CriSint32 sendto_no, CriFloat32 level);
/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_AttachBusAnalyzerByName 関数の使用を検討して下さい。
 */

void CRIAPI criAtomExAsr_AttachBusAnalyzer(
	CriSint32 bus_no, const CriAtomExAsrBusAnalyzerConfig* config);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_DetachBusAnalyzerByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_DetachBusAnalyzer(CriSint32 bus_no);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_GetBusAnalyzerInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_GetBusAnalyzerInfo(
	CriSint32 bus_no, CriAtomExAsrBusAnalyzerInfo *info);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsr_SetBusFilterCallbackByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsr_SetBusFilterCallback(CriSint32 bus_no, 
	CriAtomExAsrBusFilterCbFunc pre_func, CriAtomExAsrBusFilterCbFunc post_func, void *obj);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_SetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetDspParameter(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, const void* parameter);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_SetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetDspParameterByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, const void* parameter);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_GetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetDspParameter(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, void* parameter_buf, CriSint32 parameter_size);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_GetEffectParameter 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetDspParameterByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, void* parameter_buf, CriSint32 parameter_size);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すとエラーコールバックが返ります。
 * ::criAtomExAsrRack_SetEffectBypass 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetDspBypass(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriAtomExAsrDspId dsp_id, CriBool bypass);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * 呼び出すと警告が発生しますが、処理は行われます。
 * ::criAtomExAsrRack_SetEffectBypass 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetDspBypassByName(CriAtomExAsrRackId rack_id, 
	const CriChar8* bus_name, CriAtomExAsrDspId dsp_id, CriBool bypass);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusVolumeByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusVolume(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriFloat32 volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_GetBusVolumeByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetBusVolume(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriFloat32* volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusPan3d(CriAtomExAsrRackId rack_id, CriSint32 bus_no, 
	CriFloat32 pan3d_angle, CriFloat32 pan3d_distance, CriFloat32 pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_GetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetBusPan3d(CriAtomExAsrRackId rack_id, CriSint32 bus_no, 
	CriFloat32 *pan3d_angle, CriFloat32 *pan3d_distance, CriFloat32 *pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusPan3dByName(CriAtomExAsrRackId rack_id, const CriChar8* bus_name,
	CriFloat32 pan3d_angle, CriFloat32 pan3d_distance, CriFloat32 pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_GetBusPanInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetBusPan3dByName(CriAtomExAsrRackId rack_id, const CriChar8* bus_name,
	CriFloat32 *pan3d_angle, CriFloat32 *pan3d_distance, CriFloat32 *pan3d_volume);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusMatrixByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusMatrix(
	CriAtomExAsrRackId rack_id, CriSint32 bus_no, CriSint32 input_channels, 
	CriSint32 output_channels, const CriFloat32 matrix[]);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusSendLevelByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusSendLevel(CriAtomExAsrRackId rack_id,
	CriSint32 bus_no, CriSint32 sendto_no, CriFloat32 level);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_AttachBusAnalyzerByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_AttachBusAnalyzer(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, const CriAtomExAsrBusAnalyzerConfig* config);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_DetachBusAnalyzerByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_DetachBusAnalyzer(
	CriAtomExAsrRackId rack_id, CriSint32 bus_no);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_GetBusAnalyzerInfoByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_GetBusAnalyzerInfo(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriAtomExAsrBusAnalyzerInfo *info);

/*JP
 * \deprecated
 * 削除予定の非推奨APIです。
 * ::criAtomExAsrRack_SetBusFilterCallbackByName 関数の使用を検討して下さい。
 */
void CRIAPI criAtomExAsrRack_SetBusFilterCallback(CriAtomExAsrRackId rack_id, 
	CriSint32 bus_no, CriAtomExAsrBusFilterCbFunc pre_func, 
	CriAtomExAsrBusFilterCbFunc post_func, void *obj);

#ifdef __cplusplus
}
#endif


#endif	/* CRI_ATOM_ASR_H_INCLUDED */

/* --- end of file --- */
