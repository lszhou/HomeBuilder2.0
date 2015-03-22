#if !defined(AFX_TSIGNUP_H__EC0210BC_65CF_4030_92FD_437A415AB52C__INCLUDED_)
#define AFX_TSIGNUP_H__EC0210BC_65CF_4030_92FD_437A415AB52C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// TSignup.h : header file
//
#include"P07008217_7Doc.h"
#include"Teachter.h"
/////////////////////////////////////////////////////////////////////////////
// TSignup dialog

class TSignup : public CDialog
{
// Construction
public:
	CString married;
	CString sex;
	CTeachter*pTeachter;
	CP07008217_7Doc* pDoc;
	TSignup(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(TSignup)
	enum { IDD = IDD_TSignup };
	float	m_fTArea;
	COleDateTime	m_CDTTBirthday;
	CString	m_STName;
	COleDateTime	m_CDTTWorkday;
	CString	m_TTitle;
	CString	m_TRecord;
	CString	m_SGrade;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(TSignup)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(TSignup)
	afx_msg void OnMember();
	afx_msg void OnTMan();
	virtual void OnOK();
	afx_msg void OnKillfocusTTitle();
	afx_msg void OnTMarried();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TSIGNUP_H__EC0210BC_65CF_4030_92FD_437A415AB52C__INCLUDED_)
