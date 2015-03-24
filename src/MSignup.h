#if !defined(AFX_MSIGNUP_H__DF5F23BE_212E_4433_B847_E54DB33FAD78__INCLUDED_)
#define AFX_MSIGNUP_H__DF5F23BE_212E_4433_B847_E54DB33FAD78__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MSignup.h : header file
//
#include"P07008217_7Doc.h"
/////////////////////////////////////////////////////////////////////////////
// MSignup dialog

class MSignup : public CDialog
{	
// Construction
public:
	CString sex;
	CP07008217_7Doc* pDoc;
	MSignup(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(MSignup)
	enum { IDD = IDD_MSignup };
	COleDateTime	m_CDTMBirthday;
	CString	m_SMName;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MSignup)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(MSignup)
	afx_msg void OnMMan();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MSIGNUP_H__DF5F23BE_212E_4433_B847_E54DB33FAD78__INCLUDED_)
