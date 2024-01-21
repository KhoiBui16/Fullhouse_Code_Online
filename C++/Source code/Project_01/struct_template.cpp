#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
	string MSSV;
	string hoTen;
	string lop;
	string ngaySinh;
	double gpa;
};
typedef struct SinhVien SINHVIEN;

SINHVIEN Nhap()
{
	SINHVIEN x;
	
	return x;
}

void NhapDs(int n, vector<SINHVIEN> &ds)
{
	for(int i = 1;i <= n;i++)
	{
		SINHVIEN x = Nhap();
		ds.push_back(x);
	}
}

void In(SINHVIEN it)
{
	//cout <<  << << <<  << endl;
}

void InDs(vector<SINHVIEN> &ds)
{
	for(SINHVIEN it : ds)
	{
		In(it);
	}
}

void ChuanHoaNgaySinh(string& s)
{

}

void VietHoa(string &s)
{

}

void ChuanHoaTen(string &s)
{
		
}

void ChuanHoa(int n, vector<SINHVIEN> &ds)
{

}

bool Cmp(SINHVIEN a, SINHVIEN b)
{
	if ()
		return true;
	else
		return false;
}

int main()
{
	vector<SINHVIEN> ds;
	while(1)
	{
		cout << "--------------------------------\n";
		cout << "1.Nhap danh sach sinh vien\n";
		cout << "2.In ra danh sach nhan vien\n";
		cout << "3.Chuan hoa ten va ngay sinh cho sinh vien\n";
		cout << "4.Sap xep sinh vien theo gpa giam dan neu co sv bang diem thi sv nao co MSSV lon xep truoc\n";
		cout << "5.Tim kiem sinh vien theo ten\n";
		cout << "6.Lam email cho tung sinh vien trong he thong\n";
		cout << "7.Tim kiem sinh vien theo ma lop\n";
		cout << "8.Thoat ung dung!\n";
		cout << "--------------------------------\n";
		cout << "Moi Nhap lua chon:";

		int lc; 
		cin >> lc;
		int n;
		if(lc == 1)
		{
			cout << "Moi Nhap so luong sv:";
			cin >> n;
			NhapDs(n,ds);
		}
		else if(lc == 2)
		{
			
		}
		else if(lc == 3)
		{
			
		}
		else if(lc == 4)
		{
			
		}
		else if(lc == 5)
		{
			
		}
		else if(lc == 6)
		{
			
		}
		else if (lc == 7)
		{

		}
		else 
		{

			break;
		}
	}
}

