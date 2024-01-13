/*
   C++ Buổi 04_Bài 01.Luyện tập viết hàm.

   Cho số nguyên n không âm. Viết hàm xử lý các yêu cầu sau:

    1. Kiểm tra n là số nguyên tố, nếu đúng in 1, sai in 0.

    2. In tổng chữ số của n.

    3. In tổng chữ số chẵn của n.

    4. In tổng chữ số của n là số nguyên tố.

    5. In số lật ngược của n. Ví dụ 123 in 321.

    6. In số lượng ước riêng biệt của n là số nguyên tố (làm tương tự như phân tích thừa số ng tố).

    7. In ước nguyên tố lớn nhất của n (làm tương tự như phân tích thừa số ng tố).

    8. Kiểm tra nếu n tồn tại ít nhất 1 số 6, nếu đúng in 1, sai in 0.

    9. Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in 1, sai in 0.

    10. Tính tổng giai thừa các chữ số của n và in ra. Ví dụ n = 123, tổng = 1! + 2! +3!

    11. Kiểm tra n có phải chỉ được tạo bởi 1 số hay không? Ví dụ 222, 333, 99999. Đúng in ra 1, sai in ra 0.

    12. Kiểm tra n có phải có chữ số tận cùng là lớn nhất hay không, 
    tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó. nếu đúng in 1, sai in 0.

    13. In tổng lũy thừa chữ số của n với cơ số là số chữ số. ví dụ 123 thì tính 1^3+2^3+3^3.

    Dữ liệu vào:
    Số duy nhất n.(2 ≤ n ≤ 10^5).
    Dữ liệu ra:
    In ra 13 dòng tương ứng với các yêu cầu ở trên.

    Dữ liệu vào:
    37
    Dữ liệu ra:
    1
    10
    0
    10
    73
    1
    37
    0
    0
    5046
    0
    1
    58
*/

#include <iostream>
#include <cmath>
using namespace std;

bool checkPrimeNum(int); // 1.
int sumDigits(int); // 2.
int sumEvenDigits(int); // 3.
int sumPrimeDigtis(int); // 4.
int reverseDigits(int); // 5.
int primeFactorNum(int); // 6.
int largestFactorNum(int); // 7.
bool checkDigits(int); // 8.
bool checkSumDigits(int); // 9;
long long giaiThua(int);
long long sumFactorialNum(int); // 10.
bool checkSameDigits(int); // 11.
bool checkMaxLastDigits(int); //12.
long long sumPowerDigits(int); // 13.

int main()
{
    int n;
    cin >> n;

    // 1. Kiểm tra n là số nguyên tố, nếu đúng in 1, sai in 0.
    if (checkPrimeNum(n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    // 2. In tổng chữ số của n.
    cout << sumDigits(n) << endl;
    // 3. In tổng chữ số chẵn của n.
    cout << sumEvenDigits(n) << endl;
    // 4. In tổng chữ số của n là số nguyên tố.
    cout << sumPrimeDigtis(n) << endl;
    // 5. In số lật ngược của n. Ví dụ 123 in 321.
    cout << reverseDigits(n) << endl;
    // 6. In số lượng ước riêng biệt của n là số nguyên tố (làm tương tự như phân tích thừa số ng tố).
    cout << primeFactorNum(n) << endl;
    // 7. In ước nguyên tố lớn nhất của n (làm tương tự như phân tích thừa số ng tố).
    cout << largestFactorNum(n) << endl;
    // 8.Kiểm tra nếu n tồn tại ít nhất 1 số 6, nếu đúng in 1, sai in 0
    if (checkDigits(n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    // 9. Kiểm tra nếu tổng chữ số của n chia hết cho 8, nếu đúng in 1, sai in 0.
    if (checkSumDigits(n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    // 10. Tính tổng giai thừa các chữ số của n và in ra. Ví dụ n = 123, tổng = 1! + 2! +3!
    cout << sumFactorialNum(n) << endl;
    // 11. Kiểm tra n có phải chỉ được tạo bởi 1 số hay không? Ví dụ 222, 333, 99999. Đúng in ra 1, sai in ra 0.
    if (checkSameDigits(n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    // 12. ểm tra n có phải có chữ số tận cùng là lớn nhất hay không, tức là không có chữ số nào của n lớn hơn chữ số hàng đơn vị của nó. nếu đúng in 1, sai in 0.
    if (checkMaxLastDigits(n))
        cout << "1" << endl;
    else
        cout << "0" << endl;
    // 13. In tổng lũy thừa chữ số của n với cơ số là số chữ số. ví dụ 123 thì tính 1^3+2^3+3^3.
    cout << sumPowerDigits(n);
    return 0;
}

// 1.
bool checkPrimeNum(int x)
{
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0) return false;
    return true;
}
// 2.
int sumDigits(int x)
{
    long sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
// 3.
int sumEvenDigits(int x)
{
    long sum1 = 0;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            sum1 += x % 10;
        }
        x /= 10;
    }
    return sum1;
}
// 4.
int sumPrimeDigtis(int x)
{
    long sum2 = 0;
    while (x > 0)
    {
        int dv = x % 10;
        if (dv == 2 || dv == 3 || dv == 5 || dv == 7)
            sum2 += dv;
        x /= 10;
    }
    return sum2;
}
// 5.
int reverseDigits(int x)
{
    int rev = 0;
    while (x > 0)
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}
// 6.
int primeFactorNum(int x)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
        {
            while (x % i == 0)
                x /= i;
            cnt++;
        }
    }
    if (x != 1)
        cnt++;
    return cnt;
}
// 7.
int largestFactorNum(int x)
{
    int result = 1;
    for (int i = 2; i <= sqrt(x); ++i)
    {
        if (x % i == 0)
        {
            result = i;
            while (x % i == 0)
                x /= i;
        }
    }
    if (x != 1) result = x;
    return result;
}
// 8.
bool checkDigits(int x)
{
    while (x > 0)
    {
        int dv = x % 10;
        if (dv == 6)
            return true;
        x /= 10;
    }
    return false;
}
// 9.
bool checkSumDigits(int x)
{
    int sum = 0;
    while (x > 0)
    {
        sum += x % 10;
        x /= 10;
    }
    if (sum % 8 == 0)
        return true;
    return false;
}
long long giaiThua(int x)
{
    long long result = 1;
    for (int i = 1; i <= x; ++i)
        result *= i;
    return result;
}
// 10.
long long sumFactorialNum(int x)
{
    long ans = 0;
    while (x > 0)
    {
        ans += giaiThua(x % 10);
        x /= 10;
    }
    return ans;
}
// 11.
bool checkSameDigits(int x)
{
    int dv1 = x % 10;
    while (x)
    {
        int dv2 = x % 10;
        if (dv2 != dv1) return false;
        x /= 10;
    }
    return true;
}
// 12.
bool checkMaxLastDigits(int x)
{
    int dv = x % 10;
    while (x > 0)
    {
        int dv2 = x % 10;
        if (dv2 > dv) return false;
        x /= 10;
    }
    return true;
}
// 13.
long long sumPowerDigits(int x)
{
    int temp = x;
    int count = 0;
    while (x > 0)
    {
        x /= 10;
        count++;
    }
    long sum = 0;
    while (temp > 0)
    {
        sum += (int)pow(temp % 10, count);
        temp /= 10;
    }
    return sum;
}