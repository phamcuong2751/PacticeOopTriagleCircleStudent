#include "DuongTron.h"
const float pi = 3.14;
DuongTron::DuongTron(){
	I = Diem();
	R = 0;
}
void DuongTron::NhapDuongTron(){
	cout << "\nNhap tam I của duong tron: \n";
	I.NhapDiem();
	R = rand() % 20 + 1;
	cout << "\nNhap ban kinh R: " << R;
	Sleep(1000);
}
void DuongTron::XuatDuongTron(){
	cout << "O{ I:";
	I.XuatDiem();
	cout << "; R: " << R << " }";
}
float DuongTron::TinhChuVi() {
	return 2 * R * pi;
}
float DuongTron::TinhDienTich() {
	return pi * pow(R, 2);
}