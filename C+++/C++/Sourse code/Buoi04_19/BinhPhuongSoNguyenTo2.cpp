/*
    C++ Buổi 04_Bài 19.Bình phương số nguyên tố 2.
    Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó.
    Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

    Dữ liệu vào:
    2 số nguyên dương a, b.(1≤a≤b≤10^6).
    Dữ liệu ra:
    In ra các số đẹp trong đoạn từ a tới b.

    Dữ liệu vào:
    4 50
    Dữ liệu ra:
    4 8 9 16 25 27 32 36 49
*/

#include <iostream>
#include <cmath>

using namespace std;

bool CheckNumbers(int);
void OutPut(int, int);

int main() 
{
    int a, b;
    cin >> a >> b;
    OutPut(a, b);
    return 0;
}

bool check(int n) {
    for (int i = 2; i <= sqrt(n); i++)
    {
        int cnt = 0;
        if (!(n % i))
        {
            while (!(n % i))
            {
                cnt++;
                n /= i;
            }
            if (cnt <= 1) return false;
        }
    }
    if (n != 1)
        return false;
    return true;
}

void OutPut(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (CheckNumbers(i))
            cout << i << " ";
    }
}