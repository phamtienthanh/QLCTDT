#include "NapTien.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"


static const int huy = 0;

NapTien::NapTien(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 )
{
	
}

void NapTien::execute()
{
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	khoantien = hienthi();
	
	if(khoantien != huy)
	{
		duLieuNganHang.lapTien(laySoTaiKhoan(), khoantien);
		manHinh.hienThi2("Tai khoan cua Quy Khach Da duoc Lap Tien"
						"\nSo Du con lai cua Quy Khach La: ");
				manHinh.hienThi3(duLieuNganHang.getSodu(laySoTaiKhoan()));
				manHinh.hienThi2("\n\n");
				
				nhatkygiaodich.hdnapTien(khoantien);		
		}
	else
	   manHinh.hienThi2("Atm dang thoat ");
}

int NapTien::hienthi() const
{	
	ManHinh &manHinh = getmanhinh();
	
	manHinh.hienThi1("\nNhap so Tien Quy Khach Muon Nap(0 de thoat): ");
	
	int tien = banPhim.nhap();
	
	if(tien == huy)
	return huy;
	else
	return tien;	
}
