#ifndef RUTTIEN_H
#define RUTTIEN_H

#include "GiaoDich.h"
#include "NhatKyGiaoDichMRT.h"
class BanPhim;
class TienMat;

class RutTien: public GiaoDich,public NhatKyGiaoDichMRT
{
	public:
		RutTien(int, ManHinh &, DuLieuNganHang &, BanPhim &, TienMat &);
		virtual void execute();
	private:
		int khoantien;
		BanPhim &banPhim;
		TienMat &tienMat;
		int hienthi() const;
		NhatKyGiaoDichMRT nhatkygiaodich;
};

#endif
