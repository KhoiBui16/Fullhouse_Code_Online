/*
    C++ Buổi 24_Bài 05(OOP).Nhân viên.
    Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

    • Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001

    • Họ tên: Xâu ký tự không quá 40 chữ cái.

    • Giới tính: Nam hoặc Nu

    • Ngày sinh: đúng theo chuẩn dd/mm/yyyy

    • Địa chỉ: Xâu ký tự không quá 100 chữ cái

    • Mã số thuế: Dãy số có đúng 10 chữ số

    • Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy Viết chương trình nhập danh sách nhân viên (không nhập mã) trong đó có sử dụng chồng toán tử nhập/xuất và in ra màn hình danh sách vừa nhập.

    Input Format
    Dòng đầu ghi số N là số nhân viên (không quá 50). Mối nhân viên ghi trên 6 dòng lần lượt ghi các thông tin theo thứ tự đã ghi trong đề bài.(Không có mã nhân viên).

    Output Format
    Ghi ra danh sách đầy đủ nhân viên, mỗi nhân viên trên một dòng, các thông tin cách nhau đúng một khoảng trống. Thông tin nhân viên được chuẩn hóa ngày sinh và ngày kí hợp đồng.

    Ví dụ:
    Dữ liệu vào:
    3
    Pham Van Lam
    Nam
    22/9/1992
    Bien Hoa-Dong Nai
    6144097065
    5/8/2017
    Hoang Nam Ton
    Nam
    7/10/2000
    Dak Lak
    7229064145
    13/11/2019
    Hoang Thi Hau
    Nu
    04/02/1997
    Than Hoa
    7850562313
    22/8/2020

    Dữ liệu ra:
    00001 Pham Van Lam Nam 22/09/1992 Bien Hoa-Dong Nai 6144097065 05/08/2017
    00002 Hoang Nam Ton Nam 07/10/2000 Dak Lak 7229064145 13/11/2019
    00003 Hoang Thi Hau Nu 04/02/1997 Than Hoa 7850562313 22/08/2020
*/
    // Cách 1:
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee
{
    private:
        static int nextEmployeeID;
        string ID;
        string fullname;
        string gender;
        string birth;
        string address;
        string taxID;
        string contractDate;
    public:
        // Constructor
        Employee()
        {
            this->ID = (nextEmployeeID < 10) ? "0000" + to_string(nextEmployeeID) : "000" + to_string(nextEmployeeID);
            nextEmployeeID++;
        }
        // Method
        void enterEmployeeData();
        void displayInfoEmployeeData();
        void convertDate(string&);
};

int Employee::nextEmployeeID = 1;

int main()
{
    int numOfEmployee;
    cin >> numOfEmployee;
    vector<Employee> listEmployee;
    cin.ignore();
    // enter employee data to list of employee
    for (int i = 1; i <= numOfEmployee; i++)
    {
        Employee staff;
        staff.enterEmployeeData();
        listEmployee.push_back(staff);
    }

    // display list of employee's information
    for (Employee staff : listEmployee)
        staff.displayInfoEmployeeData();
    return 0;
}


void Employee::convertDate(string& date)
{
    if (date[1] == '/')
        date.insert(0, "0");
    if (date[4] == '/')
        date.insert(3, "0");
}

void Employee::enterEmployeeData()
{
    getline(cin, this->fullname);
    getline(cin, this->gender);
    getline(cin, this->birth);
    convertDate(this->birth);
    getline(cin, this->address);
    getline(cin, this->taxID);
    getline(cin, this->contractDate);
    convertDate(this->contractDate);
}

void Employee::displayInfoEmployeeData()
{
    cout << this->ID << " " << this->fullname << " " << this->gender << " " << this->birth << " " << this->address << " " << this->taxID << " " << this->contractDate << endl;
}