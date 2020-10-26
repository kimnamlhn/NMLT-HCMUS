#include <stdio.h>
#include <conio.h>
int main(void)
{
	float l, tien;
	printf("Nhap so km di taxi: ");
	scanf_s("%f", &l);
	if ((l > 0) && (l <= 1))
	{
		tien = l * 15000;
	}
	else if ((l > 1) && (l <= 5))
	{
		tien = (l - 1) * 13500 + 15000 * 1;
	}
	else if (l > 5)
	{
		tien = 15000 * 1 + 4 * 13500 + (l - 5) * 11000;
	}
	else if (l > 120)
	{
		tien = (15000 * 1 + 4 * 13500 + (l - 5) * 11000) * 90 / 100;
	}
	else
	{
		printf("So km nhap vao khong hop le");
	}
	printf("So tien can phai tra khi di %.2f km taxi la: %.2f VND", l, tien);
	_getch();
}