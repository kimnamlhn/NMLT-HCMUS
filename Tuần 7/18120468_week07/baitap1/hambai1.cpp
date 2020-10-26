#include "mangmotchieu.h"
#include <stdio.h>

void Nhapsoduong(int &n)
{
	do
	{
		printf("Nhap so duong n: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n>100);
}

void Nhap(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("Nhap a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("Gia tri a[%d]= %d\n", i, a[i]);
	}
}