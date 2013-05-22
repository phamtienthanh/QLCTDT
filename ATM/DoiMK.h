#ifndef DOIMK_H
#define DOIMK_H

#include "GiaoDich.h"

class BanPhim;

class DoiMK: public GiaoDich
{
	public:
		DoiMK(int, ManHinh &, DuLieuNganHang &, BanPhim &);
		virtual void execute();
	private:
		int matkhau;
		BanPhim &banPhim;
		int hienthi() const;
};

#endif
