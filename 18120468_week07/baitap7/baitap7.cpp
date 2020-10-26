#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	int min = Sokhongammin(a, n);
	if (min != -1)
		printf("So khong am nho nhat trong mang la: %d", min);
	else
		printf("Mang mot chieu nhap vao khong co so khong am");
	_getch();
}