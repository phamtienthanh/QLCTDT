#include "DuLieuNganHang.h"

DuLieuNganHang::DuLieuNganHang()
{
	TaiKhoan taikhoan1(110202, 12345, 1000.0, 1200.0);
	TaiKhoan taikhoan2(110203, 54321, 200.0, 500.0);
	TaiKhoan taikhoan3(110205, 56789, 300.0, 1000.0);
	
	taikhoan.push_back( taikhoan3 );
	taikhoan.push_back( taikhoan1 );
	taikhoan.push_back( taikhoan2 );
}

TaiKhoan * DuLieuNganHang::getTaikhoan(int mataikhoan)
{
	for ( size_t i = 0; i < taikhoan.size(); i++ )
	{
	if ( taikhoan[i].laySoTaiKhoan() == mataikhoan )
	return &taikhoan[i];
	}
	
	return 0;
}

bool DuLieuNganHang::kiemTraTK(int Mataikhoan, int Pin)
{
	TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
	
	if(taikhoanA != 0)
	return taikhoanA->kiemTraMaPIN(Pin);
	
	else 
	return false;
}

bool DuLieuNganHang::kiemTraSTK(int a)
{
	for( size_t i = 0; i < taikhoan.size(); i++ )
	{
		if( taikhoan[i].laySoTaiKhoan()  == a)
		   return true;
		else
		   return false;
	}
}
bool DuLieuNganHang::kiemTraMP(int a)
{
	for( size_t i = 0; i < taikhoan.size(); i++ )
	{
		if( taikhoan[i].layMaPin()  == a)
		   return true;
		else
		   return false;
	}
}

void DuLieuNganHang::doiMK(int Mataikhoan, int a )
{
    TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
    taikhoanA->doiMaPin(a);
}
double DuLieuNganHang::getSodu(int Mataikhoan)
{
	TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
	return  taikhoanA->getSodu();
}

double DuLieuNganHang::getTotalsodu(int Mataikhoan)
{
	TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
	return  taikhoanA->getTotalsodu();
}

void DuLieuNganHang::rutTien(int Mataikhoan, double khoantien)
{
	TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
	taikhoanA->rutTien(khoantien);
}

void DuLieuNganHang::lapTien(int Mataikhoan, double khoantien)
{
	TaiKhoan * const taikhoanA = getTaikhoan( Mataikhoan );
	taikhoanA->lapTien(khoantien);
}

