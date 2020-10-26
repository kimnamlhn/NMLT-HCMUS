#include "header.h"	
#include <stdio.h>
#include<string.h>
void Ghepchuoi(char s1[], char s2[], int i)
{
	int m = strlen(s1), n = strlen(s2);
	char s3[100];
	int l = n - i - 1;
	for (int k = 0;k < l;k++)
	{
		s3[k] = s1[i];
		i++;
	}
	s3[m + l] = NULL;
	for (int k = 0;k < n;k++)
	{
		s1[i] = s2[k];
	}
	s1[m + n] = NULL;
	strcat(s1, s3);
	puts(s1);
}