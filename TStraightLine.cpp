#include "TStraightLine.h"
#include "TPoint.h"
#include "TVector3d.h"
#include "tgeo_algorithm.h"

TGEOMETRY_BEGIN

TStraightLine::TStraightLine() :m_v(1,0)
{

}

tgeometry::TStraightLine::TStraightLine(const TStraightLine& line):
m_v(line.m_v)
{

}

TStraightLine::TStraightLine(const TPoint& pt, const TVector2d& v) :
m_v(v.normalized()*v.dot(pt) / v.length())
{
}

TStraightLine::~TStraightLine()
{

}

TVector2d TStraightLine::character() const
{
	return m_v;
}

//(A,B)*(x,y)=-C
TStraightLine::TStraightLine(treal A, treal B, treal C)
{
	treal s = A*A + B*B;
	m_v.setX(-C*A/s);
	m_v.setY(-C*B / s);
}

TGEOMETRY_END