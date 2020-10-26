#include <stdio.h>

#include <conio.h>
int main(void)
{
	double M, m, n, q;
	printf("Nhap vao so tien gui= \n");
	scanf_s("%lf", &M);
	printf("Nhap so thang gui tien= \n");
	scanf_s("%lf", &n);
	printf("Nhap lai suat ngan hang= \n");
	scanf_s("%lf", &q);
	m = M;
	for (int i = 0; i < n; i++)
	{
		M = (M + M * (q/100));
	}
	M = M - m;
	printf("Tong tien lai thu duoc la= %.2lf\n", M);

	_getch();
}