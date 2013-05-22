// DuLieuNganHang.h
#ifndef DuLieuNganHang_H
#define DuLieuNganHang_H

#include <vector>
using namespace std;

#include "TaiKhoan.h"

// lop quan ly du lieu ngan hang
// viec tiem kiem tai khoan ca nhan can thuc hien thong qua lop nay
// luu tru & tim kiem cac giao dich doi voi tai khoan cung su dung lop nay

class DuLieuNganHang
{
    public:
        DuLieuNganHang();
        bool kiemTraTK(int, int);
        bool kiemTraSoDu();
        bool kiemTraSTK(int);
        bool kiemTraMP(int);
        void doiMK(int , int);
        void rutTien(int, double);
        void lapTien(int, double);
        double getSodu(int);
        double getTotalsodu(int);
    private:
		vector< TaiKhoan > taikhoan;// vecor du lieu ngan hang
		
		TaiKhoan * getTaikhoan( int );// con tro tro den doi tuong tai khoan
};

#endif // DuLieuNganHang_H
