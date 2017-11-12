#ifndef _TPLANE_H
#define _TPLANE_H

#include "TNumeric.h"
#include "TPoint3d.h"
#include "TVector3d.h"

TGEOMETRY_BEGIN

class TPlane
{
public:
	TPlane();
	~TPlane();
	//point and normalvector
	TPlane(const TPoint3d& pt, const TVector3d& v);
	//three points
	TPlane(const TPoint3d& pt, const TPoint3d& pt2, const TPoint3d& pt3);
	//方程系数构建:Ax+By+Cz+D=0
	TPlane(treal A, treal B, treal C, treal D);
	//copy construct
	TPlane(const TPlane& plane);
	//operator =
	const TPlane& operator= (const TPlane& plane);

	//点到平面距离
	treal distance(const TPoint3d& pt);
	//直线与平面交点

	//两个平面交线

	//A^2+B^2+C^2=1;
	treal paraA();
	treal paraB();
	treal paraC();
	treal paraD();

	TVector3d normalVector();
private:
	TVector3d m_v;
};


TGEOMETRY_END

#endif 