#ifndef _TGEO_ALGORITHM_H
#define _TGEO_ALGORITHM_H

#include <cmath>
#include "TNumeric.h"
#include "TPoint.h"
#include "TPoint3d.h"
#include "TVector3d.h"
#include "TStraightLine.h"
#include "TStraightLine3d.h"

TGEOMETRY_BEGIN

inline treal square(treal v)
{
	return pow<treal, int>(v, 2);
}

inline treal distance(const TPoint& p1, const TPoint& p2)
{
	return sqrt(square(p1.x() - p2.x()) + square(p1.y() - p2.y()));
}

inline treal tCos(treal alpha)
{
	return cos(alpha);
}

inline treal tSin(treal alpha)
{
	return sin(alpha);
}

inline treal tSqrt(treal alpha)
{
	return std::sqrt(alpha);
}

inline treal dot(const TVector2d& v1, const TVector2d& v2)
{
	return v1.x()*v2.x() + v1.y()*v2.y();
}

inline treal dot(const TVector3d& v1, const TVector3d& v2)
{
	return v1.x()*v2.x() + v1.y()*v2.y() + v1.z()*v2.z();
}

inline treal distance(const TPoint3d& t1, const TPoint3d& t2)
{
	return tSqrt(square(t1.x() - t2.x()) + square(t1.y() - t2.y()) + square(t1.z() - t2.z()));
}

inline TVector2d operator +(const TVector2d& v1, const TVector2d & v2)
{
	return TVector2d(v1.x() + v2.x(), v1.y() + v2.y());
}

inline TVector2d operator - (const TVector2d& v1, const TVector2d& v2)
{
	return TVector2d(v1.x() - v2.x(), v1.y() - v2.y());
}

inline treal distance(const TPoint& pt, const TStraightLine& line)
{
	TVector2d v = line.character();
	TVector2d tmp=TVector2d(pt).project(v);
	return (v - tmp).length();
}

inline TVector3d cross(const TVector2d& v1, const TVector2d& v2)
{
	return TVector3d(0, 0, v1.x()*v2.y() - v2.x()*v1.y());
}

inline bool parallel(const TVector2d& v1, const TVector2d& v2)
{
	return isZero(dot(v1, v2.orthogonaled()));
}

inline bool orthogonal(const TVector2d& v1, const TVector2d& v2)
{
	return isZero(dot(v1, v2));
}

inline bool parallel(const TStraightLine& l1, const TStraightLine& l2)
{
	return parallel(l1.character(), l2.character());
}

inline bool orthogonal(const TStraightLine& l1, const TStraightLine& l2)
{
	return orthogonal(l1.character(), l2.character());
}

inline bool intersect(const TStraightLine& l1, const TStraightLine& l2,TPoint* pt)
{
	if (parallel(l1, l2))
	{
		return false;
	}
	else
	{
		if (pt != nullptr)
		{
			
		}
	}
}

TGEOMETRY_END

#endif //_TGEO_ALGORITHM_H