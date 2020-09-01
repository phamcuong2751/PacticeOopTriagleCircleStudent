#include "Diem.h"
Diem::Diem() {
	x = 0; y = 0;
}
void Diem::NhapDiem() {
	srand(time(NULL));
	x = rand() % 100 + 1;
	cout << "Nhap X: " << x;
	//cin >> x;
	y = rand() % 100 + 1;
	cout << "\nNhap Y: " << y;
	//cin >> y;
	Sleep(1000);
}
void Diem::XuatDiem() {
	cout << "(" << x << "; " << y << ")";
}
float Diem::KhoanCach(Diem diem)
{
	return sqrt(pow(this->x - diem.x, 2) + pow(this->y - diem.y, 2));
}