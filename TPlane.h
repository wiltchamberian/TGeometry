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
	//����ϵ������:Ax+By+Cz+D=0
	TPlane(treal A, treal B, treal C, treal D);
	//copy construct
	TPlane(const TPlane& plane);
	//operator =
	const TPlane& operator= (const TPlane& plane);

	//�㵽ƽ�����
	treal distance(const TPoint3d& pt);
	//ֱ����ƽ�潻��

	//����ƽ�潻��

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