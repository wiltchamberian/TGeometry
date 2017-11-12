#include "TStraightLine.h"
#include "TPoint.h"
#include "TVector2d.h"

tgeometry::TStraightLine::TStraightLine()
{

}

tgeometry::TStraightLine::TStraightLine(const TStraightLine& line):
m_v(line.m_v)
{

}

tgeometry::TStraightLine::TStraightLine(const TPoint& pt, const TVector2d& v):
m_v(v.normalized()*v.dot(pt) / v.length())
{
}

tgeometry::TStraightLine::~TStraightLine()
{

}
