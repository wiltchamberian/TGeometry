#ifndef _TPOINT3D_H
#define _TPOINT3D_H

#include "TNumeric.h"

TGEOMETRY_BEGIN

class TVector3d;

class TPoint3d
{
public:
	TPoint3d();
	~TPoint3d();
	TPoint3d(treal x, treal y, treal z);
	TPoint3d(const TPoint3d& pt);
	TPoint3d(const TVector3d& v);

	TPoint3d& operator= (const TPoint3d& pt);

	bool isNull();
	treal& rx();
	treal& ry();
	treal& rz();
	void setX(treal x);
	void setY(treal y);
	void setZ(treal z);
	treal x() const;
	treal y() const;
	treal z() const;

	TPoint3d& operator*=(treal factor);
	TPoint3d& operator+=(const TPoint3d& pt);
	TPoint3d& operator-=(const TPoint3d& pt);
	TPoint3d& operator/= (treal divisor);
	TPoint3d operator+(const TPoint3d pt) const;
	TPoint3d operator-(const TPoint3d pt) const;
	TPoint3d operator*(treal factor) const;
	TPoint3d operator/(treal factor) const;

	void move(const TVector3d& v);
private:
	treal m_x;
	treal m_y;
	treal m_z;
};

TGEOMETRY_END

#endif