#include <stdio.h>
#include <conio.h>
int main(void)
{
	int i = 0;
	while (i <= 255)
	{
		printf("%d tuong duong %c\n", i, i);
		i++;
	}
	_getch();
}