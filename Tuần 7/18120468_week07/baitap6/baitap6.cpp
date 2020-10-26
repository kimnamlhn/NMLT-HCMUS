#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	int max = Soammax(a, n);
	if (max != 1)
		printf("So am lon nhat trong mang la: %d", max);
	else
		printf("Mang mot chieu nhap vao khong co so am");
	_getch();
}