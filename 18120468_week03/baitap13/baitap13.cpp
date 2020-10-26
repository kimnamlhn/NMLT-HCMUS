#include <stdio.h>
#include <conio.h>
int main(void)
{
	
	for (int i = 2;i <= 9;i++)
	{
		for (int j = 1;j < 10;j++)
		{
			printf("%d * %d= %d\n", i, j, i*j);
		}
	}
	_getch();
}