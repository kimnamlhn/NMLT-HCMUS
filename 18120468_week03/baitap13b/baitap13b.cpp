#include <stdio.h>
#include <conio.h>
int main(void)
{
	
	int i = 1;
	while (i <= 9)
	{
		int j = 1;
		while (j < 10)
		{
			printf("%d * %d= %d\n", i, j, i*j);
			j++;
		}
		i++;
	}
	
	_getch();
}