#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i, n;
	float S;
	S = 1;
	printf("Nhap n=	");
	scanf_s("%d", &n);
	for (i = 1;i < n;i++)
	{
		S = S + (1.0 / (i*(i + 1)));
	}
	printf("Gia tri cua tong S= 1+1/(1*2)+1/(2*3)+.....+1/(n*(n+1))= %.2f", S);
	_getch();
}