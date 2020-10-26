#include <stdio.h>
#include <conio.h>
int main(void)
{
	long n, n1, n2, n3;
	printf("Nhap so cac so cua day fibonacci n= ");
	scanf_s("%d", &n);
	n1 = 0;
	n2 = 1;
	printf("%d\n", n1);
	printf("%d\n", n2);
	int i = 3;
	while (i <= n)
	{
		n3 = n1 + n2;
		printf("%d\n", n3);
		n1 = n2;
		n2 = n3;
		i++;
	}
	_getch();
}