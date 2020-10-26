#include <stdio.h>
#include <conio.h>
int main(void)
{
	long k, n1, n2, n3;
	printf("So hang thu k cua day fibonacci, nhap k= ");
	scanf_s("%d", &k);
	n1 = 0;
	n2 = 1;
	for (int i = 3; i <= k;i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("So thu k trong day fibonacci la n= %d", n3);
	_getch();
}