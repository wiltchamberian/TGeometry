#ifndef _TNUMERIC_H
#define _TNUMERIC_H

#include <limits>
#include <cassert>
#include "TUtility.h"
using namespace std;


TGEOMETRY_BEGIN

typedef double treal;

template<class _T>
_T abs(const _T& value)
{
	return value >= 0 ? value : (-value);
}

template<class _T>
bool isZero(const _T& value)
{
	return abs(value) <= numeric_limits<_T>::epsilon();
}

template<class _T>
bool isEqual(const _T& v1, const _T& v2)
{
	return isZero<_T>(v1 - v2);
}


TGEOMETRY_END

#endif