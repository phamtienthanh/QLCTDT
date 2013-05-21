// GiaoDich.h
#ifndef GiaoDich_H
#define GiaoDich_H

// lop dinh nghia cac giao dich 

class ManHinh;
class DuLieuNganHang;

class GiaoDich
{
    public:
        GiaoDich(int, ManHinh &, DuLieuNganHang &);
        
		virtual ~GiaoDich() {}
        int laySoTaiKhoan() const;
        ManHinh &getmanhinh() const;
        DuLieuNganHang &getdulieu() const;
        
        virtual void execute() = 0;
    private:
		int mataikhoan;
		DuLieuNganHang &dulieu;
		ManHinh &manhinh;
};

#endif // GiaoDich_H
