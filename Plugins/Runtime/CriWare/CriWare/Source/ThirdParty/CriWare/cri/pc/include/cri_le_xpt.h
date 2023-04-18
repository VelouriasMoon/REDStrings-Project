/****************************************************************************
 *
 * CRI Middleware SDK
 *
 * Copyright (c) 1998 CRI Middleware Co., Ltd.
 *
 * Library  : CRI Middleware Library
 * Module   : CRI Common Header for Windows
 * File     : cri_le_xpt.h
 * Date     : 2013-12-19
 * Version  : 1.17LE
 *
 ****************************************************************************/
#ifndef CRI_INCL_CRI_XPT_H
#define CRI_INCL_CRI_XPT_H

#if defined(__BORLANDC__)
#define XPT_TGT_BCB
#else
#define XPT_TGT_PC
#define XPT_TGT_PC_PRO
#endif

/*****************************************************************************
 * 基本データ型宣言
 *****************************************************************************/

#if !defined(_TYPEDEF_CriUint8)
#define _TYPEDEF_CriUint8
typedef unsigned char			CriUint8;		/* 符号なし１バイト整数 */
#endif

#if !defined(_TYPEDEF_CriSint8)
#define _TYPEDEF_CriSint8
typedef signed char				CriSint8;		/* 符号つき１バイト整数 */
#endif

#if !defined(_TYPEDEF_CriUint16)
#define _TYPEDEF_CriUint16
typedef unsigned short			CriUint16;		/* 符号なし２バイト整数 */
#endif

#if !defined(_TYPEDEF_CriSint16)
#define _TYPEDEF_CriSint16
typedef signed short			CriSint16;		/* 符号つき２バイト整数 */
#endif

#if !defined(_TYPEDEF_CriUint32)
#define _TYPEDEF_CriUint32
typedef unsigned long			CriUint32;		/* 符号なし４バイト整数 */
#endif

#if !defined(_TYPEDEF_CriSint32)
#define _TYPEDEF_CriSint32
typedef signed long				CriSint32;		/* 符号つき４バイト整数 */
#endif

#if !defined(_TYPEDEF_CriUint64)
#define _TYPEDEF_CriUint64
typedef unsigned __int64		CriUint64;		/* 符号なし８バイト整数 */
#endif

#if !defined(_TYPEDEF_CriSint64)
#define _TYPEDEF_CriSint64
typedef signed __int64			CriSint64;		/* 符号つき８バイト整数 */
#endif

#if !defined(_TYPEDEF_CriUint128)
#define _TYPEDEF_CriUint128
typedef struct {								/* 符号なし16バイト整数 */
	CriUint64	h;								/* 上位64ビット */
	CriUint64	l;								/* 下位64ビット */
} CriUint128;
#endif

#if !defined(_TYPEDEF_CriSint128)
#define _TYPEDEF_CriSint128
typedef struct {								/* 符号つき16バイト整数 */
	CriSint64	h;								/* 上位64ビット */
	CriUint64	l;								/* 下位64ビット */
} CriSint128;
#endif

#if !defined(_TYPEDEF_CriFloat16)
#define _TYPEDEF_CriFloat16
typedef signed short			CriFloat16;		/* ２バイト実数 */
#endif

#if !defined(_TYPEDEF_CriFloat32)
#define _TYPEDEF_CriFloat32
typedef float					CriFloat32;		/* ４バイト実数 */
#endif

#if !defined(_TYPEDEF_CriFloat64)
#define _TYPEDEF_CriFloat64
typedef double					CriFloat64;		/* ８バイト実数 */
#endif

#if !defined(_TYPEDEF_CriFixed32)
#define _TYPEDEF_CriFixed32
typedef signed long				CriFixed32;		/* 固定小数点32ビット */
#endif

#if !defined(_TYPEDEF_CriBool)
#define _TYPEDEF_CriBool
typedef CriSint32				CriBool;		/* 論理型（論理定数を値にとる） */
#endif

