#ifndef MUATHE_H
#define MUATHE_H

#include "GiaoDich.h"

class BanPhim;
class TienMat;

class MuaThe: public GiaoDich
{
	public:
		MuaThe(int, ManHinh &, DuLieuNganHang &, BanPhim &, TienMat &);
		virtual void execute();
	private:
		int khoantien;
		BanPhim &banPhim;
		TienMat &tienMat;
		int hienthi() const;
};

#endif
