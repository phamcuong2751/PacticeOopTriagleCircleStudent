#include "SinhVien.h"
SinhVien::SinhVien() {
	HoTen = "";
	MSSV = "";
	DiemToan = 0;
	DiemAnh = 0;
	DiemVan = 0;
}

string randomHoTen[10] = { "Vu Xuan Duc", "Hoang Duong Dat", "Hoang Duong Dat", "Pham Phong Phu Cuong", "Le Tan Cuong", "Tran Minh Chuong", "Le Hoang Chuong", "Pham Minh Chau", "Do Thai Bao", "Tran Trung Anh" };
string randomMSSV[10] = { "18600085","18600082","18600072","18600071","18600065","18600063","18600062","18600060","18600059","18600053" };

void SinhVien::NhapSinhVien() {
	srand((int)time(0));
	HoTen = randomHoTen[rand() % 10];
	cout << "Nhap Ho Ten sinh vien: "<<HoTen;
	//getline(cin, HoTen);
	MSSV = randomMSSV[rand() % 10];
	cout << "\nNhap MSSV: " << MSSV << endl;
	//getline(cin, MSSV);
	DiemToan = rand() % 10 + 1;
	cout << "Nhap diem Toan: " << DiemToan;
	DiemVan = rand() % 10 + 1;
	cout << "\nNhap diem Van: " << DiemVan;
	DiemAnh = rand() % 10 + 1;
	cout << "\nNhap diem Anh: " << DiemAnh;
	Sleep(1000);
}

void SinhVien::XuatSinhVien() {
	cout << "{ Ho ten: " << HoTen << ", " <<"MSSV: "<< MSSV << ", Toan: " << DiemToan << ", Van: " << DiemVan << ", Anh: " << DiemAnh << " }";
}

float SinhVien::TinhDiemTrungBinh() {
	return (DiemToan + DiemAnh + DiemVan) / 3;
}

string SinhVien::XepLoai() {
	float DiemTB = TinhDiemTrungBinh();
	if (DiemTB < 5) {
		return "Yeu";
	}
	else if (DiemTB < 7) {
		return "Trung Binh";
	}
	else if (DiemTB < 8) {
		return "Kha";
	}
	else if (DiemTB < 9) {
		return "Gioi";
	}
	else {
		return "Xuat Xac";
	}
}