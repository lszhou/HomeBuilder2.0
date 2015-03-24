// Member.h: interface for the CMember class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MEMBER_H__45FE6FD6_CF89_43B5_9C95_6D6DA8765FAB__INCLUDED_)
#define AFX_MEMBER_H__45FE6FD6_CF89_43B5_9C95_6D6DA8765FAB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CMember : public CObject  
{
	DECLARE_SERIAL(CMember) 
public:
	CMember();
	virtual ~CMember();
void Serialize(CArchive &Ar);
public:
	CString MName;
	CString MSex;
    COleDateTime MBirthday;

};

#endif // !defined(AFX_MEMBER_H__45FE6FD6_CF89_43B5_9C95_6D6DA8765FAB__INCLUDED_)
