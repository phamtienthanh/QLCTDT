// Tien.h
#ifndef Tien_H
#define Tien_H

#include "GiaoDich.h"
// lop nay dinh nghia doi tuong Tien & cac toan tu nap chong lien quan
// cac ham o day chi la goi y, can khai bao va dinh nghia chinh xac hon
// can dinh nghia day du cac ham khoi tao phuc vu cho chuyen doi kieu tu dong
class SODU : public GiaoDich
{
	public:
		RutTien(int, ManHinh&, DuLieuNganHang &);
		virtual void execute();
};

class BanPhim;
class 
class RUTTIEN: public GiaoDich
{
	
}
class Tien
{
    public:
        Tien();
        friend const Tien& operator+ ();
        friend const Tien& operator- ();
        friend const Tien& operator* ();
        friend const Tien& operator/ ();
        friend const int operator/ ();
    private:
};

#endif // Tien_H
