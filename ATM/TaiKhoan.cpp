#include "TaiKhoan.h"

TaiKhoan::TaiKhoan(int mataikhoan1, int pin1, double sodu1, double totalsodu1)
: mataikhoan(mataikhoan1), pin(pin1), sodu(sodu1), totalsodu(totalsodu1)
{
	
}

bool TaiKhoan::kiemTraMaPIN( int Pin) const
{
	if(Pin == pin)
	 return true;
	else
	 return false;
}

double TaiKhoan::getSodu() const
{
	return sodu;
}

double TaiKhoan::getTotalsodu() const
{
	return totalsodu;
}

int TaiKhoan::getMaPin() const
{
	return pin;
}
void TaiKhoan::lapTien(double khoantien)
{
	sodu += khoantien;
}

void TaiKhoan::rutTien(double khoantien)
{
	sodu -= khoantien;
	totalsodu -= khoantien;
}

int TaiKhoan::laySoTaiKhoan() const
{
	return mataikhoan;
}

void TaiKhoan::doiMaPin(int a)
{
	pin = a;
}

int TaiKhoan::layMaPin() const
{
	return pin;
}

bool TaiKhoan::kiemTraSoDu() const
{
	return true;
}
