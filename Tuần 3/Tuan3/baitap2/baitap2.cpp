#include <stdio.h>
#include <conio.h>
int main(void)
{
	int n, i;
	float S;
	S = 0;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	for (i = 1;i <= n; i++)
	{
		S = S + (1.0 / i);
	}
	printf("Gia tri tong S= 1+1/2+1/3+...+1/n= %.2f", S);	
	_getch();
}
