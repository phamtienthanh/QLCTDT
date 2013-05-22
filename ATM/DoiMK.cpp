#include "DoiMK.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"
#include <iostream>

using namespace std;
static const int huy = 0;

DoiMK::DoiMK(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 )
{
	
}
void DoiMK::execute()
{
	int mk;
    DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	mk = hienthi();
	
	if(mk == huy)
	manHinh.hienThi2("Atm dang thoat.......");
	else
	{
		duLieuNganHang.doiMK(laySoTaiKhoan(), mk);
		manHinh.hienThi2("Ma Pin Cua Quy Khach Da Duoc Doi" );
		manHinh.hienThi2("Mat khau Moi Cua Quy Khach la: ");
		cout<<mk;
		}
}

int DoiMK::hienthi() const
{
	int mk1, mk2, mk;
	ManHinh &manHinh = getmanhinh();
	DuLieuNganHang &duLieuNganHang = getdulieu();
	
	manHinh.hienThi1("\nQuy khach Nhap lai Ma Pin cu: ");
	mk = banPhim.nhap();
	
	if(duLieuNganHang.kiemTraMP(mk))
	{
	   manHinh.hienThi1("\nQuy khach Nhap Ma Pin moi(0 de thoat): ");
	   mk1 = banPhim.nhap();	
	   
	   manHinh.hienThi1("\nQuy Khach Nhap lai Ma Pin moi: ");
	   mk2 = banPhim.nhap();
	   
	   if(mk1 == mk2 && mk1 > 0)
	    return mk1;
	   else
	    return huy;
    }
    else
      return huy;
}