#if !defined(_TYPEDEF_CriChar8)
#define _TYPEDEF_CriChar8
typedef char					CriChar8;		/* 文字型 */
#endif

/*****************************************************************************
 * ポインタを格納可能な整数型
 *****************************************************************************/

#if defined(CRI_WIN64) || defined(_WIN64) || defined(_M_X64)

#if !defined(_TYPEDEF_CriSintPtr)
#define _TYPEDEF_CriSintPtr
typedef signed __int64			CriSintPtr;
#endif

#if !defined(_TYPEDEF_CriUintPtr)
#define _TYPEDEF_CriUintPtr
typedef unsigned __int64		CriUintPtr;
#endif

#else

#if defined(_MSC_VER) && (_MSC_VER >= 1300)

#if !defined(_TYPEDEF_CriSintPtr)
#define _TYPEDEF_CriSintPtr
typedef __w64 signed int		CriSintPtr;
#endif

#if !defined(_TYPEDEF_CriUintPtr)
#define _TYPEDEF_CriUintPtr
typedef __w64 unsigned int		CriUintPtr;
#endif

#else

#if !defined(_TYPEDEF_CriSintPtr)
#define _TYPEDEF_CriSintPtr
typedef CriSint32				CriSintPtr;
#endif

#if !defined(_TYPEDEF_CriUintPtr)
#define _TYPEDEF_CriUintPtr
typedef CriUint32				CriUintPtr;
#endif

#endif

#endif	/* end of _WIN64 */

/*****************************************************************************
 * 定数マクロ
 * Macros of constant value
 *****************************************************************************/

/* NULL ポインタ型 */
#if !defined(CRI_NULL)
#ifdef __cplusplus
#define CRI_NULL	(0)
#else
#define CRI_NULL	((void *)0)
#endif
#endif

/* 論理定数１（偽、真） */
#if !defined(CRI_FALSE)
#define CRI_FALSE	(0)
#endif
#if !defined(CRI_TRUE)
#define CRI_TRUE	(1)
#endif

/* 論理定数２（スイッチ） */
#if !defined(CRI_OFF)
#define CRI_OFF		(0)
#endif
#if !defined(CRI_ON)
#define CRI_ON		(1)
#endif

/* 結果判定の定数（成功、失敗） */
#if !defined(CRI_OK)
#define CRI_OK		(0)			/* 成功 */
#endif
#if !defined(CRI_NG)
#define CRI_NG		(-1)		/* 失敗 */
#endif

/*****************************************************************************
 * ポインタまたは64ビットアドレスを格納できる整数型
 * 備考: ポインタ32bitかつROMアドレス空間64bitの環境で、両者を透過的に扱える。
 * The integer type which can hold an pointer or an address up to 64 bits.
 * NOTE: In the environment of pointer 32bit and ROM address space 64bit, 
 *       this type can treat both transparently. 
 *****************************************************************************/

#if !defined(_TYPEDEF_CriUint64Adr)
#define _TYPEDEF_CriUint64Adr
typedef CriUint64				CriUint64Adr;		/* ポインタまたは64ビットアドレスを格納できる整数型 */
#endif

#if !defined(CRI_PTR_TO_UINT64ADR)
#define CRI_PTR_TO_UINT64ADR(ptr)		((CriUint64Adr)(ptr))	/* Convert pointer to CriUint64Adr */
#endif

#if !defined(CRI_UINT64ADR_TO_PTR)
#define CRI_UINT64ADR_TO_PTR(uint64adr)	((void *)(CriUintPtr)(uint64adr))	/* Convert CriUint64Adr to pointer */
#endif

/*****************************************************************************
 * 呼び出し規約
 *****************************************************************************/

#if !defined(CRIAPI)
#define CRIAPI	__cdecl
#endif

#endif  /* CRI_INCL_CRI_XPT_H */
/* End Of File */
