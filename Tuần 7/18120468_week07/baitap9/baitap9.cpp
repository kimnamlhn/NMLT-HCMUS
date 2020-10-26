#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	int a[100];
	Nhapsoduong(n);
	Nhap(a, n);
	printf("Tong cac so chinh phuong trong mang la: %ld", Tongsochinhphuong(a, n));
	_getch();
}