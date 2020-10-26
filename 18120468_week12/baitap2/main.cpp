#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <conio.h>
void main()
{
	int d;
	FILE *fp;
	fp = fopen("NUMBERS.txt", "r");
	while (!feof(fp))
	{
		fscanf(fp, "%d", &d);
		printf("%d\t", d);
	}
	fclose(fp);
	_getch();
}