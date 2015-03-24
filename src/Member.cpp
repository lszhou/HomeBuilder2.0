// Member.cpp: implementation of the CMember class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "P07008217_7.h"
#include "Member.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////
IMPLEMENT_SERIAL(CMember,CObject,0) 
CMember::CMember()
{

}

CMember::~CMember()
{

}
void CMember::Serialize(CArchive &Ar)
{
	if(Ar.IsLoading())
	{
		Ar >> MBirthday;
		Ar >> MName;
		Ar >> MSex;
	}
	else
	{
		Ar << MBirthday;
		Ar << MName;
		Ar << MSex;
	}
}