#include "tinhtien.h"
#include <stdio.h>
void nhapsotien(int &n)
{
	do
	{
		printf("Nhap so tien can quy doi: \n");
		scanf_s("%d", &n);
	} while (n <= 0);
}
void tinhtien(int n)
{
	int tien;
	
			tien = n / 50000;
			printf("Can %d to 50000 VND\n", tien);
			n = n - tien * 50000;
		
			tien = n / 20000;
			printf("Can %d to 20000 VND\n", tien);
			n = n - tien * 20000;
		
			tien = n / 10000;
			printf("Can %d to 10000 VND\n", tien);
			n = n - tien * 10000;
	
			tien = n / 5000;
			printf("Can %d to 5000 VND\n", tien);
			n = n - tien * 5000;

			tien = n / 2000;
			printf("Can %d to 2000 VND\n", tien);
			n = n - tien * 2000;

			tien = n / 1000;
			printf("Can %d to 1000 VND\n", tien);
			n = n - tien * 1000;
}