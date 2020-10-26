#include <stdio.h>
#include <conio.h>
int main(void)
{
	float a,b,c,s;
	printf("Nhap chu vi hinh tron= \n");
	scanf_s("%f", &c);
	b = c / 5;
	a = 1.5*b;
	s = a * b;
	printf("Dien tich hinh tron= %.2f\n",s);
	_getch();
	
}