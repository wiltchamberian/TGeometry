#ifndef _TGEO_ALGORITHM_H
#define _TGEO_ALGORITHM_H

#include <cmath>
#include "TPoint.h"

namespace ty{

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

}

#endif //_TGEO_ALGORITHM_H