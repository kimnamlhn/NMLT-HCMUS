#include "nhapvatinhtongsoam.h"
#include <stdio.h>

void Demsoam()
{
	int count = 0;
	int n;
	do
	{
		printf("Nhap n= ");
		scanf_s("%d", &n);
		if (n < 0)
			count += 1;
	} while (n != 0);
	printf("Ban da nhap vao %d so thuc am", count);
}

