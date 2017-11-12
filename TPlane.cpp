#include "stdafx.h"
#include "TPlane.h"

TGEOMETRY_BEGIN

TPlane::TPlane()
{
	
}

TPlane::TPlane(const TPoint3d& pt, const TVector3d& v):
m_v(v.normalized()*v.dot(pt) / v.length())
{

}

TPlane::TPlane(const TPoint3d& pt, const TPoint3d& pt2, const TPoint3d& pt3)
{
	
}

TPlane::~TPlane()
{

}

TGEOMETRY_END


