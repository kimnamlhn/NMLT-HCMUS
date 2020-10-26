#include "header.h"
#include <stdio.h>
#include <conio.h>
const int max = 100;
void main()
{
	char str[max];
	char c;
	printf("Nhap vao mot chuoi ky tu: ");
	gets_s(str);
	printf("Nhap vao mot ky tu: ");
	scanf_s("%c", &c);
	int count = DemXuatHien(str, c);
	printf("So lan xuat hien cua '%c' trong chuoi la: %d", c, count);
	_getch();
}