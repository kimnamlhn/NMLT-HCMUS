#include "thoigian.h"
#include <stdio.h>
#include <conio.h>
void main()
{
	int ngay, thang, nam, ngayTruoc, thangTruoc, namTruoc, ngaySau, thangSau, namSau;
	NhapNgayThangNam(ngay, thang, nam);
	if (LaNgayHopLe(ngay,thang, nam) == true)	
	{
		printf("Ngay thang nam nhap vao la ngay hop le\n");
		int n = ThuTuNgayTrongNam(ngay, thang, nam);
		printf("Thu tu ngay trong nam la: %d\n", n);
		int tuan = ThuTuNgayTrongTuan(ngay, thang, nam);
		printf("Thu tu ngay trong tuan la: %d\n", tuan);
		NgaySau(ngay, thang, nam, ngaySau, thangSau, namSau);
		printf("Ngay tiep theo la: %d/%d/%d\n", ngaySau, thangSau, namSau);
		NgayTruoc(ngay, thang, nam, ngayTruoc, thangTruoc, namTruoc);
		printf("Ngay truoc do la: %d/%d/%d\n", ngayTruoc, thangTruoc, namTruoc);
	}
	else printf("Ngay thang nam nhap vao khong hop le\n");


	_getch();
}