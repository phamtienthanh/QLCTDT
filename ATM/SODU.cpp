#include "SODU.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"

SODU::SODU(int Mataikhoan, ManHinh &Manhinh, DuLieuNganHang &Dulieu)
: GiaoDich(Mataikhoan, Manhinh, Dulieu)
{
	
}

void SODU::execute()
{
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	double sodu = duLieuNganHang.getSodu(laySoTaiKhoan());
	double totalsodu = duLieuNganHang.getTotalsodu(laySoTaiKhoan());
	
	manHinh.hienThi2("\nThong Tin So Du: ");
	manHinh.hienThi1("-So Du: ");
	manHinh.hienThi3(sodu);
	manHinh.hienThi1("\n-So Tien Trong May: ");
	manHinh.hienThi3(totalsodu);
	manHinh.hienThi2("");
}
