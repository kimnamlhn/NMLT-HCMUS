#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a[100];
	int n;
	Nhapsoduong(n);
	Nhap(a, n);
	if (Kttangdan(a, n) == true)
		printf("Tang dan");
	else
		printf("Khong tang dan");
	_getch();
}