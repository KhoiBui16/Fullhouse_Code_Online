/*
    C++ Buổi 24_Bài 06(OOP).Nhân viên 2.
    Một nhân viên làm việc trong công ty được lưu lại các thông tin sau:

    Mã nhân viên: được gán tự động tăng, bắt đầu từ 00001.
    Họ tên: Xâu ký tự không quá 40 chữ cái.
    Giới tính: Nam hoặc Nu.
    Ngày sinh: đúng theo chuẩn dd/mm/yyyy.
    Địa chỉ: Xâu ký tự không quá 100 chữ cái.
    Mã số thuế: Dãy số có đúng 10 chữ số.
    Ngày ký hợp đồng: đúng theo chuẩn dd/mm/yyyy.
    Viết chương trình nhập danh sách nhân viên (không nhập mã) sau đó sắp xếp theo thứ tự ngày sinh từ già nhất đến trẻ nhất và in ra màn hình danh sách đối tượng nhân viên đã sắp xếp. Nếu có 2 nhân viên có cùng ngày sinh thì nhân viên có mã sinh viên nhỏ hơn sẽ được xếp trước.

    Input Format
    Dòng đầu ghi số N là số nhân viên (không quá 40). Mỗi nhân viên ghi trên 6 dòng lần lượt ghi các thông tin theo thứ tự đã ghi trong đề bài. Không có mã nhân viên. Thông tin về ngày sinh và ngày kí hợp đồng được chuẩn hóa.

    Output Format
    Ghi ra danh sách đầy đủ nhân viên đã sắp xếp, mỗi nhân viên trên một dòng, các thông tin cách nhau đúng một khoảng trống.

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
    00003 Hoang Thi Hau Nu 04/02/1997 Than Hoa 7850562313 22/08/2020
    00002 Hoang Nam Ton Nam 07/10/2000 Dak Lak 7229064145 13/11/2019

*/

    // Cách 2:
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
        Employee(string& employee_name, string& employee_gender, string& employee_birth, string& employee_location, string& employee_taxCode, string& employee_contraceDate) : fullname(employee_name), gender(employee_gender), birth(employee_birth), address(employee_location), taxID(employee_taxCode), contractDate(employee_contraceDate)
        {
            this->ID = (nextEmployeeID <= 9) ? "0000" + to_string(nextEmployeeID) : "000" + to_string(nextEmployeeID);
            nextEmployeeID++;
            convertDate(birth);
            convertDate(contractDate);
        }
        // method   
        void displayInfoEmployeeData();
        void convertDate(string& date);
        string getID() const { return this->ID; }
        string getBirth() const { return this->birth; }
};

int Employee::nextEmployeeID = 1;
void sortEmployeeBirth(vector<Employee>&);

int main()
{
    int numOfEmployee;
    cin >> numOfEmployee;
    vector<Employee> listEmployee;
    cin.ignore();
    // enter employee data to list of employee
    for (int i = 1; i <= numOfEmployee; i++)
    {
        string employee_name, employee_gender, employee_birth, employee_location, employee_taxCode, employee_contraceDate;

        getline(cin, employee_name);
        getline(cin, employee_gender);
        getline(cin, employee_birth);
        getline(cin, employee_location);
        getline(cin, employee_taxCode);
        getline(cin, employee_contraceDate);

        Employee staff(employee_name, employee_gender, employee_birth, employee_location, employee_taxCode, employee_contraceDate);
        listEmployee.push_back(staff);
    }

     // sort list of employee by birth
    sortEmployeeBirth(listEmployee);

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


void Employee::displayInfoEmployeeData()
{
    cout << this->ID << " " << this->fullname << " " << this->gender << " " << this->birth << " " << this->address << " " << this->taxID << " " << this->contractDate << endl;
}

void sortEmployeeBirth(vector<Employee>& listEmployee)
{
    sort(listEmployee.begin(), listEmployee.end(), [](Employee& a, Employee& b)
    {
        string birthDateA = a.getBirth().substr(6) + a.getBirth().substr(3, 2) + a.getBirth().substr(0, 2);
        string birthDateB = b.getBirth().substr(6) + b.getBirth().substr(3, 2) + b.getBirth().substr(0, 2);
        if (a.getBirth() != b.getBirth())
            return birthDateA < birthDateB;
        else
            return a.getID() < b.getID();
    });
}