#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	int n, x;
	long S;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	printf("Nhap x= ");
	scanf_s("%d", &x);
	S = 0;
	for (int i=0;i <= n;i++)
	{
		S += pow(x, i);
	}
	printf("Tong S= 1+x+x^2+.....+ x^n= %ld",S);
	_getch();
}