#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	float a, R, S;
	const float pi = 3.14;
	printf("chieu dai canh tam giac deu= \n");
	scanf_s("%f", &a);
	printf("chieu dai ban kinh hinh tron= \n");
	scanf_s("%f", &R);
	S = pi * R*R / 2 + 3 * a*a*sqrt(3) / 4;
	printf("Dien tich hinh to xam= %.2f\n",S);
	_getch();
	
}