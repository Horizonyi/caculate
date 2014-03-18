// caculate.h : main header file for the CACULATE application
//

#if !defined(AFX_CACULATE_H__3C3BB70E_A26B_4827_9670_E6791372FE06__INCLUDED_)
#define AFX_CACULATE_H__3C3BB70E_A26B_4827_9670_E6791372FE06__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCaculateApp:
// See caculate.cpp for the implementation of this class
//

class CCaculateApp : public CWinApp
{
public:
	CCaculateApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCaculateApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCaculateApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CACULATE_H__3C3BB70E_A26B_4827_9670_E6791372FE06__INCLUDED_)
