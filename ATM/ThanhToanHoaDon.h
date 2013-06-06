#ifndef THANHTOANHOADON_H
#define THANHTOANHOADON_H

#include "GiaoDich.h"

class BanPhim;
class TienMat;

class ThanhToanHoaDon: public GiaoDich
{
	public:
		ThanhToanHoaDon(int, ManHinh &, DuLieuNganHang &, BanPhim &, TienMat &);
		virtual void execute();
	private:
		int khoantien;
		BanPhim &banPhim;
		TienMat &tienMat;
		int hienthi() const;
};

#endif
