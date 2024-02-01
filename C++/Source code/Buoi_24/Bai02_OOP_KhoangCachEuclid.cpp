/*/
    C++ Buổi 24_Bài 02(OOP).Khoảng cách Euclid.
    Xây dựng lớp để tính Euclid giữa 2 điểm trên hệ tọa độ Oxy theo thiết kế dưới đây:
    Input Format
    Đầu vào là 4 số thực lần lượt x1, y1, x2, y2.(-10^6<=x1,y1,x2,x2<=10^6)

    Output Format
    In ra khoảng cách giữa 2 điểm với độ chính xác là 4 chữ số phần thập phân.

    Ví dụ:
    Dữ liệu vào:
    3 2 4 3
    Dữ liệu ra:
    1.4142
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

class Point
{   
    private:
        double x;
        double y;
    
    public: 
        // constructor
        Point(double defaultX = 0, double defaultY = 0) : x(defaultX), y(defaultY) {}

        // getter and setter for x
        double getX() const { return x; }
        void setX(double newX) { this->x = newX; }    

        // getter and setter for y
        double getY() const { return y; }
        void setY(double newY) { this->y = newY; }

        // method
        double calculateDistanceTo(Point&);

        // Object-to-String Conversion
        string toString();
};


int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point A(x1, y1), B(x2, y2);

    cout << fixed << setprecision(4) << A.calculateDistanceTo(B) << endl;
    return 0;
}

