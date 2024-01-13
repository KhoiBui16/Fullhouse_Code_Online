// cho mot danh sach gom n sinh vien
// struct sinh vien : id, ten, lop, GPA, dia chi
// Nhap thong tin cho sinh vien
// Hien thi thong tin sinh vien trong danh sach
// Tim kiem sinh vien theo ten
// Liet ke cac sinh vien co diem GPA >=2.5
// Sap xep sinh vien theo GPA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinh_vien{
	long long id;
	char ten[50], lop[20], dia_chi[100];
	float GPA;
};
typedef sinh_vien sinh_vien;

void nhap_1_sinh_vien(sinh_vien &sv)
{
	printf("Nhap ten: "); 
	gets(sv.ten);
	
	printf("Nhap id: "); 
	scanf("%lld",&sv.id);
	getchar();
	
	printf("Nhap lop: "); 
	gets(sv.lop);
	
	printf("Nhap GPA: "); 
	scanf("%f",&sv.GPA);
	getchar();
	
	printf("Nhap dia chi: "); 
	gets(sv.dia_chi);
}

void nhap_danh_sach(sinh_vien sv[], int n)
{
	for(int i = 0;i < n; ++i)
	{
		printf("\nNhap thong tin sinh vien thu %d\n",i + 1);
		nhap_1_sinh_vien(sv[i]);
	}
}

void xuat_1_sinh_vien(sinh_vien sv)
{
	// -s: can le trai, +s: can le phai 
	printf("\n|  %-20s  |  %-10lld  |  %-10s  | %-8.2f  | %-14s|",
	sv.ten,sv.id,sv.lop,sv.GPA,sv.dia_chi);
}

void xuat_danh_sach(sinh_vien sv[], int n)
{
	printf("+-------------------------------- Danh sach sinh vien -----------------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\t Dia chi   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i < n; ++i)
	{
		xuat_1_sinh_vien(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}

void tim_kiem(sinh_vien sv[],int n)
{
	char name[100];
	printf("Nhap ten ban muon tim: ");
	gets(name);
	printf("\n+--------------------------------- Danh sach tim thay -----------------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi    |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i < n; ++i)
	{
		if(strstr(sv[i].ten, name))
		{
			xuat_1_sinh_vien(sv[i]);
		}
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}

void GPA(sinh_vien sv[], int n)
{
	printf("+---------------------------- Cac sinh vien co GPA >=2.5 --------------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i < n; ++i)
	{
		if(sv[i].GPA >= 2.5)
		xuat_1_sinh_vien(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}

void sap_xep_GPA(sinh_vien sv[], int n)
{
	printf("+----------------------- Danh sach sinh vien sau khi sap xep ----------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i < n; ++i)
	{
		for(int j = i + 1; j < n; ++j)
		{
			if(sv[j].GPA > sv[i].GPA)
			{
				sinh_vien tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp;
			}
		}
		xuat_1_sinh_vien(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}

int main(){
	int n,c;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	getchar();
	sinh_vien sv[n];

	// truoc khi chay lai vong while => thuc hien dong lenh system => xoa man hinh
	while(1)
	{
		system("cls");	// xoa man hinh
		printf("    +------------- Menu ----------------+");
		printf("\n    |   1.Nhap danh sach sinh vien      |");
		printf("\n    |   2.Xuat danh sach sinh vien      |");
		printf("\n    |   3.Tim kiem sinh vien            |");
		printf("\n    |   4.Cac sinh vien co GPA >= 2.5   |");
		printf("\n    |   5.Sap xep sinh vien theo GPA    |");
		printf("\n    |   0.Thoat                         |");
		printf("\n    +-----------------------------------+");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		
		if(c == 1)
		{
			nhap_danh_sach(sv, n);
		}
		
		else if(c == 2)
		{
			xuat_danh_sach(sv, n);
			system("pause");
		}
		
		else if(c == 0)
		{
			printf("\nChuong trinh ket thuc!\n");
			break;
		}
		
		else if(c == 3)
		{
			tim_kiem(sv, n);
			system("pause");
		}
		
		else if(c == 4)
		{
			GPA(sv, n);
			system("pause");
		}
		
		else if(c == 5)
		{
			sap_xep_GPA(sv, n);
			system("pause"); // de stop lai man hinh
		}
		
		else
		{
			printf("\nSo ban chon khong thoa man\n");
			system("pause");
		}
	}
}

// bo test
/*
Nguyen Van An
9128721
HGA12
7.8
Ho Chi Minh
Ho The Linh
8374713
AKH88
2.4
Vung Tau
Doan Gia Khang
1265381
WEF21
1.4
Hue
Vu The Anh
1129863
ALD84
6.8
Lam Dong
*/
