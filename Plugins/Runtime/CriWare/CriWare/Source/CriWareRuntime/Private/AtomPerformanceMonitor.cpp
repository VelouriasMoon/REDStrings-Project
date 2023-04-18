/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 2018 CRI Middleware Co., Ltd.
 *
 * Library  : CRIWARE plugin for Unreal Engine 4
 * Module   : PerformanceMonitor
 * File     : AtomPerformanceMonitor.cpp
 *
 ****************************************************************************/

/***************************************************************************
 *      インクルードファイル
 *      Include files
 ***************************************************************************/
/* モジュールヘッダ */
#include "AtomPerformanceMonitor.h"

/* CRIWAREプラグインヘッダ */
#include "CriWareRuntimePrivatePCH.h"

/***************************************************************************
 *      定数マクロ
 *      Macro Constants
 ***************************************************************************/

/***************************************************************************
 *      処理マクロ
 *      Macro Functions
 ***************************************************************************/

/***************************************************************************
 *      データ型宣言
 *      Data Type Declarations
 ***************************************************************************/

/***************************************************************************
 *      変数宣言
 *      Prototype Variables
 ***************************************************************************/

/***************************************************************************
 *      クラス宣言
 *      Prototype Classes
 ***************************************************************************/

/***************************************************************************
 *      関数宣言
 *      Prototype Functions
 ***************************************************************************/

/***************************************************************************
 *      変数定義
 *      Variable Definition
 ***************************************************************************/

/***************************************************************************
 *      クラス定義
 *      Class Definition
 ***************************************************************************/
FAtomPerformanceMonitor::FAtomPerformanceMonitor()
{
	criAtom_AttachPerformanceMonitor();
}

FAtomPerformanceMonitor::~FAtomPerformanceMonitor()
{
	criAtom_DetachPerformanceMonitor();
}

void FAtomPerformanceMonitor::Tick(float DeltaTime)
{
#if STATS
	/* パフォーマンス情報の取得 */
	CriAtomExPerformanceInfo Info;
	FCriWareApi::criAtomEx_GetPerformanceInfo(&Info);

	/* サーバ処理の情報を表示 */
	DECLARE_DWORD_ACCUMULATOR_STAT(TEXT("Atom Process Count"), STAT_AtomProcessCount, STATGROUP_CriWare);
	SET_DWORD_STAT(STAT_AtomProcessCount, Info.server_process_count);
	DECLARE_FLOAT_COUNTER_STAT(TEXT("Atom CPU Load [%]"), STAT_AtomCpuLoad, STATGROUP_CriWare);
	SET_FLOAT_STAT(STAT_AtomCpuLoad, (float)Info.last_server_time * 0.006f);
	DECLARE_FLOAT_COUNTER_STAT(TEXT("Atom Server Interval [ms]"), STAT_AtomServerInterval, STATGROUP_CriWare);
	SET_FLOAT_STAT(STAT_AtomServerInterval, (float)Info.last_server_interval * 0.001f);
#endif
}

bool FAtomPerformanceMonitor::IsTickable() const
{
	return true;
}

TStatId FAtomPerformanceMonitor::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FAtomPerformanceMonitor, STATGROUP_Tickables);
}

/***************************************************************************
 *      関数定義
 *      Function Definition
 ***************************************************************************/

/* --- end of file --- */
