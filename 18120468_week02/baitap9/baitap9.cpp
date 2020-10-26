#include <stdio.h>
#include <conio.h>
int main(void)
{
	int day, month, year;
	printf("Nhap vao thang va nam: ");
	scanf_s("%d %d", &month, &year);
		switch (month)
		{
		case 1:
		{
			day = 31 ;
			break;
		}
		case 2:
		{
			if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			day = 29;
			else
		    day = 28;
			break;
		}
		case 3:
		{
			day = 31;
			break;
		}
		case 4: 
		{
			day = 30;
			break;
		}
		case 5:
		{ 
			day = 31;
			break;
		}
		case 6: 
		{
			day = 30;
			break;
		}
		case 7: 
		{
			day = 31;
			break;
		}
		case 8: 
		{
			day = 31;
			break;
		}
		case 9: 
		{
			day = 30;
			break;
		}
		case 10: 
		{
			day = 31;
			break;
		}
		case 11:
		{
			day = 30;
			break;
		}
		case 12: 
		{
			day = 31;
			break;
		}
		default:
		{
			printf("Du lieu nhap vao khong hop le");
		}
		}
		printf("Thang %d nam %d co %d ngay ", month, year, day);
	
	_getch();

}