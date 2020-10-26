#include "header.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>
const int max = 100;

void main()
{
	char s1[max], s2[max];
	int i;
	printf("Nhap vao chuoi s1: ");
	gets_s(s1);
	printf("Nhap vao chuoi s2: ");
	gets_s(s2);
	int n = strlen(s1);
	do
	{
		printf("Nhap vao vi tri muon chen i: ");
		scanf_s("%d", &i);
	} while (i <= 0 || i > n);
	Ghepchuoi(s1, s2, i);
	_getch();
}

