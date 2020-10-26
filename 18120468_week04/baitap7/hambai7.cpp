#include "nhapvatimbcnn.h"
#include <stdio.h>

int Nhapsoduong()
{
	int a;
	do
	{
		printf("Nhap so nguyen duong: ");
		scanf_s("%d", &a);
	} while (a <= 0);
	return a;
}

void TimBCNN (int a, int b)
{
	int i = a;
	for (;;i++)
	{
		if ((i%a == 0) && (i%b == 0))
			break;

	}
	printf("Boi chung nho nhat cua hai so a va b la: %d", i);

}
