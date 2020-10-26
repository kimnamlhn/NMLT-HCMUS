#define _CRT_SECURE_NO_WARNINGS
#include "header.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	FILE *fp1, *fp2;
	fp1 = fopen("README.txt", "r");
	fp2 = fopen("THONGKE.txt", "w");
	int count = 0, temp = 0;
	
	while (!feof(fp1))
	{
		fscanf(fp1, "%d", temp);

	}
	_fcloseall();
}
