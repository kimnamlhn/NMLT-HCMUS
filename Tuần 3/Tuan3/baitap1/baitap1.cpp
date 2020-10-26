#include <stdio.h>
#include <conio.h>
#include <math.h>		
int main(void)
{
	int n, i;
	long S;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	S = 0;
	for (i = 1;i <= n; i++)
	{
		S = S + pow(i, 3);
	}
	printf("Tong S= 1^3+2^3+....n^3= %d",S);

	_getch();
}