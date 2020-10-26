#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	float R, S;
	const float pi = 3.14;
	printf("Nhap dien tich cua hinh tron= \n");
	scanf_s("%f", &S);
	R = sqrt(S / pi);
	printf("Ban kinh cua hinh tron= %.2f\n",R);
	_getch();

}