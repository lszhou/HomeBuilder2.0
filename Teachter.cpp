// Teachter.cpp: implementation of the CTeachter class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "P07008217_7.h"
#include "Teachter.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CTeachter,CObject,0) 

CTeachter::CTeachter()
{
	Score();
}

CTeachter::~CTeachter()
{

}

void CTeachter::Score()
{
	if(TTitle=="Professor") Titlescore=20;
	else if(TTitle=="副教授") Titlescore=16;
	else if(TTitle=="讲师") Titlescore=12;
	else Titlescore=8;
	if(TRecord=="博士") Recordscore=4.5;
	else if(TRecord=="硕士") Recordscore=3.25;
	else if(TRecord=="本科") Recordscore=2;
	else Recordscore=0;
	COleDateTime odt=COleDateTime::GetCurrentTime();
	if(odt.GetMonth()>=TWorkday.GetMonth())
		Workscore=(odt.GetYear()-TWorkday.GetYear())*0.5+(odt.GetMonth()-TWorkday.GetMonth())*0.0416;
	else Workscore=(odt.GetYear()-TWorkday.GetYear()-1)*0.5+(odt.GetMonth()+12-TWorkday.GetMonth())*0.0416;
	if(odt.GetMonth()>=TBirthday.GetMonth())
		Agescore=(odt.GetYear()-TBirthday.GetYear())*0.1+(odt.GetMonth()-TBirthday.GetMonth())*0.0038;
	else Agescore=(odt.GetYear()-TBirthday.GetYear()-1)*0.1+(odt.GetMonth()+12-TBirthday.GetMonth())*0.0038;
	Totalscore=Titlescore+Recordscore+Workscore+Agescore;

}
void CTeachter::Serialize(CArchive &Ar)
{
	CObject::Serialize(Ar);
	if(Ar.IsLoading())
	{
		Ar >> Agescore;
		Ar >> married;
		Ar >> Recordscore;
		Ar >> STGrade;
		Ar >> TArea;
		Ar >> TBirthday;
		Ar >> TGrade;
		Ar >> Titlescore;
		Ar >> TName;
		Ar >> Totalscore;
		Ar >> TRecord;
		Ar >> TSex;
		Ar >> TTitle;
		Ar >> TWorkday;
		Ar >> Workscore;
	}
	else
	{
		Ar << Agescore;
		Ar << married;
		Ar << Recordscore;
		Ar << STGrade;
		Ar << TArea;
		Ar << TBirthday;
		Ar << TGrade;
		Ar << Titlescore;
		Ar << TName;
		Ar << Totalscore;
		Ar << TRecord;
		Ar << TSex;
		Ar << TTitle;
		Ar << TWorkday;
		Ar << Workscore;
	}
	mMemberArray.Serialize(Ar);
}
