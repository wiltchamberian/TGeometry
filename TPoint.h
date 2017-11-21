#ifndef _TPOINT_H
#define _TPOINT_H

#include "tnumeric.h"

TGEOMETRY_BEGIN

class TVector2d;

class TPoint
{
public:
	TPoint();
	~TPoint();

	TPoint(const TPoint& point);
	TPoint(treal x, treal y);
	TPoint(const TVector2d& v);

	TPoint& operator=(const TPoint& pt);

	bool isNull();
	treal& rx();
	treal& ry();
	void setX(treal x);
	void setY(treal y);
	treal x() const;
	treal y() const;
	TPoint& operator*=(treal factor);
	TPoint& operator+=(const TPoint& point);
	TPoint& operator-=(const TPoint& point);
	TPoint& operator/=(treal divisor);
	TPoint operator*(treal factor) const;
	TPoint operator+(const TPoint& pt) const;
	TPoint operator-(const TPoint& pt) const;
	TPoint operator/(treal factor) const;

	void move(const TVector2d& v);

private:
	treal m_x;
	treal m_y;

};

TGEOMETRY_END

#endif// _TPOINT_H

