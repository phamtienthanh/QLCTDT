#include "Tien.h"
#include "PhanCung.h"
#include "DuLieuNganHang.h"

SODU::SODU(int Mataikhoan, ManHinh &Manhinh, DuLieuNganHang &Dulieu)
: GiaoDich(Mataikhoan, Manhinh, Dulieu)
{
	
}

void SODU::excute()
{
	DuLieuNganHang &duLieuNganHang = getdulieu();
	ManHinh &manHinh = getmanhinh();
	
	double sodu = duLieuNganHang.getSodu(laySoTaiKhoan());
	double totalsodu = duLieuNganHang.getTotalsodu(laySoTaiKhoan());
	
	manHinh.hienThi2("Thong tin so du: ");
	manHinh.hienThi1("-so du: ");
	manHinh.hienThi3(sodu);
	manHinh.hienThi1("-tien trong may: ");
	manHinh.hienThi3(totalsodu);
	manHinh.hienThi2("");
}
