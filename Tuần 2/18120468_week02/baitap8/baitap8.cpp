#include <stdio.h>
#include <conio.h>
int main(void)
{
	float a, b, c;
	printf("Nhap do dai ba canh cua tam giac: ");
	scanf_s("%f %f %f", &a, &b, &c);
	if ((a + b > c) || (a + c > b) || (b + c > a))
	{
		if ((a == b) && (b == c) && (c == a))
		{
			printf("Tam giac deu");
		}
		else if ((a == b) || (b == c) || (c == a))
		{
			printf("Tam giac can");
		}
		else if ((a*a == b * b + c * c) || (b*b == a * a + c * c) || (c*c == a * a + b * b))
		{
			printf("Tam giac vuong");
		}
		else
		{
			printf("Tam giac thuong");
		}
	}
	else
		printf("Khong phai la tam giac");
	_getch();
}