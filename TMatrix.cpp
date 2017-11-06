#include "stdafx.h"
#include "TMatrix.h"
#include "TVector2d.h"

namespace ty{

	TMatrix::TMatrix()
	{
	}

	TMatrix::TMatrix(treal x11, treal x12, treal x21, treal x22) :
		m_x11(x11), m_x12(x12), m_x21(x21), m_x22(x22)
	{

	}

	TMatrix TMatrix::operator*(const TMatrix& m)
	{
		TMatrix output;
		output.setX11(m_x11*m.m_x11 + m_x12*m.m_x21);
		output.setX12(m_x11*m.m_x12 + m_x12*m.m_x22);
		output.setX21(m_x21*m.m_x11 + m_x22*m.m_x21);
		output.setX22(m_x21*m.m_x12 + m_x22*m.m_x22);
		return output;
	}
	
	TVector2d TMatrix::operator*(const TVector2d& v)
	{
		return TVector2d(m_x11*v.x() + m_x12*v.y(), m_x21*v.x() + m_x22*v.y());
	}

	void TMatrix::setX11(treal x11)
	{
		m_x11 = x11;
	}

	void TMatrix::setX12(treal x12)
	{
		m_x12 = x12;
	}

	void TMatrix::setX21(treal x21)
	{
		m_x21 = x21;
	}

	void TMatrix::setX22(treal x22)
	{
		m_x22 = x22;
	}

	treal TMatrix::x11() const
	{
		return m_x11;
	}

	treal TMatrix::x12() const
	{
		return m_x12;
	}

	treal TMatrix::x21() const
	{
		return m_x21;
	}

	treal TMatrix::x22() const
	{
		return m_x22;
	}

	TMatrix::~TMatrix()
	{
	}

}
