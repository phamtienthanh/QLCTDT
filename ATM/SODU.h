#ifndef SODU_H
#define SODU_H

#include "GiaoDich.h"

class SODU : public GiaoDich
{
	public:
		SODU(int, ManHinh&, DuLieuNganHang &);
		virtual void execute();
};

#endif
