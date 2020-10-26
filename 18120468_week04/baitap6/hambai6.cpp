#include "nhapvatimucln.h"
#include <stdio.h>

int Nhapsoduong()
{
	int a;
	do
	{
		printf("Nhap so nguyen duong: ");
		scanf_s("%d", &a);
	} while (a <= 0);
	return a;
}

void TimUCLN(int a, int b)
{
	int i = a;
	for (;;i--)
	{
		if ((a%i == 0) && (b%i == 0))
			break;
		
	}
	printf("Uoc chung lon nhat cua hai so a va b la: %d", i);
	
}
