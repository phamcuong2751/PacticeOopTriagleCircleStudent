#pragma once
#include "DuongTron.h"
class MangDuongTron
{
private:
	DuongTron mangDuongTron[100];
public:
	void NhapMangDuongTron(int SLDuongTron);
	void XuatMangDuongTron(int SLDuongTron);
	void SapXepGiamDanTheoDienTich(int SLDuongTron);
};

