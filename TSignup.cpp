// TSignup.cpp : implementation file
//

#include "stdafx.h"
#include "P07008217_7.h"
#include "TSignup.h"
#include "MSignup.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// TSignup dialog


TSignup::TSignup(CWnd* pParent /*=NULL*/)
	: CDialog(TSignup::IDD, pParent)
{
	//{{AFX_DATA_INIT(TSignup)
	m_fTArea = 0.0f;
	m_CDTTBirthday = COleDateTime::GetCurrentTime();
	m_STName = _T("");
	m_CDTTWorkday = COleDateTime::GetCurrentTime();
	m_TTitle = _T("请选择一个职称");
	m_TRecord = _T("请选择一个学历");
	pTeachter=new CTeachter;
	m_SGrade = _T("请选择一个住房等级");
	sex="女";
	married="未婚";
	//}}AFX_DATA_INIT

}


void TSignup::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(TSignup)
	DDX_Text(pDX, IDC_TArea, m_fTArea);
	DDX_Text(pDX, IDC_TBirthday, m_CDTTBirthday);
	DDX_Text(pDX, IDC_TName, m_STName);
	DDX_Text(pDX, IDC_TWorkday, m_CDTTWorkday);
	DDX_CBString(pDX, IDC_TTitle, m_TTitle);
	DDX_CBString(pDX, IDC_TRecord, m_TRecord);
	DDX_CBString(pDX, IDC_TGrade, m_SGrade);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(TSignup, CDialog)
	//{{AFX_MSG_MAP(TSignup)
	ON_BN_CLICKED(IDC_Member, OnMember)
	ON_BN_CLICKED(IDC_TMan, OnTMan)
	ON_CBN_KILLFOCUS(IDC_TTitle, OnKillfocusTTitle)
	ON_BN_CLICKED(IDC_TMarried, OnTMarried)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// TSignup message handlers

/*
	if(TDlg.DoModal() == IDOK)
	{
		CTeachter* pTeachter = new CTeachter;
		pTeachter->TWorkday =TDlg.m_CDTTWorkday;
		pTeachter->TBirthday = TDlg.m_CDTTBirthday;
		pTeachter->TArea = TDlg.m_fTArea;
	    pTeachter->TName = TDlg.m_STName;
		pTeachter->TRecord = TDlg.m_TRecord;
		pTeachter->TTitle = TDlg.m_TTitle;
	
		
		mTeachterArray.Add(pTeachter);	
	}
*/

void TSignup::OnMember() 
{
	
//	AfxMessageBox("ss");

	MSignup Mdlg;
	if(Mdlg.DoModal()==IDOK)
	{
/**/		CMember *pMe=new CMember;
		pMe->MName=Mdlg.m_SMName;
		pMe->MSex=Mdlg.sex;
		pMe->MBirthday=Mdlg.m_CDTMBirthday;
		pTeachter->mMemberArray.Add(pMe);

/**/
	}// TODO: Add your control notification handler code here
	
}

void TSignup::OnTMan() 
{
	sex="男";// TODO: Add your control notification handler code here
	
}

void TSignup::OnOK() 
{
	CDialog::UpdateData(1);
	
	pTeachter->TWorkday =m_CDTTWorkday;
	pTeachter->TBirthday =m_CDTTBirthday;
	pTeachter->TArea = m_fTArea;
	pTeachter->TName = m_STName;
	pTeachter->TSex=sex;
	pTeachter->TGrade=m_SGrade;
	pTeachter->TRecord = m_TRecord;
	pTeachter->TTitle = m_TTitle;
	pTeachter->married=married;

	pDoc->mTeachterArray.Add(pTeachter);// TODO: Add extra validation here
	
	CDialog::OnOK();
}

void TSignup::OnKillfocusTTitle() 
{

//	AfxMessageBox("ss");
// TODO: Add your control notification handler code here
	
}

void TSignup::OnTMarried() 
{
	married="已婚";// TODO: Add your control notification handler code here
	
}
