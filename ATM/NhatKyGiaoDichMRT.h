// NhatKyGiaoDichMRT.h
#ifndef NhatKyGiaoDichMRT_H
#define NhatKyGiaoDichMRT_H
#include"PhanCung.h"
//#include"DuLieuNganHang.h"
// lop nay dam nhiem viec luu tru tat ca cac giao dich lien quan den tien
// vi du: rut tien, chuyen khoan, thanh toan hoa don, ...

class NhatKyGiaoDichMRT
{
    public:
        NhatKyGiaoDichMRT();
        void hdDangNhap(int );
		void hdrutTien(int );
		void hdchuyentien(int ,double );
		void hdnapTien(int);
	private:
};

#endif // NhatKyGiaoDichMRT_H
