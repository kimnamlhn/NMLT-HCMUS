#include "header.h"
#include <stdio.h>
#include <string.h>
void StudentInput(int &n, HS HS[])
{
	do
	{
		printf("Nhap vao so luong hoc sinh: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
	fflush(stdin);
	for (int i = 0;i < n;i++)
	{
		fflush(stdin);
		printf("HS: ");
		gets_s(HS[i].hoten);
	}
}
