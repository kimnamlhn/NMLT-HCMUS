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

void Xuat(int a[][100], int &row, int &col)
{
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("a[%d][%d]= %d\t", i, j, a[i][j]);

		}
		printf("\n");
	}
}
bool KTyenngua(int a[][100], int row, int col)
{
			if ((LonNhatTrenCot(a, row, col) == true) && (NhoNhatTrenDong(a, row, col) == true))
				return true;
			else
				return false;
}
bool LonNhatTrenCot(int a[][100], int idexrow, int idexcol)
{
	int x = a[idexrow][idexcol];
	for (int i = 0;i < idexcol;i++)
	{
		if (x < a[i][idexcol])
			return false;
	}
	return true;
}

bool NhoNhatTrenDong(int a[][100], int idexrow, int idexcol)
{
	int x = a[idexrow][idexcol];
	for (int i = 0;i < idexrow;i++)
	{
		if (x > a[idexrow][i])
			return false;
	}
	return true;
}
void Diemyenngua(int a[][100], int row, int col)
{
	printf("Cac diem yen ngua trong ma tran la: \n");
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			if (KTyenngua(a, i, j) == true)
				printf("a[%d][%d]= %d\n", i, j, a[i][j]);
		}
	}
}