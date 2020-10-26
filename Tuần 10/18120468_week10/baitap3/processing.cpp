#include "header.h"
#include <stdio.h>
#include <string.h>

void Xoa(char str[], int n, int i)
{
	int k = strlen(str);
	for (int j = i;j <= k-n ;j++)
	{
		str[j-1] = str[j - 1 + n];
	}
	str[k-n] = NULL;
	puts(str);
}