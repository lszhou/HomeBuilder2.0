// P07008217_7View.cpp : implementation of the CP07008217_7View class
//

#include "stdafx.h"
#include "P07008217_7.h"

#include "P07008217_7Doc.h"
#include "P07008217_7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View

IMPLEMENT_DYNCREATE(CP07008217_7View, CListView)

BEGIN_MESSAGE_MAP(CP07008217_7View, CListView)
	//{{AFX_MSG_MAP(CP07008217_7View)
	ON_COMMAND(ID_Output_Teachter, OnOutputTeachter)
	ON_UPDATE_COMMAND_UI(ID_Output_Check, OnUpdateOutputCheck)
	ON_UPDATE_COMMAND_UI(ID_Output_Teachter, OnUpdateOutputTeachter)
	ON_COMMAND(ID_OUTPUT_PROFESSIOR, OnOutputProfessior)
	ON_COMMAND(ID_OUTPUT_TEACHER, OnOutputTeacher)
	ON_COMMAND(ID_OUTPUT_MARRIED, OnOutputMarried)
	ON_COMMAND(ID_OUTPUT_AREA, OnOutputArea)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CListView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CListView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View construction/destruction

CP07008217_7View::CP07008217_7View()
{
	// TODO: add construction code here

}

CP07008217_7View::~CP07008217_7View()
{
}

BOOL CP07008217_7View::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.style |= LVS_SHOWSELALWAYS | LVS_REPORT;
	return CListView::PreCreateWindow(cs);
}


/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View drawing

void CP07008217_7View::OnDraw(CDC* pDC)
{
	CP07008217_7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CP07008217_7View::OnInitialUpdate()
{
	CListView::OnInitialUpdate();


	// TODO: You may populate your ListView with items by directly accessing
	//  its list control through a call to GetListCtrl().
}

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View printing

BOOL CP07008217_7View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CP07008217_7View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CP07008217_7View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View diagnostics

#ifdef _DEBUG
void CP07008217_7View::AssertValid() const
{
	CListView::AssertValid();
}

void CP07008217_7View::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

CP07008217_7Doc* CP07008217_7View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CP07008217_7Doc)));
	return (CP07008217_7Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CP07008217_7View message handlers

//DEL void CP07008217_7View::OnOutputCheck() 
//DEL {
//DEL 	
//DEL }

void CP07008217_7View::OnOutputTeachter() 
{
	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	ListCtrl.InsertColumn(0,"户主");
	ListCtrl.SetColumnWidth(0,100);
	ListCtrl.InsertColumn(1,"性别");
	ListCtrl.SetColumnWidth(1,100);
	ListCtrl.InsertColumn(2,"出生日期");
	ListCtrl.SetColumnWidth(2,100);
	ListCtrl.InsertColumn(3,"工作日期");
	ListCtrl.SetColumnWidth(3,100);
	ListCtrl.InsertColumn(4,"职称");
	ListCtrl.SetColumnWidth(4,100);
 	ListCtrl.InsertColumn(5,"最后学历");
	ListCtrl.SetColumnWidth(5,100);
	ListCtrl.InsertColumn(6,"现住房等级");
	ListCtrl.SetColumnWidth(6,100);
	ListCtrl.InsertColumn(7,"申请住房等级");
	ListCtrl.SetColumnWidth(7,100);
	ListCtrl.InsertColumn(8,"现住房面积");
	ListCtrl.SetColumnWidth(8,100);
	ListCtrl.InsertColumn(9,"年龄分");
	ListCtrl.SetColumnWidth(9,100);
	ListCtrl.InsertColumn(10,"工龄分");
	ListCtrl.SetColumnWidth(10,100);
	ListCtrl.InsertColumn(11,"职称分");
	ListCtrl.SetColumnWidth(11,100);
	ListCtrl.InsertColumn(12,"学龄分");
	ListCtrl.SetColumnWidth(12,100);
	ListCtrl.InsertColumn(13,"总分");
	ListCtrl.SetColumnWidth(13,100);

	int i,j;
	double temp;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	const int sum=pDoc->mTeachterArray.GetSize();
	int *pscore=new int[sum];
	for(i=0;i<sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		temp=pTeachter->Totalscore;
		for(j=0;j<sum;j++)
		{
			if(pTeachter->Totalscore>=temp)
			{
				temp=pTeachter->Totalscore;
				pscore[i]=j;
			}
		}
	}
	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="一室")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here

	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="一室一厅")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here
	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="二室")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here
	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="二室一厅")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here
	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="三室")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here
	for(i = 0;i < sum;i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		if(pTeachter->STGrade!="三室一厅")continue;
		pTeachter->Score();
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday.GetYear(),pTeachter->TWorkday.GetYear());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->STGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Agescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Workscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Titlescore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Recordscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->Totalscore);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

	}	// TODO: Add your command handler code here
	// TODO: Add your command handler code here
	
}

void CP07008217_7View::OnUpdateOutputCheck(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}

void CP07008217_7View::OnUpdateOutputTeachter(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	
}








