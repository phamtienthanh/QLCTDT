#include "ChuyenTien.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"

static const int huy = 0;

ChuyenTien::ChuyenTien(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 )
{
	
}

void ChuyenTien::execute()
{
	int mataikhoan;
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	double sodu = duLieuNganHang.getSodu(laySoTaiKhoan());
	mataikhoan = hienthi1();
	
	if(mataikhoan == huy)
	manHinh.hienThi2("Atm dang thoat........");
	
	else
	{
		khoantien = hienthi2();
		if(khoantien <= huy || khoantien > sodu)
		manHinh.hienThi2("Atm dang thoat.......");
		else
		{
			duLieuNganHang.rutTien(laySoTaiKhoan(), khoantien);
			duLieuNganHang.lapTien(mataikhoan, khoantien);
		    manHinh.hienThi2("\nQuy khach da chuyen dc tien "
			                   "\nSo Du con lai cua Quy Khach La: ");
			manHinh.hienThi3(duLieuNganHang.getSodu(laySoTaiKhoan()));
				manHinh.hienThi2("\n\n");
			nhatkygiaodich.hdchuyentien(mataikhoan, khoantien);
		}
	} 
}

int ChuyenTien::hienthi1() const
{
	int a = 1,  ma;
	bool kiemtra;
		ManHinh &manHinh = getmanhinh();
		DuLieuNganHang &duLieuNganHang = getdulieu();
		while(a != huy)
		{
		    manHinh.hienThi1("\nQuy khach nhap so tai khoan can chuyen tien: ");
		    ma = banPhim.nhap();
		
		    kiemtra = duLieuNganHang.kiemTraSTK(ma);
		
		if(kiemtra)
		   {
			a == huy;	
			return ma;
		   }
		}
		return huy;	
}

double ChuyenTien::hienthi2() const
{
	ManHinh &manHinh = getmanhinh();
	manHinh.hienThi1("\nQuy khach nhap so tien can chuyen(0 de thoat):  ");
	
	int khoantien1 = banPhim.nhap();
	
	return khoantien1;
}
