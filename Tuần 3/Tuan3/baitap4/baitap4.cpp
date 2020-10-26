#include <stdio.h>
#include <conio.h>
int main(void)
{
	int n;
	long S, tich;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	S = 0;	
	tich = 1;
	for (int i = 1;i <= n;i++)
	{
		tich = tich * i;
		S += tich;
	}
	printf("Gia tri cua tong S= 1+1*2+....+1*2*..*n= %.2ld", S);
	_getch();
}