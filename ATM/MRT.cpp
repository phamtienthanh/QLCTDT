#include "MRT.h"

#include "PhanCung.h"
#include "TienMat.h"
#include "GiaoDich.h"
#include "SODU.h"
#include "RutTien.h"
#include "NapTien.h"
#include "ChuyenTien.h"
#include "DoiMK.h"
#include "MuaThe.h"
#include "ThanhToanHoaDon.h"
#include "NhatKyGiaoDichMRT.h"

#include <windows.h>
#include <iostream>

enum MenuOption { SoDu = 1, ruttien, laptien, doimk, chuyentien, muathe , thanhtoanHD, Thoat, };
MRT::MRT(): nguoidung( false ), taikhoanND(0)

{
	
}

void MRT::chay()
{
    while (true)
    {
		while(!nguoidung)
		{
			manHinh.hienThi2("\t* CHAO MUNG BAN DEN VOI HE THONG ATM *");
			cout<<endl<<endl;
			soTaiKhoanND();
		}
		thuchienGiaoDich();
		nguoidung = false;
		taikhoanND = 0;
		manHinh.hienThi2("Cam on ban da su dung dich vu cua ngan hang");
		
		system("cls");	
    }
}

void MRT::soTaiKhoanND()
{
	cout<<"\t                                      |*======================*|"<<endl;
	manHinh.hienThi1("\t* XIN QUY KHACH NHAP TEN TAI KHOAN:   |        ");
	int sotaikhoan = banPhim.nhap();
	cout<<"\t                                      |*======================*|"<<endl;
	cout<<"\n\n\n";
	cout<<"\t                                      |*======================*|"<<endl;
	manHinh.hienThi1("\t* XIN QUY KHACH NHAP MA PIN TAI KHOAN:|        ");
	int pin = banPhim.nhap();
	cout<<"\t                                      |*======================*|"<<endl;
	cout<<"\n\n";

	nhatKyGiaoDich.hdDangNhap(sotaikhoan);
	
	nguoidung = duLieuNganHang.kiemTraTK(sotaikhoan, pin);
	
	if ( nguoidung )
	{
	    taikhoanND = sotaikhoan;
	}
	else
	manHinh.hienThi2("Mat khau khong dung, vui long nhap lai" );
	
	system("cls");
}

void MRT::thuchienGiaoDich()
{
	GiaoDich *giaoDich1;
	
	bool thoat = false;
	
	while(!thoat)
	{
	 int chon = manhinhMenu();
	 
	 switch(chon)
	 {
	case SoDu:
	case ruttien:
	case laptien:
	case doimk:
	case chuyentien:
	case muathe:
	case thanhtoanHD:			
		giaoDich1 = giaoDich(chon);
		giaoDich1->execute();
		
		delete giaoDich1;
		
		break;
	case Thoat:
		manHinh.hienThi2( "\nDang thoat khoi he thong......" );
	thoat = true; 
	break;
	default:
	manHinh.hienThi2("\nQuy khach chon khong dung, vui long thu lai" );
	 break;	
	}	
  }
}

int MRT::manhinhMenu() const
{
	manHinh.hienThi2( "\nChuc Nang:" ); 
	cout<<"\n"; 
	manHinh.hienThi1( "\t1 - TRUY VAN SO DU" );  manHinh.hienThi1( "\t5 - CHUYEN TIEN" ); cout<<"\n";
	manHinh.hienThi1( "\t2 - RUT TIEN" );        manHinh.hienThi1( "\t\t6 - MUA THE" );cout<<"\n";
	manHinh.hienThi1( "\t3 - NAP TIEN" );        manHinh.hienThi1( "\t\t7 - THANH TOAN HOA DON" );cout<<"\n";
	manHinh.hienThi1( "\t4 - DOI MA PIN" );      manHinh.hienThi1( "\t\t8 -Thoat\n");
	
	
	manHinh.hienThi1( "\n\nNhap su lua chon cua ban: " );
	return banPhim.nhap();
} 


GiaoDich *MRT::giaoDich( int loai )
{
	GiaoDich *tempPtr;
	
	switch ( loai )
	{
	case SoDu:
		 tempPtr = new SODU(taikhoanND , manHinh, duLieuNganHang );
     	 break;
	case ruttien:
		 tempPtr = new RutTien( taikhoanND, manHinh, duLieuNganHang, banPhim, tienMat );
	     break;
	case laptien: 
	  tempPtr = new NapTien( taikhoanND, manHinh, duLieuNganHang, banPhim );
	  break;
	case doimk:
	  tempPtr = new DoiMK(taikhoanND, manHinh, duLieuNganHang, banPhim);	
		break;
	case chuyentien:
	  tempPtr = new ChuyenTien(taikhoanND, manHinh, duLieuNganHang, banPhim);
	  break;
	case muathe:
	  tempPtr = new MuaThe(taikhoanND, manHinh, duLieuNganHang, banPhim, tienMat);    	  
	break;
	case thanhtoanHD:
	  tempPtr = new ThanhToanHoaDon(taikhoanND, manHinh, duLieuNganHang, banPhim, tienMat);
	break;  	
    }	
	return tempPtr;
}
