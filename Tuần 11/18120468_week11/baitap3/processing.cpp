#include "header.h"
#include <stdio.h>
#include <string.h>

void StudentInput(HS array[], int &n)
{
	do
	{
		printf("Nhap vao so hoc sinh: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 200);
	for (int i = 0;i < n;i++)
	{
		printf("Ho ten: ");
		getchar();
		gets_s(array[i].name);
		printf("Diem: ");
		scanf_s("%f", &array[i].point);
	}
}

void StudentOutput(HS array[], int n)
{
	printf("\nXuat ra cac hoc sinh:\n");
	for (int i = 0;i < n;i++)
	{
		printf("Ho ten: ");
		puts(array[i].name);
		printf("Diem: %.1f\n", array[i].point);
	}
}

