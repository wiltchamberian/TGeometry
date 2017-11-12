#include "TPoint3d.h"
#include "TVector3d.h"

TGEOMETRY_BEGIN

TPoint3d::TPoint3d():
TPoint3d(0,0,0)
{
	
}

TPoint3d::TPoint3d(treal x, treal y, treal z):
m_x(x), m_y(y), m_z(z)
{

}

tgeometry::TPoint3d::TPoint3d(const TPoint3d& pt):
m_x(pt.m_x), m_y(pt.m_y), m_z(pt.m_z)
{

}

TPoint3d::TPoint3d(const TVector3d& v):
m_x(v.x()), m_y(v.y()), m_z(v.z())
{

}

TPoint3d::~TPoint3d()
{

}

TPoint3d& TPoint3d::operator=(const TPoint3d& pt)
{
	m_x = pt.m_x;
	m_y = pt.m_y;
	m_z = pt.m_z;
}

bool TPoint3d::isNull()
{
	return isZero(m_x) && isZero(m_y) && isZero(m_z);
}

treal& TPoint3d::rx()
{
	return m_x;
}

treal& TPoint3d::ry()
{
	return m_y;
}

treal& TPoint3d::rz()
{
	return m_z;
}

void TPoint3d::setX(treal x)
{
	m_x = x;
}

void TPoint3d::setY(treal y)
{
	m_y = y;
}

void TPoint3d::setZ(treal z)
{
	m_z = z;
}

treal TPoint3d::x() const
{
	return m_x;
}

treal TPoint3d::y() const
{
	return m_y;
}

treal TPoint3d::z() const
{
	return m_z;
}

tgeometry::TPoint3d& tgeometry::TPoint3d::operator*=(treal factor)
{
	m_x *= factor;
	m_y *= factor;
	m_z *= factor;
}

TPoint3d& TPoint3d::operator+=(const TPoint3d& pt)
{
	m_x += pt.m_x;
	m_y += pt.m_y;
	m_z += pt.m_z;
}

TPoint3d TPoint3d::operator+(const TPoint3d pt) const
{
	return TPoint3d(m_x + pt.m_x, m_y + pt.m_y, m_z + pt.m_z);
}

TPoint3d& TPoint3d::operator-=(const TPoint3d& pt)
{
	m_x -= pt.m_x;
	m_y -= pt.m_y;
	m_z -= pt.m_z;
}

TPoint3d TPoint3d::operator-(const TPoint3d pt) const
{
	return TPoint3d(m_x - pt.m_x, m_y - pt.m_y, m_z - pt.m_z);
}

TPoint3d TPoint3d::operator*(treal factor) const
{
	return TPoint3d(m_x*factor, m_y*factor, m_z*factor);
}

TPoint3d& TPoint3d::operator/=(treal divisor)
{
	assert(!isZero(divisor));

	m_x /= divisor;
	m_y /= divisor;
	m_z /= divisor;
}

TPoint3d TPoint3d::operator/(treal factor) const
{
	assert(!isZero(factor));
	return TPoint3d(m_x / factor, m_y / factor, m_z / factor);
}

void TPoint3d::move(const TVector3d& v)
{
	m_x += v.x();
	m_y += v.y();
	m_z += v.z();
}

TGEOMETRY_END