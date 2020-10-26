#include <stdio.h>
#include <conio.h>
int main(void)
{
	int n, tam;
	printf("Nhap n= ");
	scanf_s("%d", &n);
	int i = 2;
	while (i < n)
	{
		tam = 0;
		int j = 1;
		while (j <= n)
		{
			if (i%j == 0)
			{
				tam += 1;
			}
			j++;
		}
		if (tam == 2)
			printf("So nguyen n= %d la so nguyen to\n", i);
		i++;
	}
	_getch();
}

	
