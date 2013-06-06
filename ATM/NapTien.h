#ifndef NAPTIEN_H
#define NAPTIEN_H

#include "GiaoDich.h"
#include "NhatKyGiaoDichMRT.h"

class BanPhim;

class NapTien : public GiaoDich, public NhatKyGiaoDichMRT
{
	public:
		NapTien(int, ManHinh &, DuLieuNganHang &, BanPhim &);
		virtual void execute();
	private:
		int khoantien;
		BanPhim &banPhim;
		int hienthi() const;
		NhatKyGiaoDichMRT nhatkygiaodich;
};

#endif
