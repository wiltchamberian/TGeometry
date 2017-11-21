#include "TPlane.h"
#include "TVector2d.h"
#include "tgeo_algorithm.h"

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

treal TPlane::distance(const TPoint3d& pt)
{
	treal t=dot(pt, m_v.normalized());
	return std::abs(m_v.length() - t);
}

TPlane::~TPlane()
{

}

TGEOMETRY_END


