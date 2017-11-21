#include "TMatrix2d.h"
#include "TVector2d.h"

TGEOMETRY_BEGIN

TMatrix2d::TMatrix2d()
{
}

TMatrix2d::TMatrix2d(treal x11, treal x12, treal x21, treal x22) :
m_x11(x11), m_x12(x12), m_x21(x21), m_x22(x22)
{

}

TMatrix2d TMatrix2d::operator*(const TMatrix2d& m)
{
	TMatrix2d output;
	output.setX11(m_x11*m.m_x11 + m_x12*m.m_x21);
	output.setX12(m_x11*m.m_x12 + m_x12*m.m_x22);
	output.setX21(m_x21*m.m_x11 + m_x22*m.m_x21);
	output.setX22(m_x21*m.m_x12 + m_x22*m.m_x22);
	return output;
}

TVector2d TMatrix2d::operator*(const TVector2d& v)
{
	return TVector2d(m_x11*v.x() + m_x12*v.y(), m_x21*v.x() + m_x22*v.y());
}

void TMatrix2d::setX11(treal x11)
{
	m_x11 = x11;
}

void TMatrix2d::setX12(treal x12)
{
	m_x12 = x12;
}

void TMatrix2d::setX21(treal x21)
{
	m_x21 = x21;
}

void TMatrix2d::setX22(treal x22)
{
	m_x22 = x22;
}

treal TMatrix2d::x11() const
{
	return m_x11;
}

treal TMatrix2d::x12() const
{
	return m_x12;
}

treal TMatrix2d::x21() const
{
	return m_x21;
}

treal TMatrix2d::x22() const
{
	return m_x22;
}

TMatrix2d TMatrix2d::eye()
{
	return TMatrix2d(1, 0, 0, 1);
}

TMatrix2d::~TMatrix2d()
{
}

TGEOMETRY_END
