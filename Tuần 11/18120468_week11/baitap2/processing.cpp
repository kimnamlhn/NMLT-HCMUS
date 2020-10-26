#include "header.h"
#include <stdio.h>
#include <math.h>

void Nhap(Diem2D &diem)
{
	printf("Nhap x: ");
	scanf_s("%f", &diem.iX);
	printf("Nhap y: ");
	scanf_s("%f", &diem.iY);
}
void Xuat(Diem2D diem)
{
	printf("Toa do cua diem: (%.2f,%.2f)\n", diem.iX, diem.iY);
}

float Khoangcach(Diem2D diem1, Diem2D diem2)
{
	return sqrt(pow((diem2.iY - diem1.iY), 2) + pow((diem2.iX - diem1.iX), 2));
}

void Kiemtra(Diem2D diem)
{
	if (diem.iX > 0)
	{
		if (diem.iY > 0)
			printf("Diem nam trong goc phan tu thu 1\n");
		else printf("Diem nam trong goc phan tu thu 4\n");
	}
	else
	{
		if (diem.iY > 0)
			printf("Diem nam trong goc phan tu thu 2\n");
		else printf("Diem nam trong goc phan tu thu 3\n");
	}
}

float ChuVi(Diem2D diem1, Diem2D diem2, Diem2D diem3)
{
	
	float C;
	C = Khoangcach(diem1, diem2) + Khoangcach(diem2, diem3) + Khoangcach(diem3, diem1);
	return C;
	
}

float DienTich(Diem2D diem1, Diem2D diem2, Diem2D diem3)
{
	float p = ChuVi(diem1, diem2, diem3) / 2;
	float S;
	S = sqrt(p*(p - Khoangcach(diem1, diem2))*(p - Khoangcach(diem2, diem3))*(p - Khoangcach(diem3, diem1)));
	return S;
}