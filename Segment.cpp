#include "Segment.h"
#include "tnumeric.h"
#include "tgeo_algorithm.h"


TGEOMETRY_BEGIN

TSegment::TSegment() :
m_p1(TPoint()), m_p2(TPoint())
{
}


TSegment::~TSegment()
{
}

TSegment::TSegment(const TPoint& p1, const TPoint& p2) :
m_p1(p1), m_p2(p2)
{

}

TSegment::TSegment(treal x1, treal y1, treal x2, treal y2) :
m_p1(x1, y1), m_p2(x2, y2)
{
}

TSegment::TSegment(const TSegment& segment) :
m_p1(segment.p1()), m_p2(segment.p2())
{

}

treal TSegment::length() const
{
	return distance(m_p1, m_p2);
}

treal TSegment::lengthSquared() const
{
	return square(m_p1.x() - m_p2.x()) + square(m_p1.y() - m_p2.y());
}

TPoint TSegment::p1() const
{
	return m_p1;
}

TPoint TSegment::p2() const
{
	return m_p2;
}


void TSegment::setP1(const TPoint& pt)
{
	m_p1 = pt;
}

void TSegment::setP2(const TPoint& p2)
{
	m_p2 = p2;
}

TPoint& TSegment::rP1()
{
	return m_p1;
}

TPoint& TSegment::rP2()
{
	return m_p2;
}

void TSegment::move(const TVector2d& v)
{
	m_p1.move(v);
	m_p2.move(v);
}

void TSegment::rotate(const TPoint&, treal angle)
{

}

TGEOMETRY_END