#include "header.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	Diem2D A, B, C;
	printf("Nhap vao diem A: \n");
	Nhap(A);
	Xuat(A);
	printf("Nhap vao diem B: \n");
	Nhap(B);
	Xuat(B);
	printf("Nhap vao diem C: \n");
	Nhap(C);
	Xuat(C);//cau 1
	printf("Khoang cach giua hai diem A va B la: %.2f\n", Khoangcach(A, B));//cau 2
	printf("Kiem tra vi tri goc phan tu cua diem A: \n");
	Kiemtra(A);//cau 3
	printf("Chu vi tam giac duoc tao thanh tu ba diem la: %.2f\n", ChuVi(A, B, C));
	printf("Dien tich tam giac duoc tao thanh tu ba diem la: %.2f\n", DienTich(A, B, C));//cau 4
	_getch();
}