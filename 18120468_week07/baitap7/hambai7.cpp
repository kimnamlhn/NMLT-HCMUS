#include "mangmotchieu.h"
#include <stdio.h>

void Nhapsoduong(int &n)
{
	do
	{
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
}

void Nhap(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("Nhap a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}

int Sokhongammin(int a[], int n)
{
	int min = -1;
	for (int i = 0;i < n;i++)
	{
		if (a[i] >= 0)
		{
			min = a[i];
			for (int j = 0;j < n;j++)
			{
				if (a[j] >= 0 && a[j] < a[i])
					min = a[j];
			}
		}
	}
	return min;
}