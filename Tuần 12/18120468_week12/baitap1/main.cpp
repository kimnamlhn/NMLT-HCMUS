#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <conio.h>
void main()
{
	FILE *fp;
	fp = fopen("STRINGS.txt", "rt");
	char ch;
	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);
	_getch();
}