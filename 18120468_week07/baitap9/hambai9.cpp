#include "mangmotchieu.h"
#include <stdio.h>
#include <math.h>

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
		printf("a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}

bool Ktsochinhphuong(int n)
{
	int temp = sqrt(n*1.0);
	if (temp*temp == n)
		return true;
	else return false;
}
 
long Tongsochinhphuong(int a[], int n)
{
	long S = 0;
	for (int i = 0;i < n;i++)
	{
		if (Ktsochinhphuong(a[i]) == true)
			S += a[i];
	}
	return S;
}