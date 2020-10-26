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


bool Kttangdan(int a[], int n)
{
	int temp = a[0];
	for (int i = 1;i < n;i++)
	{
		if (a[i] < temp)
			return false;
		temp = a[i];
	}
	return true;
}