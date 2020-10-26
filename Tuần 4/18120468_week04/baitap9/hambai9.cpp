#include "chuyennhiphan.h"
#include <stdio.h>

void chuyennhiphan(int n)
{
	if (n != 0)
	{
		chuyennhiphan(n / 2);
		printf("%d", n % 2);
	}
	else
		printf("0");
}

