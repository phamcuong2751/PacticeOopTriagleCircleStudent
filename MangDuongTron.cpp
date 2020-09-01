#include "MangDuongTron.h"
void MangDuongTron::NhapMangDuongTron(int SLDuongTron)
{
	for (int i = 0; i < SLDuongTron; i++) {
		cout << "\n\nNhap duong tron thu " << i << ": ";
		mangDuongTron[i].NhapDuongTron();
	}
}
void MangDuongTron::XuatMangDuongTron(int SLDuongTron) {
	for (int i = 0; i < SLDuongTron; i++) {
		cout << "\nDuong tron thu " << i << ": ";
		mangDuongTron[i].XuatDuongTron();
	}
}
void MangDuongTron::SapXepGiamDanTheoDienTich(int SLDuongTron) {
	for (int i = 0; i < SLDuongTron - 1; i++) {
		for (int j = i + 1; j < SLDuongTron; j++) {
			if (mangDuongTron[i].TinhChuVi() < mangDuongTron[j].TinhChuVi()) {
				DuongTron temp = mangDuongTron[i];
				mangDuongTron[i] = mangDuongTron[j];
				mangDuongTron[j] = temp;
			}
		}
	}
}