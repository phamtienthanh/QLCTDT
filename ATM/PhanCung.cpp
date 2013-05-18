#include <iostream>
#include <iomanip>

using namespace std;

#include "PhanCung.h"

BanPhim::BanPhim()
{
	
}

int BanPhim::nhap() const
{
	int input;
	cin>>input;
	return input;
}

ManHinh::ManHinh()
{
	
}
void ManHinh::hienThi1( string a) const
{
	cout<<a;
}

void ManHinh::hienThi2( string a) const
{
	cout<<a<<endl;
}

void ManHinh::hienThi3( double khoantien ) const
{
	cout<<fixed<<setprecision( 2 )<<"$"<<khoantien;
}
