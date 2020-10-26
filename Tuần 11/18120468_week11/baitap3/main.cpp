#include "header.h"
#include <stdio.h>
#include <conio.h>
const int max = 200;
void main()
{
	HS array[max];
	int n;
	StudentInput(array, n);
	StudentOutput(array, n);
	_getch();
}