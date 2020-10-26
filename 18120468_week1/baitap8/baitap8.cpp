#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	unsigned int n;
	float x, S;
	printf("Nhap so nguyen duong n= \n");
	scanf_s("%d", &n);
	printf("Nhap so thuc x= \n");
	scanf_s("%f", &x);
	x = x * x + 1;
	S = pow(x, n);
	printf("Ket qua phep tinh (x^2+1)^n= %.2f\n", S);
	_getch();
}