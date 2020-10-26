#include <stdio.h>	
#include <conio.h>
int main(void)
{
	int n, tam, i;
	printf("Nhap so nguyen n= ");
	scanf_s("%d", &n);
	tam = 0;
	i = 1;
	while (i<=n)
	{
		if (n%i == 0)
		{
			tam += 1;
		}
		i++;
	}
	if (tam == 2)
		printf("So nguyen n= %d la so nguyen to", n);
	else
		printf("So nguyen n= %d khong phai la so nguyen to", n);
	_getch();
}