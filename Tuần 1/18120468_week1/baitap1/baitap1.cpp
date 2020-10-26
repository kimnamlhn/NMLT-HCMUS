#include <stdio.h>
#include <conio.h>
int main(void)
{
	int a;
	int b;
	printf("nhap so nguyen a= ");
	scanf_s("%d", &a);
	printf("nhap so nguyen b= ");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("xuat so nguyen a= %d \n", a);
	printf("xuat so nguyen b= %d \n", b);
	_getch();
}
