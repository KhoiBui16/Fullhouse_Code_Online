#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
	string MSSV;
	string HoTen;
	string Lop;
	string NgaySinh;
	double GPA;
};
typedef struct SinhVien SINHVIEN;

SINHVIEN Nhap();
void NhapDs(int, vector<SINHVIEN> &);
void In(SINHVIEN);
void InDs(vector<SINHVIEN>&);
void ChuanHoaNgaySinh(string&);
void VietHoa(string&);
void ChuanHoaTen(string&);
void ChuanHoa(int, vector<SINHVIEN>&);
bool Cmp(SINHVIEN&, SINHVIEN&);
void SearchName(int, vector<SINHVIEN>&);
void VietThuong(string&);
void MakeEmailSV(int, vector<SINHVIEN>&);
void SearchIdClass(int, vector<SINHVIEN>&);

int main()
{
	vector<SINHVIEN> ds;
	while(1)
	{
        cout << "\n";
		cout << "* ----------------------------------------DANH SACH QUAN LY SINH VIEN---------------------------------- *\n";
		cout << "|\t1. Nhap danh sach sinh vien.\t\t\t\t\t\t\t\t\t|\n";
		cout << "|\t2. In ra danh sach nhan vien.\t\t\t\t\t\t\t\t\t|\n";
		cout << "|\t3. Chuan hoa ten va ngay sinh cho sinh vien.\t\t\t\t\t\t\t|\n";
		cout << "|\t4. Sap xep sinh vien theo gpa giam dan neu co sv bang diem thi sv nao co MSSV lon xep truoc.\t|\n";
		cout << "|\t5. Tim kiem sinh vien theo ten.\t\t\t\t\t\t\t\t\t|\n";
		cout << "|\t6. Lam email cho tung sinh vien trong he thong.\t\t\t\t\t\t\t|\n";
		cout << "|\t7. Tim kiem sinh vien theo ma lop.\t\t\t\t\t\t\t\t|\n";
		cout << "|\t8. Thoat ung dung!\t\t\t\t\t\t\t\t\t\t|\n";
		cout << "* ----------------------------------------------------------------------------------------------------- *\n";
		cout << "Moi nhap lua chon: ";

		int Lenh; 
		cin >> Lenh;
		int n;
		switch(Lenh)
		{
			case 1:
				cout << "Moi nhap so luong sv  : ";
				cin >> n;
            	cin.ignore();
				NhapDs(n,ds);
				break;
			case 2:
				InDs(ds);
				break;
			case 3:
				ChuanHoa(n, ds);
				InDs(ds);
				break;
			case 4:
				sort(ds.begin(), ds.end(), Cmp);
				InDs(ds);
				break;
			case 5:
				SearchName(n, ds);
				break;
			case 6:
				MakeEmailSV(n, ds);
				break;
			case 7:
				SearchIdClass(n, ds);
				break;
			default:
				break;
		}
		if (Lenh == 8)
		{
			cout << "______________________" << endl;
			cout << "Ket thuc chuong trinh.";
			break;
		}
	}
}

SINHVIEN Nhap()
{
	SINHVIEN x;
	cout << "Nhap MSSV             : ";
    getline(cin, x.MSSV);
    cout << "Nhap ho ten sinh vien : ";
    getline(cin, x.HoTen);
    cout << "Nhap lop hoc          : ";
    getline(cin, x.Lop);
    cout << "Nhap ngay sinh        : ";
	getline(cin, x.NgaySinh);
    cout << "Nhap diem GPA hien tai: ";
	do 
	{
		cin >> x.GPA;
	}
	while (x.GPA < 0 || x.GPA > 10);
    cin.ignore();
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
	cout << "________________________________________________________________________________________________________" << endl;
cout << it.MSSV << "\t\t" << it.HoTen << "\t\t\t" << it.Lop << "\t\t" << it.NgaySinh << "\t\t" << fixed << setprecision(1) << it.GPA << endl;
}

void InDs(vector<SINHVIEN> &ds)
{
	for(SINHVIEN it : ds)
    {
		In(it);
	}
}

void ChuanHoaNgaySinh(string &s)
{
    if (s[1] == '/')
        s.insert(0, "0");
    if (s[4] == '/')
        s.insert(3, "0");
}

void VietHoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
        s[i] = tolower(s[i]);
}

void ChuanHoaTen(string &s)
{
	string Ten = s;
    s = "";
    stringstream ss(Ten);
    string word;
    while (ss >> word)
    {
        VietHoa(word);
        s += word;
        s += " ";
    }
    s.erase(s.length() - 1, 1);
}

void ChuanHoa(int n, vector<SINHVIEN> &ds)
{
	for (int i = 0; i < ds.size(); i++)
    {
        ChuanHoaTen(ds[i].HoTen);
        ChuanHoaNgaySinh(ds[i].NgaySinh);
    }
}

bool Cmp(SINHVIEN &a, SINHVIEN &b)
{
    if (a.GPA != b.GPA)
        return a.GPA > b.GPA;
    if (a.GPA == b.GPA)
		return a.MSSV > b.MSSV;
}

void SearchName(int n, vector<SINHVIEN> &ds)
{
	cin.ignore();
	cout << "Moi nhap ten can tim: ";
	string TenCanTim;
	getline(cin, TenCanTim);
	int flag = 0;

	for (SINHVIEN &x : ds)
	{
		vector<string> v;
		stringstream ss(x.HoTen);
		string word;
		while (ss >> word)
			v.push_back(word);

		string name = v[v.size() - 1];
		if (TenCanTim == name)
		{
			In(x);
			flag = 1;
		}
		
	}
	if (flag == 0)
	{
		cout << "_____________________________" << endl;
		cout << "Khong tim thay ten sinh vien." << endl;
	}
}

void VietThuong(string& s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
}

void MakeEmailSV(int n, vector<SINHVIEN>& ds)
{
	cout << "Email sinh vien: " << endl;
	cout << "___________________" << endl;
	for (SINHVIEN x : ds)
	{
		string email = "";
		string Gmail = "@gmail.com";
		vector<string> v;
		VietThuong(x.HoTen);
		stringstream ss(x.HoTen);
		string word;
		while (ss >> word)
			v.push_back(word);

		string name = v[v.size() - 1];
		email += name;
		for (int i = 0; i < v.size() - 1; i++)
			email += v[i][0];
		email += Gmail;
		cout << email << endl;
	}
}

void SearchIdClass(int n, vector<SINHVIEN> &ds)
{
	cin.ignore();
	cout << "Nhap ma lop can tim: ";
	string MaLopCanTim;
	getline(cin, MaLopCanTim);
	int flag = 0;

	for (SINHVIEN &x : ds)
	{
		if (MaLopCanTim == x.Lop)
		{
			In(x);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		cout << "_____________________" << endl;
		cout << "Khong tim thay ma lop" << endl;
	}
}