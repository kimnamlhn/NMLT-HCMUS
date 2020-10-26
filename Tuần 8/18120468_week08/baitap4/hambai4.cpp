#include "mangmotchieu.h"
#include <stdio.h>
#include <math.h>
int const MAX = 100;

void Nhap(int a[], int &n)
{
	do
	{
		printf("Nhap so nguyen duong n: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > 100);
	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= %d\n", i, a[i]);
	}
}

void Xoaphantu(int a[], int &n, int &i, int &k)
{
	do
	{
		printf("Nhap vi tri bat dau xoa i: ");
		scanf_s("%d", &i);
		printf("Nhap so phan tu can xoa k: ");
		scanf_s("%d", &k);
	} while (n < (i + k));
	for (int x = 1;x <= k;x++)
	{
		a[i] = a[i + k];
		i++;
	}
	n = n - k;
}

void Sapxep(int a[], int n)
{
	int temp;
	for (int i = 0;i < n-1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void Dem(int a[], int n)
{
	int count = 1;
	Sapxep(a, n);
	for (int i = 0;i < n-1;i++)
	{
		if (a[i] != a[i - 1])

			count++;
	}
	printf("So phan tu khac nhau co trong mang la: %d", count);
}

void Demtrongkhoangk(int a[], int n, int k)
{
	printf("Nhap gia tri k: ");
	scanf_s("%d", &k);
	int count = 0;
	for (int i = 1;i <= k;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (a[j] = i)
				count++;
		}
	}
	printf("So phan tu khac nhau co trong mang nam trong doan [1,k] la : %d", count);
}
void Timslthu2(int a[], int n)
{
	int first, second;
	if (a[0] > a[1])
	{
		first = a[0];
		second = a[1];
	}
	else
	{
		first = a[1];
		second = a[0];
	}
	for (int i = 2;i < n;i++)
	{
		if (a[i] > first)
		{
			second = first;
			first = a[i];
		}
		else if (a[i] > second)
			second = a[i];
	}
	printf("So lon thu hai trong mang la: %d", second);
}

int Demsoxuathien(int a[], int n, int x)
{
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] == x)
			count++;
	}
	return count;
}

void PTxhnhieunhat(int a[], int n)
{
	int max = 0;
	int pt, temp;
	for (int i = 0;i < n;i++)
	{
		if (Demsoxuathien(a, n, a[i]) > max)
		{
			max = Demsoxuathien(a, n, a[i]);
			pt = a[i];
		}
	}
	printf("Phan tu xuat hien nhieu nhat trong mang la phan tu: %d ", pt);
}

int Timsominxy(int a[], int n, int &x, int &y)
{
	printf("Nhap doan [x,y] voi x, y la: ");
	scanf_s("%d%d", &x, &y);
	int temp;
	for (;x < y;x++)
	{
		for (int i = 0;i < n;i++)
		{
			if (x == a[i])
				return x;
		}
	}
}

int Tongkptlientiep(int a[], int n, int thutu,int k)
{
	int S = 0;
	for (int i = 1;i <= k;i++)
	{
		S += a[thutu];
		thutu++;
	}
	return S;
}

void Tongkptlientiepmax(int a[], int n, int &k)
{
	printf("Nhap gia tri k: ");
	scanf_s("%d", &k);
	int max = 0;
	for (int i = 0;i < n;i++)
	{
		if (Tongkptlientiep(a, n, i, k) > max)
			max = Tongkptlientiep(a, n, i, k);
	}
	printf("Tong gia tri k phan tu lien tiep trong mot mang lon nhat la: %d", max);
}

void Daonguocmang(int a[], int n)
{
	int temp;
	for (int i = 0;i < n / 2;i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - i - 1] = temp;
	}
	printf("Xuat mang sau khi dao: \n");
	Xuat(a, n);
}	

void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Sapxepchanle(int a[], int n)
{
	Sapxep(a, n);
	int temp1 = 0, temp2 = n - 1;
	for (int i = 0;i < n-1;i++)
	{
		if (a[i] % 2 == 0)
		{
			swap(a[i], a[temp1]);
			temp1++;
		}
		else
		{
			swap(a[i], a[temp2]);
			temp2--;
		}
	}
	printf("Mang sau khi sap xep theo yeu cau la: \n");
	Xuat(a, n);
}

bool Sochinhphuong(int a)
{
	float x;
	x = sqrt(a*1.0);
	if (x*x == a)
		return true;
	else
		return false;
}

void SxSochinhphuong(int a[], int n)
{
	int temp1, temp2;
	for (int i = 0;i < n-1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (Sochinhphuong(a[i]) == true)
				temp1 = a[i];
			if (Sochinhphuong(a[j]) == true)
				temp2 = a[j];
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
	printf("\n");
	Xuat(a, n);
}

bool Songuyento(int a)
{
	int count = 0;
	if (a == 1 || a == 0)
		return false;
	for (int i = 1;i < a;i++)
	{
		if (a%i == 0)
			count++;
	}
	if (count == 1)
		return true;
	else
		return false;
}

void SNTtrongmang(int a[], int n)
{
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (Songuyento(a[i]) == true)
			count++;
	}
	if (count != 0)
		printf("So cac so nguyen to co trong mang la: %d\n", count);
	else printf("Trong mang khong co so nguyen to\n ");
}

void SNTmin(int a[], int n)
{
	int sntmin = 0;
	for (int i = 0;i < n;i++)
	{
		if (Songuyento(a[i]) == true)
		{
			if (a[i] > sntmin)
				sntmin = a[i];
		}
	}
	if (sntmin == 0)
		printf("Trong mang khong co so nguyen to.\n");
	else
		printf("So nguyen to nho nhat trong mang la: %d", sntmin);
	
}


void Soduongmin(int a[], int n)
{
	int min = a[0];
	for (int i = 0;i < n;i++)
	{
		if (a[i] > 0 && a[i] < min)
			min = a[i];
	}
	if (min <= 0)
		printf("Mang khong co so duong.\n");
	else
		printf("So duong nho nhat trong mang la: %d", min);
}

void Soammax(int a[], int n)
{
	int max = a[0];
	for (int i = 0;i < n;i++)
	{
		if (a[i] > max&&a[i] < 0)
			max = a[i];
	}
	if (max >= 0)
		printf("Mang khong co so am.\n");
	else
		printf("So am lon nhat trong mang la: %d", max);
}

bool KTtangdan(int a[], int n)
{
	for (int i = 0;i < n-1;i++)
	{
		if (a[i] > a[i + 1])
			return false;
	}
	return true;
}

void Xuatmangcon(int a[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void Indaycontangday(int a[], int n)
{
	int b[MAX], x;
	for (int i = 0;i < n;i++)
	{
		for (int j = 1;j < n;j++)
		{
			x = 0;
			for (int m = 0;m < n;m++)
			{
				b[x] = a[m];
				x++;
			}
			if (KTtangdan(b, x) == true)
				Xuatmangcon(b, x);

		}
	}
}

