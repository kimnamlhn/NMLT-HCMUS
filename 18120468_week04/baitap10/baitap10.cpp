#include "tinhdayso.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	long F;
	n = Nhapsoduong();
	F = Tinhdayso(n);
	printf("Gia tri cua day so khi n= %d la: %ld", n, F);
	_getch();
}