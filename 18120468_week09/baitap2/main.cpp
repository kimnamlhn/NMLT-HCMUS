#include "manghaichieu.h"
#include <stdio.h>
#include <conio.h>
const int MAX = 100;
void main()
{
	int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX], d[MAX][MAX];
	int n;
	Nhap(a, b, n);
	Tong(a, b, c, n);
	printf("\nTong hai ma tran a va b la ma tran c:\n");
	Xuat(c, n);
	Tich(a, b, d, n);
	printf("\nTich hai ma tran a va b la ma tran d:\n");
	Xuat(d, n);
	_getch();
}