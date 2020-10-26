#include <stdio.h>	
#include <conio.h>
int main(void)
{
	int n, tam;
	printf("Nhap so nguyen n= ");
	scanf_s("%d", &n);
	tam = 0;
	for (int i = 1;i <= n;i++)
	{
		if (n%i == 0)
		{
			tam += 1;
		}
	}
	if (tam == 2)
		printf("So nguyen n= %d la so nguyen to", n);
	else
		printf("So nguyen n= %d khong phai la so nguyen to", n);
	_getch();
}