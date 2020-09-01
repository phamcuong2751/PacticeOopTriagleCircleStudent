#include "TamGiac.h"
TamGiac::TamGiac(){
	A = Diem();
	B = Diem();
	C = Diem();
}
void TamGiac::NhapTamGiac() {
	cout << "Nhap diem A: \n";
	A.NhapDiem();
	cout << "\nNhap diem B: \n";
	B.NhapDiem();
	cout << "\nNhap diem C: \n";
	C.NhapDiem();
}
void TamGiac::XuatTamGiac() {

	A.XuatDiem();
	B.XuatDiem();
	C.XuatDiem();
}
float TamGiac::TinhChuVi() {
	return A.KhoanCach(B) + A.KhoanCach(C) + B.KhoanCach(C);
}
float TamGiac::TinhDienTich() {
	float d = (A.KhoanCach(B) + A.KhoanCach(C) + B.KhoanCach(C)) / 2;
	return sqrt(d * (d - A.KhoanCach(B)) * (d - A.KhoanCach(C)) * (d - B.KhoanCach(C)));
}