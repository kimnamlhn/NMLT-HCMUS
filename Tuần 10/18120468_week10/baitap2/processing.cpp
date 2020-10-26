#include "header.h"
#include <stdio.h>
#include <string.h>

int Demsocacso(int n)
{
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
void ChuanHoaSo(char str[], int n)
{
	int k = Demsocacso(n);
	int temp;
	str[k] = '\0';
	for (int i = k - 1;i <= 0;i++)
	{
		temp = n % 10;
		n /= 10;
		str[i] = temp;
	}
	printf("Xuat ra so theo dang chuoi  ");
	for (int i = 0;i < k;i++)
	{
		printf("%s", str[i]);
	}
}