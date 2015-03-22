// P07008217_7Doc.cpp : implementation of the CP07008217_7Doc class
//

#include "stdafx.h"
#include "P07008217_7.h"
#include"Supply.h"
#include "P07008217_7Doc.h"
#include"TSignup.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7Doc

IMPLEMENT_DYNCREATE(CP07008217_7Doc, CDocument)

BEGIN_MESSAGE_MAP(CP07008217_7Doc, CDocument)
	//{{AFX_MSG_MAP(CP07008217_7Doc)
	ON_COMMAND(ID_Input_Supply, OnInputSupply)
	ON_COMMAND(ID_Input_Teachter, OnInputTeachter)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7Doc construction/destruction

CP07008217_7Doc::CP07008217_7Doc()
{
	// TODO: add one-time construction code here

}

CP07008217_7Doc::~CP07008217_7Doc()
{
}

BOOL CP07008217_7Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CP07008217_7Doc serialization

void CP07008217_7Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
	CObject::Serialize(ar);
	mTeachterArray.Serialize(ar);

}

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7Doc diagnostics

#ifdef _DEBUG
void CP07008217_7Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CP07008217_7Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7Doc commands

void CP07008217_7Doc::OnInputSupply() 
{
	Supply SDlg;
	if(SDlg.DoModal()==IDOK)
	{
		int i;
		for(i=0;i<mTeachterArray.GetSize();i++)
			if(mTeachterArray[i]->TName==SDlg.m_SName)
				mTeachterArray[i]->STGrade=SDlg.m_Grade;
	}
/*	Supply SDlg;
	if(SDlg.DoModal()==IDOK)
	{
		CSupply* pSupply=new CSupply;
		pSupply->TGrade=SDlg.m_Grade;
	    pSupply->SName=SDlg.m_SName;

	}
	UpdateAllViews(NULL);
*/	
}

void CP07008217_7Doc::OnInputTeachter() 
{
	TSignup TDlg;
	TDlg.pDoc=this;
	TDlg.DoModal();
	//提示，此处可对对话框空间关联成员变量初始化

//DEL void CP07008217_7Doc::OnUpdateInputTeachter(CCmdUI* pCmdUI) 
//DEL {
//DEL 	// TODO: Add your command update UI handler code here
//DEL 	
//DEL }
}