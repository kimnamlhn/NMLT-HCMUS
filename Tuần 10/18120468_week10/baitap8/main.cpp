#include "header.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
const int max = 100;
void main()
{
	char str[max];
	int n, count;
	printf("Nhap vao chuoi ky tu: ");
	gets_s(str);
	printf("Nhap so nguyen n: ");
	scanf_s("%d", &n);
	count = Dem(str, n);
	printf("Co %d tu co nhieu hon %d ky tu co trong chuoi", count, n);
	_getch();
}