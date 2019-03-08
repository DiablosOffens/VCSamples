// stdafx.h : include file for standard system include files
//
// This is a part of the Microsoft Foundation Classes C++ library.
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// This source code is only intended as a supplement to the
// Microsoft Foundation Classes Reference and Microsoft
// QuickHelp and/or WinHelp documentation provided with the library.
// See these sources for detailed information regarding the
// Microsoft Foundation Classes product.

#define AFX_CRT_ERRORCHECK(expr) \
	AtlCrtErrorCheck(expr)

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxole.h>
#include <afxcmn.h>
#include <afxpriv.h>
#include <atlbase.h>
#include <atlwin.h>
#include "windowsx.h"
#include "ehvecdtr.h"
#include <xstddef>

#pragma warning( disable: 4706 4100 )


_STD_BEGIN
extern "C" {
	//using ::exception;

	using ::terminate_handler;
	using ::unexpected;
	using ::unexpected_handler;
};
_STD_END

extern "C" inline __declspec(noreturn) void __cdecl __std_terminate(void) { ::terminate(); }
