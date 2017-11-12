#ifndef _TSTRAIGHTLINE_H
#define _TSTRAIGHTLINE_H

#include "TNumeric.h"

TGEOMETRY_BEGIN

class TPoint;
class TVector2d;

class TStraightLine
{
public:
	TStraightLine();
	~TStraightLine();
	TStraightLine(const TStraightLine& line);
	//point and normalvector
	TStraightLine(const TPoint& pt, const TVector2d& v);
	//direction vector and point
	TStraightLine(const TVector2d& v, const TPoint& pt);
	//two point
	TStraightLine(const TPoint& pt1, const TPoint& pt2);
	//vector
	TStraightLine(const TVector2d& v);
	//equation Ax+By+C=0;
	TStraightLine(treal A, treal B, treal C);

private:
	//the straightline pass TPoint2d(m_v)and normal to m_v
	TVector2d m_v;
};


TGEOMETRY_END

#endif 