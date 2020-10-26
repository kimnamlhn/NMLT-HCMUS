#include "header.h"
#include <stdio.h>
#include <conio.h>	
const int max = 100;
void main()
{
	//bai chua lam xong ^^
	char str[max];
	int n;
	printf("Nhap vao chuong trinh mot so nguyen: ");
	scanf_s("%d", &n);
	ChuanHoaSo(str, n);
	_getch();
}