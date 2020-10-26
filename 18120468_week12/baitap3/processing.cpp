#include "header.h"
#include <stdio.h>
void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Sapxepmang(int a[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (a[i] > a[j])
				Swap(a[i], a[j]);
		}
	}
}