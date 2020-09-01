#pragma once
#include "SinhVien.h"
class LopHoc
{
private:
	SinhVien mangSinhVien[100];
public:
	void NhapMangSinhVien(int SLSinhVien);
	void XuatMangSinhVien(int SLSinhVien);
	int SoSinhVienDuoiTB(int SLSinhVien);
	int SoSinhVienKha(int SLSinhVien);
	void SapXepTangDanTheoDiemTB(int SLSinhVien);
};
