#ifndef CHUYENTIEN_H
#define CHUYENTIEN_H

#include "GiaoDich.h"
#include "NhatKyGiaoDichMRT.h"
class BanPhim;

class ChuyenTien: public GiaoDich, public NhatKyGiaoDichMRT
{
	public:
		ChuyenTien(int, ManHinh &, DuLieuNganHang &, BanPhim &);
		virtual void execute();
	private:
		double khoantien;
		BanPhim &banPhim;
		int hienthi1() const;
		double hienthi2() const;
		NhatKyGiaoDichMRT nhatkygiaodich;
};

#endif
