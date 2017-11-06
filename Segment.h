#ifndef _SEGMENT_H
#define _SEGMENT_H

#include "TVector2d.h"
#include "TPoint.h"

namespace ty{

//直线
class TLine;
//射线
class TRay;

class TSegment
{
public:
	TSegment();
	~TSegment();

	TSegment(const TPoint& p1, const TPoint& p2);
	TSegment(treal x1, treal y1, treal x2, treal y2);
	TSegment(const TSegment& segment);

	treal length() const;
	treal lengthSquared() const;
	TPoint p1() const;
	TPoint p2() const;
	void setP1(const TPoint& pt);
	void setP2(const TPoint& p2);
	TPoint& rP1();
	TPoint& rP2();

	void move(const TVector2d& v);
	void rotate(const TPoint&, treal angle);
	//p1不变，将线段在原直线上伸长或缩短因子cof
	void scale(treal cof);
	//p1不变，方向不变，修改长度到
	void scaleTo(treal length);
	//equal to scaleTo(1.)
	void normalize();
	//交换p1,p2
	void inversion();

	//get line
	TLine getLine();

	TRay getRay();
private:
	TPoint m_p1;
	TPoint m_p2;
};

}

#endif //_SEGMENT_H

