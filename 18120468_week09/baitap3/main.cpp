#include "manghaichieu.h"
#include <stdio.h>
#include <conio.h>
const int max = 100;
void main()
{
	int a[max][max];
	int row, col;
	Nhap(a, row, col);
	printf("\n");
	Xuat(a, row, col);
	Diemyenngua(a, row, col);
	_getch();
}