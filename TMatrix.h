//2d-matrix class,provide some basic operation
//2维矩阵类，提供2维矩阵的基本操作

#ifndef _TMATRIX_H
#define _TMATRIX_H

#include "tnumeric.h"

namespace ty{

class TVector2d;

class TMatrix
{
public:
	friend class TVector2d;
	TMatrix();
	~TMatrix();
	TMatrix(treal x11, treal x12, treal x21, treal x22);

	TMatrix operator* (const TMatrix& m);

	TVector2d operator* (const TVector2d& v);

	void setX11(treal x11);
	void setX12(treal x12);
	void setX21(treal x21);
	void setX22(treal x22);
	treal x11() const;
	treal x12() const;
	treal x21() const;
	treal x22() const;
private:
	treal m_x11;
	treal m_x12;
	treal m_x21;
	treal m_x22;
};

}// namespace ty

#endif //_TMATRIX_H

