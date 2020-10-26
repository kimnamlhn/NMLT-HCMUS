#include "hoanvisonguyen.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int a, b;
	printf("Nhap a= ");
	scanf_s("%d", &a);
	printf("Nhap b= ");
	scanf_s("%d", &b);
	Hoanvisonguyen(a, b);
	printf("Gia tri sau khi hoan doi cua a= %d\n", a);
	printf("Gia tri sau khi hoan doi cua b= %d", b);
	_getch();
}