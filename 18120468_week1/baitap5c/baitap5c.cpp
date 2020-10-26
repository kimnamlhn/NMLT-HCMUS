#include <stdio.h>
#include <conio.h>
int main(void)
{
	float R, h, S, V;
	const float pi = 3.14;
	printf("Nhap ban kinh= \n");
	scanf_s("%f", &R);
	printf("Nhap chieu cao= \n");
	scanf_s("%f", &h);
	S = (2 * pi*R*h) + (2 * pi*R*R);
	printf("Dien tich be mat= %.2f\n", S);
	V = pi * R*R*h;
	printf("The tich= %.2f\n", V);
	_getch();
}