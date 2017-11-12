#ifndef _TVECTOR3D_H
#define _TVECTOR3D_H

#include "TNumeric.h"
#include "TPoint3d.h"

TGEOMETRY_BEGIN

class TVector3d
{
public:
	TVector3d();
	~TVector3d();
	TVector3d(const TVector3d& v);
	TVector3d(const TPoint3d& pt);
	TVector3d(treal x, treal y, treal z);
	TVector3d(TPoint3d& pt);
	TVector3d& operator= (const TVector3d& v);

	bool isNull() const;
	treal length() const;
	treal lengthSquared() const;
	void normalize();
	TVector3d normalized() const;
	treal x() const;
	treal y() const;
	treal z() const;
	treal& rx();
	treal& ry();
	treal& rz();
	void setX(treal x);
	void setY(treal y);
	void setZ(treal z);
	TVector3d& operator+=(const TVector3d& v);
	TVector3d& operator-=(const TVector3d& v);
	TVector3d& operator*=(treal factor);
	TVector3d& operator/=(treal factor);
	TVector3d operator+(const TVector3d& v) const;
	TVector3d operator-(const TVector3d& v) const;
	TVector3d operator*(treal factor) const;
	TVector3d operator/(treal factor) const;

	treal dot(const TVector3d& v) const;

private:
	treal m_x;
	treal m_y;
	treal m_z;
};

TGEOMETRY_END

#endif 