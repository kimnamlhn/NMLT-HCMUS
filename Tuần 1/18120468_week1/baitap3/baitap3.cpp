#include <stdio.h>
#include <conio.h>
int main(void)
{
    float R, C, S;
	const float Pi = 3.14;
	printf("Nhap ban kinh R= \n");
	scanf_s("%f", &R);
	C = 2 * Pi*R;
	printf("Chu vi hinh tron = %.2f\n",Pi);
	S = Pi * R*R;
	printf("Dien tich hinh tron= %.2f\n",S);
	_getch();
}