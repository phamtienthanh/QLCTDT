#include "GiaoDich.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"

GiaoDich::GiaoDich(int Mataikhoan, ManHinh & Manhinh, DuLieuNganHang & Dulieu)
: mataikhoan(Mataikhoan), manhinh(Manhinh),dulieu(Dulieu)
{
	
}

int GiaoDich::laySoTaiKhoan() const
{
	return mataikhoan;
}

ManHinh &GiaoDich::getmanhinh() const
{
	return manhinh;
}

DuLieuNganHang &GiaoDich::getdulieu() const
{
	return dulieu;
}
