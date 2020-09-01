#include "MangTamGiac.h"
void MangTamGiac::NhapMangTamGiac(int SLTamGiac)
{
	for (int i = 0; i < SLTamGiac; i++) {
		cout << "\n\nNhap tam giac thu " << i << ": \n";
		mangTamGiac[i].NhapTamGiac();
	}
}
void MangTamGiac::XuatMangTamGiac(int SLTamGiac) {
	for (int i = 0; i < SLTamGiac; i++)
	{
		cout << "\n3 diem cua tam giac thu " << i << ": ";
		mangTamGiac[i].XuatTamGiac();
	}
}
void MangTamGiac::TimTamGiacChuViNhoNhat(int SLGiamGiac)
{
	int min = mangTamGiac[0].TinhChuVi();
	int index = 0;
	for (int i = 0; i < SLGiamGiac; i++)
	{
		if (mangTamGiac[i].TinhChuVi() <= min)
		{
			min = mangTamGiac[i].TinhChuVi();
			index = i;
		}
	}
	cout << "\nTam giac co chu vi nho nhat la: ";
	mangTamGiac[index].XuatTamGiac();
	cout << " o vi tri thu " << index;
}
void MangTamGiac::TimTamGiacDienTichLonNhat(int SLTamGiac)
{
	int max = 0;
	int index = 0;
	for (int i = 0; i < SLTamGiac; i++)
	{
		if (mangTamGiac[i].TinhDienTich() >= max)
		{
			max = mangTamGiac[i].TinhDienTich();
			index = i;
		}
	}
	cout << "\nTam giac co dien tich lon nhat la: ";
	mangTamGiac[index].XuatTamGiac();
	cout << " o vi tri thu " << index;
}

void MangTamGiac::SapXepTangDanTheoChuVi(int SlTamGiac) {
	for (int i = 0; i < SlTamGiac - 1; i++) {
		for (int j = i + 1; j < SlTamGiac; j++) {
			if (mangTamGiac[i].TinhChuVi() > mangTamGiac[j].TinhChuVi()) {
				TamGiac temp = mangTamGiac[i];
				mangTamGiac[i] = mangTamGiac[j];
				mangTamGiac[j] = temp;
			}
		}
	}
}
void MangTamGiac::XuatChuVi(int SLTamGiac) {
	for (int i = 0; i < SLTamGiac; i++)
	{
		cout << "\nChu vi tam giac thu: " << i << ": " << mangTamGiac[i].TinhChuVi();
	}
}
void MangTamGiac::XuatDienTich(int SLTamGiac) {
	for (int i = 0; i < SLTamGiac; i++)
	{
		cout << "\nChu vi tam giac thu: " << i << ": " << mangTamGiac[i].TinhDienTich();
	}
}