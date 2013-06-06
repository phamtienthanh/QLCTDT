// HoaDon.h
#ifndef HoaDon_H
#define HoaDon_H

#include "GiaoDich.h"
#include "NhatKyGiaoDichMRT.h"

class BanPhim;
// lop quan ly viec in ra hoa don doi voi cac giao dich
// co the gia lap bang cach in truc tiep hoa don ra man hinh may tinh

class HoaDon: public GiaoDich
{
    public:
        HoaDon(ManHinh &, BanPhim & , DuLieuNganHang &);
    private:
		ManHinh &manhinh;
		BanPhim &banphim;
		DuLieuNganHang &dulieunganhang;
		void inHoaDon();
};

#endif // HoaDon_H
