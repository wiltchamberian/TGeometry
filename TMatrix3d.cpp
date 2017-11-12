#include "stdafx.h"
#include "TMatrix3d.h"

TGEOMETRY_BEGIN

TMatrix3d::TMatrix3d()
{
}

TMatrix3d::~TMatrix3d()
{
}

TMatrix3d::TMatrix3d(std::initializer_list<treal> lis)
{
	auto it = lis.begin();
	for (int i = 0; it != lis.end() && i < 9; ++i, ++it)
	{
		m_x[i / 3][i % 3] = *it;
	}
}

TMatrix3d::TMatrix3d(treal x11, treal x12, treal x13, treal x21, treal x22, treal x23, treal x31, treal x32, treal x33)
{
	m_x[0][0] = x11;
	m_x[0][1] = x12;
	m_x[0][2] = x13;
	m_x[1][0] = x21;
	m_x[1][1] = x22;
	m_x[1][2] = x23;
	m_x[2][0] = x31;
	m_x[2][1] = x32;
	m_x[2][2] = x33;
}

void TMatrix3d::setX11(treal x11)
{
	m_x[0][0] = x11;
}

void TMatrix3d::setX12(treal x12)
{
	m_x[0][1] = x12;
}

void TMatrix3d::setX13(treal x13)
{
	m_x[0][2] = x13;
}

void TMatrix3d::setX21(treal x21)
{
	m_x[1][0] = x21;
}

void TMatrix3d::setX22(treal x22)
{
	m_x[1][1] = x22;
}

void TMatrix3d::setX23(treal x23)
{
	m_x[1][2] = x23;
}

void TMatrix3d::setX31(treal x31)
{
	m_x[2][0] = x31;
}

void TMatrix3d::setX32(treal x32)
{
	m_x[2][1] = x32;
}

void TMatrix3d::setX33(treal x33)
{
	m_x[2][2] = x33;
}

treal TMatrix3d::x11() const
{
	return m_x[0][0];
}

treal TMatrix3d::x12() const
{
	return m_x[0][1];
}

treal TMatrix3d::x13() const
{
	return m_x[0][2];
}

treal TMatrix3d::x21() const
{
	return m_x[1][0];
}

treal TMatrix3d::x22() const
{
	return m_x[1][1];
}

treal TMatrix3d::x23() const
{
	return m_x[1][2];
}

treal TMatrix3d::x31() const
{
	return m_x[2][0];
}

treal TMatrix3d::x32() const
{
	return m_x[2][1];
}

treal TMatrix3d::x33() const
{
	return m_x[2][2];
}



TGEOMETRY_END
