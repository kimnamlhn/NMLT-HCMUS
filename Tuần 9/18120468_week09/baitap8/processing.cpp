#include "manghaichieu.h"
#include <stdio.h>
void Nhap(int a[][100], int &row, int &col)
{
	do
	{
		printf("Nhap so hang: ");
		scanf_s("%d", &row);
	} while (row <= 0 || row > 100);

	do
	{
		printf("Nhap so cot: ");
		scanf_s("%d", &col);
	} while (col <= 0 || col > 100);
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void Xuat(int a[][100], int row, int col)
{
	printf("Xuat ra ma tran: \n");
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("a[%d][%d]= %d\t", i, j, a[i][j]);

		}
		printf("\n");
	}
}

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Sapxep(int a[][100], int row, int col)
{
	int n = row * col;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i+1 ;j < n;j++)
		{
			if (a[i / col][i%col] > a[j / col][j%col])
				Swap(a[i / col][i%col], a[j / col][j%col]);
		}
	}
	for (int k = 0;k < row ;k++)
	{
		for (int m = 0;m < col - 1;m++)
		{
			for (int n = m + 1;n < col ;n++)
			{
				if (a[k][m] < a[k][n])
					Swap(a[k][m], a[k][n]);
			}
		}
	}
}

