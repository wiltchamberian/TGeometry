#ifndef _TVECTOR2D_H
#define _TVECTOR2D_H

#include "TNumeric.h"

TGEOMETRY_BEGIN

class TPoint;
class TVector3d;
class TMatrix2d;

class TVector2d
{
public:
	TVector2d();
	~TVector2d();

	TVector2d(treal v1, treal v2);
	TVector2d(const TPoint& point);
	TVector2d(const TVector2d& v);
	TVector2d& operator= (const TVector2d& v);

	bool isNull() const;
	treal length() const;
	treal lengthSquared() const;
	void normalize();
	TVector2d normalized() const;
	void orthogonal();
	TVector2d orthogonaled() const;
	void setX(treal x);
	void setY(treal y);
	treal x() const;
	treal y() const;
	treal& rx();
	treal& ry();
	TVector2d& operator+=(const TVector2d& v);
	TVector2d& operator-=(const TVector2d& v);
	//TVector3d& operator*=(const TVector2d& v);
	TVector2d& operator*=(treal factor);
	TVector2d& operator/=(treal factor);
	TVector2d& operator/=(const TVector2d& v);
	TVector2d operator* (treal factor) const;
	TVector2d operator* (const TMatrix2d& m);
	TVector2d operator/ (treal factor) const;

	//dotProduct
	treal dot(const TVector2d& v) const;
	//mulitpy
	//TVector3d cross(const TVector2d& v);

	void rotate(treal angle);
	TVector2d project(const TVector2d& v);
private:
	treal m_x=0.0;
	treal m_y=0.0;
	bool m_row=false;
};

TGEOMETRY_END

#endif //_TVECTOR2D_H

