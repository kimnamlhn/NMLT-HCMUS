#include "thoigian.h"
#include <stdio.h>

void NhapNgayThangNam(int &ngay, int &thang, int &nam)
{
	printf("Nhap vao ngay thang nam: ");
	scanf_s("%d%d%d", &ngay, &thang, &nam);
}

bool LaNgayHopLe(int ngay, int thang, int nam)
{
	if (thang == 2)
	{
		if (ngay == 29)
		{
			if (LaNamNhuan(nam) == true)
				return true;
			else return false;
		}
		else
		{
			if (ngay >= 1 && ngay <= 28)
				return true;
			else return false;
		}
	}
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		if (ngay >= 1 && ngay <= 31)
			return true;
		else return false;
	}
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		if (ngay >= 1 && ngay <= 30)
			return true;
		else return false;
	}
}

bool LaNamNhuan(int nam)
{
	if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0))
		return true;
	return false;

}

int ThuTuNgayTrongNam(int ngay, int thang, int nam)
{
	int n = 0;
	for (int i = 1;i < thang;i++)
	{
		switch (i)
		{
			case 2:
		{
				if (LaNamNhuan(nam) == true)
				n += 29;
				else n += 28;
				break;
		}
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			{
				n += 31;
				break;
			}
			case 4: case 6: case 9: case 11:
			{
				n += 30;
				break;
			}
		}
	}
	n += ngay;
	return n;
}

int ThuTuNgayTrongTuan(int ngay, int thang, int nam)
{
	//cho ngay 1/1 la thu 2 
	int n = ThuTuNgayTrongNam(ngay, thang, nam);
	int k = n % 7;
	switch (k)
	{
	case 0:
		return 1;
	case 1:
		return 2;
	case 2:
		return 3;
	case 3:
		return 4;
	case 4:
		return 5;
	case 5:
		return 6;
	case 6:
		return 7;
	
	}
}

void NgaySau(int ngay, int thang, int nam, int &ngaySau, int &thangSau, int &namSau)
{
	int temp;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		temp = 31;
		break;
	}
	case 2: 
	{
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
			temp = 29;
		else temp=28;
	}
	case 4: case 6: case 9: case 11:
	{
		temp = 30;
	}
	}
	if (ngay == temp)
	{
		if (thang == 12)
		{
			ngaySau = 1;
			thangSau = 1;
			namSau = nam + 1;
		}
		else
		{
			ngaySau = 1;
			thangSau = thang + 1;
			namSau = nam;
		}
	}
	else
	{
		ngaySau = ngay + 1;
		thangSau = thang;
		namSau = nam;
	}

}

void NgayTruoc(int ngay, int thang, int nam, int &ngayTruoc, int &thangTruoc, int &namTruoc)
{
	int temp;
	switch (thang-1)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		temp = 31;
		break;
	}
	case 2:
	{
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
			temp = 29;
		else temp = 28;
	}
	case 4: case 6: case 9: case 11:
	{
		temp = 30;
	}
	}
	if (ngay == 1)
	{
		if (thang == 1)
		{
			ngayTruoc = 31;
			thangTruoc = 12;
			namTruoc = nam;
		}
		else
		{
			ngayTruoc = temp;
			thangTruoc = thang - 1;
			namTruoc = nam;
		}
	}
	else
	{
		ngayTruoc = ngay - 1;
		thangTruoc = thang;
		namTruoc = nam;
	}
	
}
