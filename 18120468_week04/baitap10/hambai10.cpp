#include "tinhdayso.h"
#include <stdio.h>

int Nhapsoduong()
{
	int n;
	do
	{
		printf("Nhap so duong n= ");
		scanf_s("%d", &n);
	} while (n <= 0);
	return n;
}
long Tinhdayso(int n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 2;
	return (3 * Tinhdayso(n - 1) - 2 * Tinhdayso(n - 2));
}