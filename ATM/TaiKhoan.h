// TaiKhoan.h
#ifndef TaiKhoan_H
#define TaiKhoan_H

// lop quan ly doi tuong tai khoan ca nhan

class TaiKhoan
{
    public:
        TaiKhoan(int , int , double, double);
        bool kiemTraMaPIN( int ) const;
        bool kiemTraSoDu() const;
        void rutTien(double);
        void lapTien(double);
        int laySoTaiKhoan() const;
        int layMaPin() const;
        void doiMaPin (int);
        double getSodu() const;
        double getTotalsodu() const;
        int getMaPin() const;
    private:
		int mataikhoan; 
		int pin;
		double sodu;
		double totalsodu;
};

#endif // TaiKhosn_H
