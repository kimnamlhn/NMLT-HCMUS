#include <stdio.h>
#include <conio.h>
int main(void)
{
	int a, b, c;
	printf("nhap so nguyen a= ");
	scanf_s("%d", &a);
	printf("nhap so nguyen b= ");
	scanf_s("%d", &b);
	printf("nhap so nguyen c= ");
	scanf_s("%d", &c);
	a = a + b;
	b = a - b;
	a = a - b;
	b = b + c;
	c = b - c;
	b = b - c;
	printf("xuat a= %d \n", a);
	printf("xuat b= %d \n", b);
	printf("xuat c= %d \n", c);
	_getch();
}