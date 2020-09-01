#include "MangDuongTron.h"
#include "MangTamGiac.h"
#include "LopHoc.h"

void main()
{
	srand(time(NULL));
	//class Diem: Nhập và xuất điểm + khoản cách 2 điểm
	cout << "-------------------------------------Class Diem-------------------------------------\n";
	Diem diem;
	Diem diem2;
	cout << "Nhap diem thu 1:\n";
	diem.NhapDiem();
	cout << "\nDiem ban vua nhap la: ";
	diem.XuatDiem();
	cout << "\nNhap diem thu 2 de tinh khoan cach:\n";
	diem2.NhapDiem();
	float KC = diem.KhoanCach(diem2);
	cout << "\nKhoan Cach = " << KC << endl;

	//class TamGiac: Nhập và xuất 3 điểm tam giác + chu vi + diện tích
	cout << "\n------------------------------------Class Tam Giac------------------------------------\n";
	TamGiac tamGiac;
	tamGiac.NhapTamGiac();
	//cout << "3 diem tam giac ban vua nhap la: ";
	cout << "\nTam giac ban vua nhap la: ";
	tamGiac.XuatTamGiac();
	cout << "\nTam giac co chu vi la: " << tamGiac.TinhChuVi() << endl;
	cout << "Tam giac co dien tich la: " << tamGiac.TinhDienTich();

	//class MangTanGiac: Nhập và xuất mảng các tam giác + min(chu vi) + max(diện tích) + sort(chu vi, "A->Z")
	cout << "\n\n-----------------------------------Class Mang Tam Giac-----------------------------------";
	MangTamGiac mangTG;
	int n = rand() % 10 + 1;
	cout << "\nNhap so luong tam giac: " << n;
	//cin >> n;
	mangTG.NhapMangTamGiac(n);
	mangTG.XuatMangTamGiac(n);
	mangTG.TimTamGiacChuViNhoNhat(n);
	mangTG.TimTamGiacDienTichLonNhat(n);
	cout << "\nSap xep tang dan theo chu vi:";
	mangTG.SapXepTangDanTheoChuVi(n);
	mangTG.XuatMangTamGiac(n);

	//class DuongTron: Nhập xuất đường tròn + chu vi + diện tích
	cout << "\n\n-----------------------------------Class Duong Tron-----------------------------------";
	DuongTron DT;
	DT.NhapDuongTron();
	cout << "\nDuong tron ban vua nhap la: ";
	DT.XuatDuongTron();
	cout << "\nChu vi duong tron la: " << DT.TinhChuVi() << endl;
	cout << "Dien tich hinh tron la: " << DT.TinhDienTich();
	//class MangDuongTron: Nhập và xuất mảng các đường tròn + sort(diện tích, "Z->A")
	cout << "\n\n-----------------------------------Class Mang Duong Tron-----------------------------------";
	MangDuongTron MangDT;
	int SLDuongTron = rand() % 10 + 1;
	cout << "\nNhap so luong duong tron: " << SLDuongTron;
	MangDT.NhapMangDuongTron(SLDuongTron);
	MangDT.XuatMangDuongTron(SLDuongTron);
	MangDT.SapXepGiamDanTheoDienTich(SLDuongTron);
	cout << "\n\nSap xep giam dan theo dien tich:";
	MangDT.XuatMangDuongTron(SLDuongTron);

	//class SinhVien: Nhập và xuất một sinh viên + tính điểm trung bình + xếp loại
	cout << "\n\n-----------------------------------Class Sinh Vien-----------------------------------\n";
	SinhVien SV;
	SV.NhapSinhVien();
	cout << "\nSinh vien ban vua nhap: ";
	SV.XuatSinhVien();
	cout << "\nDiem Trung Binh: " << SV.TinhDiemTrungBinh();
	cout << "\nXep loai: " << SV.XepLoai();

	//class MangSinhVien: Nhập và xuất mảng các sinh viên + số lượng sinh viên dưới TB + số lượng sinh viên khá + sort(Điểm TB, "A->Z")
	cout << "\n\n-----------------------------------Class Mang Sinh Vien-----------------------------------";
	LopHoc MangSinhVien;
	Sleep(1000);
	int SLSinhVien = rand() % 10 + 1;
	cout << "\nNhap so luong duong tron: " << SLSinhVien;
	MangSinhVien.NhapMangSinhVien(SLSinhVien);
	MangSinhVien.XuatMangSinhVien(SLSinhVien);
	cout << "\nSo sinh vien duoi trung binh: " << MangSinhVien.SoSinhVienDuoiTB(SLSinhVien);
	cout << "\nSo sinh vien Kha: " << MangSinhVien.SoSinhVienKha(SLSinhVien) << endl;
	MangSinhVien.SapXepTangDanTheoDiemTB(SLSinhVien);
	MangSinhVien.XuatMangSinhVien(SLSinhVien);

	cout << endl;
	system("pause");
}