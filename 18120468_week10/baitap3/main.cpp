#include "header.h"
#include <stdio.h>
#include <conio.h>	
const int max = 100;
void main()
{
	char str[max];
	int n, i;
	printf("Nhap vao chuoi ky tu: ");
	gets_s(str);
	printf("Nhap vi tri muon xoa: ");
	scanf_s("%d", &i);
	printf("Nhap so ky tu muon xoa: ");
	scanf_s("%d", &n);
	Xoa(str, n, i);
	_getch();
}