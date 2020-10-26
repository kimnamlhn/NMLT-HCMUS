#include "manghaichieu.h"
#include <stdio.h>
#include <conio.h>
const int max = 100;
void main()
{
	int a[max][max], row, col;
	Nhap(a, row, col);
	Sapxep(a, row, col);
	Xuat(a, row, col);
	_getch();
}