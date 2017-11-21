#include "TVector3d.h"

TGEOMETRY_BEGIN

TVector3d::TVector3d()
{

}

TVector3d::TVector3d(const TPoint3d& pt):
m_x(pt.x()), m_y(pt.y()), m_z(pt.z())
{

}

TVector3d::~TVector3d()
{

}

TVector3d::TVector3d(const TVector3d& v):
m_x(v.m_x), m_y(v.m_y), m_z(v.m_z)
{

}

TVector3d::TVector3d(treal x, treal y, treal z):
m_x(x), m_y(y), m_z(z)
{

}

TVector3d::TVector3d(TPoint3d& pt):
m_x(pt.x()), m_y(pt.y()), m_z(pt.z())
{

}

TVector3d& TVector3d::operator=(const TVector3d& v)
{
	m_x = v.m_x;
	m_y = v.m_y;
	m_z = v.m_z;
	return *this;
}

bool TVector3d::isNull() const
{
	return isZero(m_x) && isZero(m_y) && isZero(m_z);
}

treal TVector3d::length() const
{
	return std::sqrt(m_x*m_x + m_y*m_y + m_z*m_z);
}

treal TVector3d::lengthSquared() const
{
	return m_x*m_x + m_y*m_y + m_z*m_z;
}

void TVector3d::normalize()
{
	treal len = length();
	assert(!isZero(len));
	m_x /= len;
	m_y /= len;
	m_z /= len;
}

TVector3d TVector3d::normalized() const
{
	TVector3d output = *this;
	output.normalize();
	return output;
}

treal TVector3d::x() const
{
	return m_x;
}

treal TVector3d::y() const
{
	return m_y;
}

treal TVector3d::z() const
{
	return m_z;
}

treal& TVector3d::rx()
{
	return m_x;
}

treal& TVector3d::ry()
{
	return m_y;
}

treal& TVector3d::rz()
{
	return m_z;
}

void TVector3d::setX(treal x)
{
	m_x = x;
}

void TVector3d::setY(treal y)
{
	m_y = y;
}

void TVector3d::setZ(treal z)
{
	m_z = z;
}

TVector3d& TVector3d::operator-=(const TVector3d& v)
{
	m_x -= v.m_x;
	m_y -= v.m_y;
	m_z -= v.m_z;
	return *this;
}

TVector3d TVector3d::operator-(const TVector3d& v) const
{
	return TVector3d(m_x - v.m_x, m_y - v.m_y, m_z - v.m_z);
}

TVector3d& TVector3d::operator*=(treal factor)
{
	m_x *= factor;
	m_y *= factor;
	m_z *= factor;
	return *this;
}

TVector3d TVector3d::operator*(treal factor) const
{
	return TVector3d(m_x*factor, m_y*factor, m_z*factor);
}

TVector3d& TVector3d::operator/=(treal factor)
{
	assert(!isZero(factor));
	m_x /= factor;
	m_y /= factor;
	m_z /= factor;
	return *this;
}

TVector3d TVector3d::operator/(treal factor) const
{
	assert(!isZero(factor));
	return TVector3d(m_x / factor, m_y / factor, m_z / factor);
}

treal TVector3d::dot(const TVector3d& v) const
{
	return m_x*v.m_x + m_y*v.m_y + m_z*v.m_z;
}

TVector3d& TVector3d::operator+=(const TVector3d& v)
{
	m_x += v.m_x;
	m_y += v.m_y;
	m_z += v.m_z;
	return *this;
}

TVector3d TVector3d::operator+(const TVector3d& v) const
{
	return TVector3d(m_x + v.m_x, m_y + v.m_y, m_z + v.m_z);
}

TGEOMETRY_END




