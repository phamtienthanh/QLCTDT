#include "NhatKyGiaoDichMRT.h"
#include <fstream>
#include <iostream>
#include <ctime>
#include <windows.h>
NhatKyGiaoDichMRT::NhatKyGiaoDichMRT()
{
	
}

void NhatKyGiaoDichMRT::hdDangNhap(int a)
{
	 
	 ofstream hoadon("nhatky.txt",ios::out);
     hoadon<<"\t\t\tHE THONG ATM WORLD BANK\n"<<endl;
     hoadon<<"\t\t\tSO KHACH HANG: "<<a<<endl;
     hoadon<<"\n"<<endl;
     hoadon.close();
}

void NhatKyGiaoDichMRT::hdrutTien(int rut)
{
     ofstream hoadon("nhatky.txt", ios::out | ios::app);
     hoadon<<".Rut tien: "<<rut<<endl;
     hoadon<<"\n"<<endl;
     hoadon.close();	
			
}

void NhatKyGiaoDichMRT::hdchuyentien(int chuyen, double luongtien)
{
	 fstream hoadon;
     hoadon.open("nhatky.txt",ios::out | ios::app);
     hoadon<<".Chuyen tien toi so tai khoan: "<<chuyen<<endl;
     hoadon<<"            So tien da chuyen: "<<luongtien<<endl;
     hoadon<<"\n"<<endl;
     hoadon.close();	
}

void NhatKyGiaoDichMRT::hdnapTien(int nap)
{
     ofstream hoadon("nhatky.txt", ios::out | ios::app);
     hoadon<<".Nap tien: "<<nap<<endl;
     hoadon<<"\n"<<endl;
     hoadon.close();	
			
}

