#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	int cout = Socacsnt(a, n);
	printf("So cac so nguyen to trong mang mot chieu la: %d", cout);
	_getch();
}