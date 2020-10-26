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

bool Snt(int n)
{
	int cout = 0;
	for (int i = 2;i < n;i++)
	{
		if (n%i == 0)
			cout += 1;
	}
	if (cout == 0)
		return true;
	else return false;
}

int Socacsnt(int a[], int n)
{
	int cout = 0;
	for (int i = 0;i < n;i++)
	{
		if (Snt(a[i])==true)
			cout += 1;
	}
	return cout;
}