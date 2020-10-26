#include "mangmotchieu.h"
#include <stdio.h>
#include <conio.h>
const int MAX = 100;
//em lam chung 1 project tat ca cac cau trong bai tap 4 vi ly do kich thuoc file
void main()
{
	int a[MAX];
	int n, i, k, x, y;
	Nhap(a, n);
	Xoaphantu(a, n, i, k);
	Xuat(a, n);//cau a
	Dem(a, n);//cau b
	Demtrongkhoangk(a, n, k);//cau c
	Timslthu2(a, n);//cau d
	PTxhnhieunhat(a, n);//cau e
	printf("So nho nhat trong mang nhung thuoc ve doan [x,y] la: %d", Timsominxy(a, n, x, y));
	//cau f
	Tongkptlientiepmax(a, n, k);//cau g
	Daonguocmang(a, n);//cau h
	Sapxepchanle(a, n); //cau i
	SxSochinhphuong(a, n);//cau j
	SNTtrongmang(a, n);//cau o
	SNTmin(a, n);//cau p
	Soduongmin(a, n);
	Soammax(a, n);//cau n
	Indaycontangday(a, n);//cau m
	_getch();
}

