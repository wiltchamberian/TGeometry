//2d-matrix class,provide some basic operation
//2维矩阵类，提供2维矩阵的基本操作

#ifndef _TMATRIX_H
#define _TMATRIX_H

#include "TNumeric.h"

TGEOMETRY_BEGIN

class TVector2d;

class TMatrix2d
{
public:
	friend class TVector2d;
	TMatrix2d();
	~TMatrix2d();
	TMatrix2d(treal x11, treal x12, treal x21, treal x22);

	TMatrix2d operator* (const TMatrix2d& m);

	TVector2d operator* (const TVector2d& v);

	void setX11(treal x11);
	void setX12(treal x12);
	void setX21(treal x21);
	void setX22(treal x22);
	treal x11() const;
	treal x12() const;
	treal x21() const;
	treal x22() const;
	static TMatrix2d eye();
private:
	treal m_x11;
	treal m_x12;
	treal m_x21;
	treal m_x22;
};

TGEOMETRY_END

#endif //_TMATRIX_H

