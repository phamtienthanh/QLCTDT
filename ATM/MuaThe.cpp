#include "RutTien.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"
#include "TienMat.h"
#include "MuaThe.h"

static const int huy = 6;

MuaThe::MuaThe(int Mataikhoan, ManHinh &manHinh1, DuLieuNganHang &duLieuNganHang1, BanPhim &banPhim1, TienMat &tienMat1)
: GiaoDich(Mataikhoan, manHinh1, duLieuNganHang1), 
banPhim( banPhim1 ), tienMat(tienMat1)
{
	
}

void MuaThe::execute()
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
				
				manHinh.hienThi2("\nQuy Khach Da Mua the Thanh Cong" 
				                  "\nSo Du con lai cua Quy Khach La: ");
				manHinh.hienThi3(duLieuNganHang.getSodu(laySoTaiKhoan()));
				manHinh.hienThi2("\n\n");
					}
				else
				manHinh.hienThi2("\nTai khoan cua quy khach ko du "
				                  "\n\n Quy Khach Vui long chon menh gia the nho hon" );
					}
	    }
	else 
	{
	manHinh.hienThi2( "\nHuy Mua The" );
	huygiaodich = true; 
	}
	}while(!tienmat && !huygiaodich);
}

int MuaThe::hienthi() const
{
	int chon = 0;
	ManHinh &manHinh = getmanhinh();
	
	int MenhGiaThe[] = {0 , 5, 10, 20, 50, 100};
	
	while(chon == 0)
	{
	manHinh.hienThi2( "\nLua chon menh gia the:" );
	manHinh.hienThi2( "1 - $5" );
	manHinh.hienThi2( "2 - $10" );
	manHinh.hienThi2( "3 - $20" );
	manHinh.hienThi2( "4 - $50" );
	manHinh.hienThi2( "5 - $100" );
    manHinh.hienThi2( "6 - Huy" );
	manHinh.hienThi1( "\nQuy Khach chon Menh Gia the:  " );	
	
	int a = banPhim.nhap();

	switch ( a )
	{
	case 1: 
	case 2: 
	case 3: 
	case 4:
	case 5:
	chon = MenhGiaThe[a]; 
	break;
	case huy: 
	chon = huy; 
	break;
	default:
	manHinh.hienThi2("\nQuy Khach chon khong dung. Vui long thu lai" );
	} 
  } 
	return chon; 
}
