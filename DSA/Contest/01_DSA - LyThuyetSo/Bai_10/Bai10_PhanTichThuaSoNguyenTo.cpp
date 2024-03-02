#include<iostream>
#include <cmath>

using namespace std;

void PTThuaSoNguyenTo(long long);

int main()
{
    long long n;
    cin >> n;
    if (n == 1)
    {
        cout << "1^1";
        return 0;
    }
    PTThuaSoNguyenTo(n);
    return 0;
}

void PTThuaSoNguyenTo(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            long long cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << i << "^" << cnt << " ";
            if (n != 1)
                cout << "* ";
        }
    }    
    if (n != 1)
        cout << n << "^1";
}