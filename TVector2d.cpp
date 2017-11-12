#include "stdafx.h"
#include "TVector2d.h"
#include "TPoint.h"
#include "TMatrix.h"
#include "tgeo_algorithm.h"

TGEOMETRY_BEGIN

TVector2d::TVector2d()
{
}


TVector2d::TVector2d(const TPoint& point) :
m_x(point.x()), m_y(point.y())
{
	
}

TVector2d::TVector2d(const TVector2d& v) :
m_x(v.m_x), m_y(v.m_y), m_row(v.m_row)
{

}

TVector2d::TVector2d(treal v1, treal v2) :
m_x(v1), m_y(v2)
{

}

TVector2d::~TVector2d()
{
}

bool TVector2d::isNull() const
{
	return isZero(m_x) && isZero(m_y);
}

treal TVector2d::length() const
{
	return std::sqrt(pow(m_x, 2) + pow(m_y, 2));
}

treal TVector2d::lengthSquared() const
{
	return pow(m_x, 2) + pow(m_y, 2);
}

void tgeometry::TVector2d::normalize()
{
	if (isNull()) return;
	treal len = length();
	m_x/=len;
	m_y /= len;
}

TVector2d TVector2d::normalized() const
{
	TVector2d output(*this);
	output.normalize();
	return output;
}

void TVector2d::setX(treal x)
{
	m_x = x;
}

void TVector2d::setY(treal y)
{
	m_y = y;
}

tgeometry::treal tgeometry::TVector2d::x() const
{
	return m_x;
}

treal TVector2d::y() const
{
	return m_y;
}

treal& TVector2d::rx()
{
	return m_x;
}

tgeometry::treal& tgeometry::TVector2d::ry()
{
	return m_y;
}

TVector2d& TVector2d::operator/=(treal factor)
{
	assert(!isZero(factor));
	m_x /= factor;
	m_y /= factor;
	return *this;
}

TVector2d TVector2d::operator*(const TMatrix& m)
{
	return TVector2d(m_x*m.m_x11 + m_y*m.m_x21, m_x*m.m_x12 + m_y*m.m_x22);
}

TVector2d TVector2d::operator*(treal factor) const
{
	TVector2d output;
	output *= factor;
	return output;
}

treal TVector2d::dot(const TVector2d& v) const
{
	return m_x*v.m_x + m_y*v.m_y;
}

void TVector2d::rotate(treal angle)
{
	TMatrix m(tCos(angle), -tSin(angle), tSin(angle), tCos(angle));
	*this = m*(*this);
}

#if 0
TVector3d TVector2d::cross(const TVector2d& v)
{

}


TVector3d& TVector2d::operator*=(const TVector2d& v)
{

}
#endif
TVector2d& TVector2d::operator-=(const TVector2d& v)
{
	m_x -= v.m_x;
	m_y -= v.m_y;
	return *this;
}

tgeometry::TVector2d& tgeometry::TVector2d::operator+=(const TVector2d& v)
{
	m_x += v.m_x;
	m_y += v.m_y;
	return *this;
}

TVector2d& TVector2d::operator=(const TVector2d& v)
{
	m_x = v.m_x;
	m_y = v.m_y;
}

TVector2d TVector2d::operator/(treal factor) const
{
	assert(!isZero(factor));
	TVector2d output;
	output /= factor;
	return output;
}

TGEOMETRY_END