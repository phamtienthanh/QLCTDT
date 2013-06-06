#include "ThanhToanHoaDon.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"
#include "TienMat.h"

static const int huy = 0;

ThanhToanHoaDon::ThanhToanHoaDon(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1, TienMat &tienMat1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 ), tienMat(tienMat1)
{
	
}

void ThanhToanHoaDon::execute()
{
	bool tienmat = false;
	bool huygiaodich = false;
	
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	do
	{
		int tongno = hienthi();
		
		if(tongno != huy)
		{
			khoantien = tongno;
			double sodu = duLieuNganHang.getSodu(laySoTaiKhoan());
		 if(khoantien < sodu)
		 {
				if(tienMat.tien_mat(khoantien))
				{
				duLieuNganHang.rutTien(laySoTaiKhoan(), khoantien);
				
				tienMat.chiatien(khoantien);
				tienmat = true;
				
				manHinh.hienThi2("\nQuy khach da thanh toan xong. cam on quy khach" 
				                  "\nSo Du con lai cua Quy Khach La: ");
				manHinh.hienThi3(duLieuNganHang.getSodu(laySoTaiKhoan()));
				manHinh.hienThi2("\n\n");
					}
				else
				manHinh.hienThi2("\nTai khoan cua quy khach ko du "
				                 "\n\n Quy khach vui long nap them tien" );
					}
	    }
	else 
	{
	manHinh.hienThi2( "\nHuy Rut Tien" );
	huygiaodich = true; 
	}
	}while(!tienmat && !huygiaodich);
}

int ThanhToanHoaDon::hienthi() const
{
	double tien1, tien2, tien3;
	double tong;
	ManHinh &manHinh = getmanhinh();
	
	manHinh.hienThi1("\nQuy Khach nhap tien Dien: ");
	tien1 = banPhim.nhap();
	manHinh.hienThi1("\nQuy Khach nhap tien Nuoc: ");
	tien2 = banPhim.nhap();
	manHinh.hienThi1("\nQuy Khach nhap tien Dien Thoai: ");
	tien3 = banPhim.nhap();
	
	tong = tien1 + tien2 + tien3;
	
	return tong;  
}
