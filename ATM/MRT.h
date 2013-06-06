// MRT.h
#ifndef MRT_H
#define MRT_H
#include "PhanCung.h"
#include "DuLieuNganHang.h"
#include "TienMat.h"
#include "NhatKyGiaoDichMRT.h"

// lop dinh nghia may rut tien
// ham duy nhat nen de public la ham chay()
// tat cac ca ham khac nen la ham tien ich phuc vu cho ham chay()
class GiaoDich;
//class NhatKyGiaoDichMRT;

class MRT:public NhatKyGiaoDichMRT
{
    public:
        MRT();  // ham khoi tao mac dinh
        void chay();
    private:
        bool nguoidung;
		int  taikhoanND;
		ManHinh manHinh;
		BanPhim banPhim;
		TienMat tienMat;
		DuLieuNganHang duLieuNganHang;
		
		void soTaiKhoanND();
		void thuchienGiaoDich();
		int manhinhMenu() const;
		
		GiaoDich *giaoDich( int );
		NhatKyGiaoDichMRT nhatKyGiaoDich;
		 
};

#endif // MRT_H
