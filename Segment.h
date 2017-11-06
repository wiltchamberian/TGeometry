#ifndef _SEGMENT_H
#define _SEGMENT_H

#include "TVector2d.h"
#include "TPoint.h"

namespace ty{

//ֱ��
class TLine;
//����
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
	//p1���䣬���߶���ԭֱ�����쳤����������cof
	void scale(treal cof);
	//p1���䣬���򲻱䣬�޸ĳ��ȵ�
	void scaleTo(treal length);
	//equal to scaleTo(1.)
	void normalize();
	//����p1,p2
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

