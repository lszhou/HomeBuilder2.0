// Teachter.h: interface for the CTeachter class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEACHTER_H__21F5F1A6_CF57_476C_830C_9ECD5F6C113D__INCLUDED_)
#define AFX_TEACHTER_H__21F5F1A6_CF57_476C_830C_9ECD5F6C113D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include"Member.h"
class CTeachter : public CObject  
{
	DECLARE_SERIAL(CTeachter) 
public:
	CTeachter();
	virtual ~CTeachter();
	void Serialize(CArchive &Ar);
public:
	CString married;
	void Score();
	CString STGrade;
	
	CString TName;
	CString TSex;
	CString TTitle;//职称
    COleDateTime TBirthday;
    COleDateTime TWorkday;
	CString TRecord;//学历
	CString TGrade;//现住房等级
	double TArea;//现住房面积
	double Titlescore;
	double Workscore;
	double Agescore;
	double Recordscore;
	double Totalscore;
	CTypedPtrArray<CObArray, CMember*> mMemberArray;
};

#endif // !defined(AFX_TEACHTER_H__21F5F1A6_CF57_476C_830C_9ECD5F6C113D__INCLUDED_)
