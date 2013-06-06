#ifndef TIENMAT_H
#define TIENMAT_H

class TienMat
{
	public:
		TienMat();
		
		void chiatien(int);
		
		bool tien_mat(int) const;
	private:
		static const int Dem = 500;  
		int dem;
};

#endif
