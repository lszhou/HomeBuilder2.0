// P07008217_7View.h : interface of the CP07008217_7View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_P07008217_7VIEW_H__690A7D30_696D_4C80_B5E3_97F91EF78062__INCLUDED_)
#define AFX_P07008217_7VIEW_H__690A7D30_696D_4C80_B5E3_97F91EF78062__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CP07008217_7View : public CListView
{
protected: // create from serialization only
	CP07008217_7View();
	DECLARE_DYNCREATE(CP07008217_7View)

// Attributes
public:
	CP07008217_7Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CP07008217_7View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	void ShowCheck();
	virtual ~CP07008217_7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CP07008217_7View)
	afx_msg void OnOutputTeachter();
	afx_msg void OnUpdateOutputCheck(CCmdUI* pCmdUI);
	afx_msg void OnUpdateOutputTeachter(CCmdUI* pCmdUI);
	afx_msg void OnOutputProfessior();
	afx_msg void OnOutputTeacher();
	afx_msg void OnOutputMarried();
	afx_msg void OnOutputArea();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in P07008217_7View.cpp
inline CP07008217_7Doc* CP07008217_7View::GetDocument()
   { return (CP07008217_7Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_P07008217_7VIEW_H__690A7D30_696D_4C80_B5E3_97F91EF78062__INCLUDED_)
