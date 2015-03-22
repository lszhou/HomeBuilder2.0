// MSignup.cpp : implementation file
//

#include "stdafx.h"
#include "P07008217_7.h"
#include "MSignup.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// MSignup dialog


MSignup::MSignup(CWnd* pParent /*=NULL*/)
	: CDialog(MSignup::IDD, pParent)
{
	//{{AFX_DATA_INIT(MSignup)
	m_CDTMBirthday = COleDateTime::GetCurrentTime();
	m_SMName = _T("");
	//}}AFX_DATA_INIT
}


void MSignup::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(MSignup)
	DDX_Text(pDX, IDC_MBirthday, m_CDTMBirthday);
	DDX_Text(pDX, IDC_MName, m_SMName);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(MSignup, CDialog)
	//{{AFX_MSG_MAP(MSignup)
	ON_BN_CLICKED(IDC_MMan, OnMMan)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// MSignup message handlers

void MSignup::OnMMan() 
{
	sex="ÄÐ";// TODO: Add your control notification handler code here
	
}
