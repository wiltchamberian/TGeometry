#ifndef _TPOINT_H
#define _TPOINT_H

#include "tnumeric.h"

namespace ty{

	class TVector2d;

	class TPoint
	{
	public:
		TPoint();
		~TPoint();

		TPoint(const TPoint& point);
		TPoint(treal x, treal y);

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

		void move(const TVector2d& v);
	private:
		treal m_x;
		treal m_y;

	};

}//namespace ty

#endif// _TPOINT_H

