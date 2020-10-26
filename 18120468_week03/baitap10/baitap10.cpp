#include <stdio.h>
#include <conio.h>
int main(void)
{
	int n, tam;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	for (int i = 2;i < n;i++)
	{
		tam = 0;
		for (int j = 1;j <= i;j++)
		{
			if (i%j == 0)
			{
				tam += 1;
			}
		}
		if (tam == 2)
			printf("So nguyen n= %d la so nguyen to\n", i);
		
	}
	_getch();
}