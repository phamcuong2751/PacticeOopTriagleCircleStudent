#pragma once
#include "TamGiac.h"
class MangTamGiac
{
private:
	TamGiac mangTamGiac[100];
public:
	void NhapMangTamGiac(int SLTamGiac);
	void XuatMangTamGiac(int SLTamGiac);
	void TimTamGiacChuViNhoNhat(int SLGiamGiac);
	void TimTamGiacDienTichLonNhat(int SLTamGiac);
	void SapXepTangDanTheoChuVi(int SlTamGiac);
	void XuatChuVi(int SLTamGiac);
	void XuatDienTich(int SLTamGiac);

};

