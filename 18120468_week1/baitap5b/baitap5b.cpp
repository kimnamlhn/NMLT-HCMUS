#include <stdio.h>
#include <conio.h>
int main(void)
{
	float a;
	printf("Nhap canh hinh lap phuong= \n");
	scanf_s("%f", &a);			
	printf("chu so a", a);
	printf("Dien tich hinh lap phuong= %.2f\n", (6 * a*a));
	printf("The tich hinh lap phuong= %.2f\n", (a * a*a));
	
	_getch();
}