void CP07008217_7View::ShowCheck()
{
	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	ListCtrl.InsertColumn(0,"户主");
	ListCtrl.SetColumnWidth(0,100);
	ListCtrl.InsertColumn(1,"性别");
	ListCtrl.SetColumnWidth(1,100);
	ListCtrl.InsertColumn(2,"出生日期");
	ListCtrl.SetColumnWidth(2,100);
	ListCtrl.InsertColumn(3,"工作日期");
	ListCtrl.SetColumnWidth(3,100);
	ListCtrl.InsertColumn(4,"职称");
	ListCtrl.SetColumnWidth(4,100);
 	ListCtrl.InsertColumn(5,"最后学历");
	ListCtrl.SetColumnWidth(5,100);
	ListCtrl.InsertColumn(6,"现住房等级");
	ListCtrl.SetColumnWidth(6,100);
	ListCtrl.InsertColumn(7,"现住房面积");
	ListCtrl.SetColumnWidth(7,100);


	int i,j;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	for(i = 0;i < pDoc->mTeachterArray.GetSize();i++)
	{
		pTeachter = pDoc->mTeachterArray[i];
		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TName);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TSex);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TTitle);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%s",pTeachter->TRecord);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TBirthday);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%d-%d",pTeachter->TWorkday);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;

		Str.Format("%.2f",pTeachter->TArea);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;
	}
}

void CP07008217_7View::OnOutputProfessior() 
{
	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	ListCtrl.InsertColumn(0,"教授姓名");
	ListCtrl.SetColumnWidth(0,100);
	ListCtrl.InsertColumn(1,"现住房等级");
	ListCtrl.SetColumnWidth(1,100);
	int i,j,sum=0;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	for(i = 0;i < pDoc->mTeachterArray.GetSize();i++)
	{
		CTeachter*pTe=pDoc->mTeachterArray[i];
		if(pTe->TGrade=="三室一厅"||pTe->married=="三室"||pTe->TRecord!="副教授")continue;
		sum++;
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;
	}
	Str.Format("%s","本类教师的总数");
	ListCtrl.InsertItem(i,Str);
	j = 1;

	Str.Format("%d",sum);
	ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
	j++;
	
}

void CP07008217_7View::OnOutputTeacher() 
{
	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	ListCtrl.InsertColumn(0,"教授姓名");
	ListCtrl.SetColumnWidth(0,100);
	ListCtrl.InsertColumn(1,"住房标准");
	ListCtrl.SetColumnWidth(1,100);
	int i,j;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	for(i = 0;i < pDoc->mTeachterArray.GetSize();i++)
	{
		CTeachter*pTe=pDoc->mTeachterArray[i];
		if(pTe->TGrade!="集体宿舍"&&pTe->TGrade!="一室"||pTe->TRecord!="博士")continue;
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%s",pTeachter->TGrade);
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;
	}
	
}

void CP07008217_7View::OnOutputMarried() 
{
/**/	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	ListCtrl.InsertColumn(0,"户主");
	ListCtrl.SetColumnWidth(0,100);
	ListCtrl.InsertColumn(1,"出生年月");
	ListCtrl.SetColumnWidth(1,100);
	int i,j,sum=0;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	for(i = 0;i < pDoc->mTeachterArray.GetSize();i++)
	{
		CTeachter*pTe=pDoc->mTeachterArray[i];
		if(pTe->TGrade!="集体宿舍"||pTe->married!="已婚")continue;
		sum++;
		Str.Format("%s",pTeachter->TName);
		ListCtrl.InsertItem(i,Str);
		j = 1;

		Str.Format("%d-%d",pTeachter->TBirthday.GetYear(),pTeachter->TBirthday.GetMonth());
		ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
		j++;
	}
	Str.Format("%s","本类教师的总数");
	ListCtrl.InsertItem(i,Str);
	j = 1;

	Str.Format("%d",sum);
	ListCtrl.SetItem(i,j,LVIF_TEXT,Str,0,0,0,NULL);
	j++;
	// TODO: Add your command handler code here
/**/	
}

void CP07008217_7View::OnOutputArea() 
{
	CListCtrl& ListCtrl = GetListCtrl();
	while(ListCtrl.DeleteColumn(0)){};
	ListCtrl.DeleteAllItems();
	double areasum=0;
	int number=0;
	CString Str;
	CTeachter* pTeachter = NULL;
	CP07008217_7Doc* pDoc = GetDocument();
	for(int i = 0;i < pDoc->mTeachterArray.GetSize();i++)
	{
		CTeachter*pTe=pDoc->mTeachterArray[i];
		areasum+=pTe->TArea;
		number+=pTe->mMemberArray.GetSize()+1;
	}

	ListCtrl.InsertColumn(0,"全校教师人均(包括家庭人口)住房面积");
	ListCtrl.SetColumnWidth(0,400);
	Str.Format("%.2f",areasum/(double) number);
	ListCtrl.InsertItem(i,Str);
	
}
/*    3．可输出婚后仍分居集体宿舍者的户主姓名及出生年月，这本类教师的总数。
    4．可输出未住上三室一厅或三室的副教授，教授姓名及现住房标准，这类教师的总数。
    5．可输出未住上一室一厅及以上等级的具有博士学位的教师姓名及住房标准。
6．可输出全校教师人均(包括家庭人口)住房面积。
*/