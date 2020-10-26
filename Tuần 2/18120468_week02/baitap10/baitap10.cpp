#include <stdio.h>
#include <conio.h>
int main(void)
{
	int day, month, year, lday, lmonth, lyear, nday, nmonth, nyear, a;
	printf("Nhap vao ngay thang nam: ");
	scanf_s("%d %d %d", &day, &month, &year);
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		a = 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		a = 30;
		break;
	}
	case 2:
	{
		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			a = 29;
		else
			a = 28;
		break;
	}
	default:
	{
		printf("So lieu nhap vao khong hop le");
	}
	}
	
	if (day == a)
	{
		if (month = 12)
		{
			nday = 1;
			nmonth = 1;
			nyear = year + 1;
		}
		else
		{
			nday = day + 1;
			nmonth = month + 1;
			nyear = year;
		}
	}
	else
	{
		nday = day + 1;
		nmonth = month;
		nyear = year;

	}
	if (day != 1)
	{
		lday = day - 1;
		lmonth = month;
		lyear = year;
	}
	else
	{
		if (month != 1)
		{
			lday = a;
			lmonth = month - 1;
			lyear = year;
		}
		else
		{
			lday = 31;
			lmonth = 12;
			lyear = year - 1;
		}
	}
	printf("Ngay ke tiep la: %d/%d/%d\n", nday, nmonth, nyear);
	printf("Ngay truoc do la: %d/%d/%d\n", lday, lmonth, lyear);
	_getch();
}