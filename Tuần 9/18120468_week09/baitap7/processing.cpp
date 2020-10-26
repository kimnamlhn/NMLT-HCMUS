#include "manghaichieu.h"
#include <stdio.h>
void Nhap(int a[][100], int &n)
{
	do
	{
		printf("Nhap n trong ma tran n*n: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void Xuat(int a[][100], int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("a[%d][%d]= %d\t", i, j, a[i][j]);

		}
		printf("\n");
	}
}
void Sapxep(int a[][100], int row, int col)
{
	int n = row * col;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (a[i / col][i%col] > a[j / col][j%col])
				Swap(a[i / col][i%col], a[j / col][j%col]);
		}
	}
	
}
void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}