#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	int max = Gtmax(a, n);
	printf("Phan tu lon nhat trong mang mot chieu la: %d", max);
	_getch();
}