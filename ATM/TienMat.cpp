#include "TienMat.h"

TienMat::TienMat()
{
	dem = Dem;
}

void TienMat::chiatien(int khoantien)
{
	int hoadon = khoantien / 20;
	dem -= hoadon; 
}

bool TienMat::tien_mat(int khoantien) const
{
	int hoadon = khoantien / 20;
	if(dem >= hoadon)
	return true;
	else
	return false;
}
