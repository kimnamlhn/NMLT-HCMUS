#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	long S = Tong(a, n);
	printf("Tong cac phan tu khong am trong mang la: %ld", S);
	_getch();
}