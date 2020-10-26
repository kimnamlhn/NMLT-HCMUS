#include "manghaichieu.h"
#include <stdio.h>
void Nhap(int a[][100], int b[][100], int &n)
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
	printf("\n");
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			printf("b[%d][%d]= ", i, j);
			scanf_s("%d", &b[i][j]);
		}
	}
}

void Tich(int a[][100], int b[][100], int d[][100], int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			d[i][j] = a[i][j] * b[i][j];
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

void Tong(int a[][100], int b[][100], int c[][100], int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
