#include "RutTien.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"
#include "TienMat.h"
#include "NhatKyGiaoDichMRT.h"
static const int huy = 6;

RutTien::RutTien(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1, TienMat &tienMat1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 ), tienMat(tienMat1)
{
	
}

void RutTien::execute()
{
	bool tienmat = false;
	bool huygiaodich = false;
	
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	do
	{
		int luachon = hienthi();
		
		if(luachon != huy)
		{
			khoantien = luachon;
			double sodu = duLieuNganHang.getSodu(laySoTaiKhoan());
		 if(khoantien < sodu)
		 {
				if(tienMat.tien_mat(khoantien))
				{
				duLieuNganHang.rutTien(laySoTaiKhoan(), khoantien);
				
				tienMat.chiatien(khoantien);
				tienmat = true;
				nhatkygiaodich.hdrutTien(luachon);
				
				manHinh.hienThi2("\nQuy khach nhan tien o khe nhan tien. "
									"\nSo Du con lai cua Quy Khach La: ");
				manHinh.hienThi3(duLieuNganHang.getSodu(laySoTaiKhoan()));
				manHinh.hienThi2("\n\n" );
					}
				else
				manHinh.hienThi2("\nTai khoan cua quy khach ko du "
				                   "\n\n Quy khach rut so tien nho hon" );
					}
	    }
	else 
	{
	manHinh.hienThi2( "\nHuy Rut Tien" );
	huygiaodich = true; 
	}
	}while(!tienmat && !huygiaodich);
}

int RutTien::hienthi() const
{
	int chon = 0;
	ManHinh &manHinh = getmanhinh();
	
	int khoanrut[] = {0 , 20, 40, 60, 100, 200};
	
	while(chon == 0)
	{
	manHinh.hienThi2( "\nlua chon:" );
	manHinh.hienThi2( "1 - $20" );
	manHinh.hienThi2( "2 - $40" );
	manHinh.hienThi2( "3 - $60" );
	manHinh.hienThi2( "4 - $100" );
	manHinh.hienThi2( "5 - $200" );
    manHinh.hienThi2( "6 - huy giao dich" );
	manHinh.hienThi2( "\nchon so tien muon rut (1-6): " );	
	
	int a = banPhim.nhap();

	switch ( a )
	{
	case 1: 
	case 2: 
	case 3: 
	case 4:
	case 5:
	chon = khoanrut[a]; 
	break;
	case huy: 
	chon = huy; 
	break;
	default:
	manHinh.hienThi2("\nban chon khong dung. vui long thu lai" );
	} 
  } 
	return chon; 
}
