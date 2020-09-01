#pragma once
#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include <Windows.h>
using namespace std;
class Diem
{
private: 
	int x, y;
public:
	Diem();
	void NhapDiem();
	void XuatDiem();
	float KhoanCach(Diem diem);
};

