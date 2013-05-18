// PhanCung.h
#ifndef PhanCung_H
#define PhanCung_H

#include <string>
// lop mo phong ban phim cua MRT xu ly cac thao tac nhap tu ban phim
using namespace std;
class BanPhim
{
    public:
        BanPhim();
        int nhap() const;
};

// lop mo phong man hinh cua MRT xu ly cac thong bao cua MRT cho nguoi dung
class ManHinh
{
    public:
        ManHinh();
        void hienThi1( string ) const;
        void hienThi2( string ) const;
        void hienThi3( double ) const;
};

// lop mo phong khe doc the cua MRT, lay thong tin tai qua thong qua the
class KheDocThe
{
    public:
        KheDocThe();
        int laySoTaiKhoanThe();
    private:
};

// lop quan ly ket an toan cua MRT, quan ly so luong moi loai tien trong MRT
// co chuc nang tra tien cho nguoi dung
// khi nguoi dung thuc hien giao dich rut tien mat
class HopDungTienMat
{
    public:
        HopDungTienMat();
        int traTien();
    private:
};

#endif // PhanCung_H
