// P07008217_7.h : main header file for the P07008217_7 application
//

#if !defined(AFX_P07008217_7_H__4D0FA536_325E_45DA_B818_795CAEED0A2A__INCLUDED_)
#define AFX_P07008217_7_H__4D0FA536_325E_45DA_B818_795CAEED0A2A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7App:
// See P07008217_7.cpp for the implementation of this class
//

class CP07008217_7App : public CWinApp
{
public:
	CP07008217_7App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07008217_7App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CP07008217_7App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07008217_7_H__4D0FA536_325E_45DA_B818_795CAEED0A2A__INCLUDED_)
