#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <stdlib.h> 
using namespace std;

class SinhVien
{
private:
	string HoTen;
	string MSSV;
	float DiemToan;
	float DiemVan;
	float DiemAnh;
public:
	SinhVien();
	void NhapSinhVien();
	void XuatSinhVien();
	float TinhDiemTrungBinh();
	string XepLoai();
};

