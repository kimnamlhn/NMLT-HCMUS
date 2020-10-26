#include <stdio.h>
#include <conio.h>
int main(void)
{
	int min, a, b, c, d;
	printf("Nhap bon so nguyen a,b,c va d: ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	if (a > b)
	{
		if (b > c)
		{
			if (c > d)
				min = d;
			else min = c;
		}
		else
		{
			if (b > d)
				min = d;
			else min = b;
		}
	}
	else
	{
		if (a > c)
		{
			if (c > d)
				min = d;
			else min = c;
		}
		else
		{
			if (a > d)
				min = d;
			else min = a;
		}
	}
	printf("So nho nhat trong bon so nguyen nhap vao la: %d", min);

	_getch();
}