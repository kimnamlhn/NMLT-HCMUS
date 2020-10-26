#include "header.h"
#include <stdio.h>
#include <string.h>

int DemXuatHien(char str[], char c)
{
	int n = strlen(str);
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (str[i] == c)
			count++;
	}
	return count;
}