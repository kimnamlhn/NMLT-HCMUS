#include "header.h"
#include <stdio.h>
#include <string.h>

int Dem(char str[], int n)
{
	int k = strlen(str);
	int count = 0, temp = 0;
	for (int i = 0;i < k;i++)
	{
		if (str[i] == ' '|| str[i]== NULL) 
		{
			if (temp > n)
				count++;
			temp = 0;
		}
		temp++;
	}
	return count;
}