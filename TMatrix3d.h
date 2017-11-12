#ifndef _TMATRIX3D_H
#define _TMATRIX3D_H

#include <initializer_list>
#include "tnumeric.h"

namespace ty{

	class TVector3d;

	class TMatrix3d
	{
	public:
		TMatrix3d();
		~TMatrix3d();
		TMatrix3d(treal x11, treal x12, treal x13, treal x21, treal x22, treal x23, treal x31, treal x32, treal x33);
		TMatrix3d(const TVector3d& v1, const TVector3d& v2, const TVector3d& v3);
		TMatrix3d(std::initializer_list<treal> lis);

		void setX11(treal x11);
		void setX12(treal x12);
		void setX13(treal x13);
		void setX21(treal x21);
		void setX22(treal x22);
		void setX23(treal x23);
		void setX31(treal x31);
		void setX32(treal x32);
		void setX33(treal x33);
		treal x11() const;
		treal x12() const;
		treal x13() const;
		treal x21() const;
		treal x22() const;
		treal x23() const;
		treal x31() const;
		treal x32() const;
		treal x33() const;
	private:
		treal m_x[3][3];
	};

}

#endif

