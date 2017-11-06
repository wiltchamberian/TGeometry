#include "stdafx.h"
#include "TPoint.h"
#include "TVector2d.h"

#include <assert.h>

using namespace ty;

namespace ty{

	TPoint::TPoint()
	{
	}

	TPoint::TPoint(const TPoint& point):
		m_x(point.m_x), m_y(point.m_y)
	{

	}

	TPoint::TPoint(treal x, treal y):
		m_x(x), m_y(y)
	{

	}

	TPoint::~TPoint()
	{
	}

	bool TPoint::isNull()
	{
		return isZero(m_x) && isZero(m_y);
	}

	treal& TPoint::rx()
	{
		return m_x;
	}

	treal& TPoint::ry()
	{
		return m_y;
	}

	void TPoint::setX(treal x)
	{
		m_x = x;
	}

	void TPoint::setY(treal y)
	{
		m_y = y;
	}

	treal TPoint::x() const
	{
		return m_x;
	}

	treal TPoint::y() const
	{
		return m_y;
	}

	void TPoint::move(const TVector2d& v)
	{
		setX(m_x + v.x());
		setY(m_y + v.y());
	}

	TPoint& TPoint::operator/=(treal divisor)
	{
		assert(!isZero(divisor));
		m_x /= divisor;
		m_y /= divisor;
		return *this;
	}

	TPoint& TPoint::operator-=(const TPoint& point)
	{
		m_x -= point.x();
		m_y -= point.y();
		return *this;
	}

	TPoint& TPoint::operator+=(const TPoint& point)
	{
		m_x += point.x();
		m_y += point.y();
		return *this;
	}

	TPoint& TPoint::operator*=(treal factor)
	{
		m_x *= factor;
		m_y *= factor;
		return *this;
	}

	

}