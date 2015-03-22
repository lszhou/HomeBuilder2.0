// Supply.cpp : implementation file
//

#include "stdafx.h"
#include "P07008217_7.h"
#include "Supply.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Supply dialog


Supply::Supply(CWnd* pParent /*=NULL*/)
	: CDialog(Supply::IDD, pParent)
{
	//{{AFX_DATA_INIT(Supply)
	m_SName = _T("");
	m_Grade = _T("请选择一个等级");
	//}}AFX_DATA_INIT
}


void Supply::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Supply)
	DDX_Text(pDX, IDC_Name, m_SName);
	DDX_CBString(pDX, IDC_Grade, m_Grade);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Supply, CDialog)
	//{{AFX_MSG_MAP(Supply)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Supply message handlers
