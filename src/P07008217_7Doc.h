// P07008217_7Doc.h : interface of the CP07008217_7Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_P07008217_7DOC_H__334D588E_835D_4C2D_8256_42027A16449C__INCLUDED_)
#define AFX_P07008217_7DOC_H__334D588E_835D_4C2D_8256_42027A16449C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include"Teachter.h"
class CP07008217_7Doc : public CDocument
{
protected: // create from serialization only
	CP07008217_7Doc();
	DECLARE_DYNCREATE(CP07008217_7Doc)

// Attributes
public:

CTypedPtrArray<CObArray,CTeachter*>mTeachterArray;// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07008217_7Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CP07008217_7Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CP07008217_7Doc)
	afx_msg void OnInputSupply();
	afx_msg void OnInputTeachter();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07008217_7DOC_H__334D588E_835D_4C2D_8256_42027A16449C__INCLUDED_)
