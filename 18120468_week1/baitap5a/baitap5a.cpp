#include <stdio.h>
#include <conio.h>
int main(void)
{
	float a, b, h, S, V;
	printf("Nhap chieu cao= \n");
	scanf_s("%f", &h);
	printf("Nhap chieu dai= \n");
	scanf_s("%f", &a);
	printf("Nhap chieu rong= \n");
	scanf_s("%f", &b);
	S = 2 * (a + b)*h + 2 * a*b;
	printf("Dien tich toan phan= %.2f\n", S);
	V = a * b*h;
	printf("The tich= %.2f\n", V);
	_getch();
}