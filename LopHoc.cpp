#include "LopHoc.h"
void LopHoc::NhapMangSinhVien(int SLSinhVien){
	for (int i = 0; i < SLSinhVien; i++) {
		cout << "\n\nNhap sinh vien thu " << i << endl;
		mangSinhVien[i].NhapSinhVien();
	}
}
void LopHoc::XuatMangSinhVien(int SLSinhVien){
	for(int i = 0; i < SLSinhVien; i++) {
		cout << "\nSinh vien thu " << i << ": ";
		mangSinhVien[i].XuatSinhVien();
	}
}
int LopHoc::SoSinhVienDuoiTB(int SLSinhVien) {
	int DemSVDuoiTB = 0;
	for (int i = 0; i < SLSinhVien; i++) {
		if (mangSinhVien[i].TinhDiemTrungBinh() < 5)
		{
			DemSVDuoiTB++;
		}
	}
	return DemSVDuoiTB;
}
int LopHoc::SoSinhVienKha(int SLSinhVien) {
	int DemSVKha = 0;
	for (int i = 0; i < SLSinhVien; i++) {
		if (mangSinhVien[i].XepLoai() == "Kha")
		{
			DemSVKha++;
		}
	}
	return DemSVKha;
}
void LopHoc::SapXepTangDanTheoDiemTB(int SLSinhVien) {
	for (int i = 0; i < SLSinhVien - 1; i++)
	{
		for (int j = i + 1; j < SLSinhVien; j++)
		{
			if (mangSinhVien[i].TinhDiemTrungBinh() > mangSinhVien[j].TinhDiemTrungBinh())
			{
				SinhVien temp = mangSinhVien[i];
				mangSinhVien[i] = mangSinhVien[j];
				mangSinhVien[j] = temp;
			}
		}
	}
}