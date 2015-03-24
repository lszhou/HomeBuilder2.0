#if !defined(AFX_SUPPLY_H__4CA07584_3E03_4BBC_8011_DFD5BCBE7C49__INCLUDED_)
#define AFX_SUPPLY_H__4CA07584_3E03_4BBC_8011_DFD5BCBE7C49__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Supply.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Supply dialog

class Supply : public CDialog
{
// Construction
public:
	Supply(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Supply)
	enum { IDD = IDD_Supply };
	CString	m_SName;
	CString	m_Grade;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Supply)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Supply)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SUPPLY_H__4CA07584_3E03_4BBC_8011_DFD5BCBE7C49__INCLUDED_)
