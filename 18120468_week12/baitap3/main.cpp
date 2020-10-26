#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include "header.h"
void main()
{
	int a[100];
	FILE *fp, *fp1, *fp2;
	fp1 = fopen("NUMBER1.txt", "r");
	if (fp1 == NULL)
	{
		printf("The files not found \n");
	}
	fp2 = fopen("NUMBER2.txt", "r");
	if (fp2 == NULL)
	{
		printf("The file not found \n");
	}
	fp = fopen("NUMBER12.txt", "w");
	int i = 0;
	while (!feof(fp1))
	{
		fscanf(fp1, "%d", &a[i]);
		i++;
	}
	while (!feof(fp2))
	{
		fscanf(fp2, "%d", &a[i]);
		i++;
	}
	Sapxepmang(a, i);
	for (int x = 0;x < i;x++)
	{
		putc(a[x], fp);
	}
	
	
	
	_fcloseall();
	
	
}