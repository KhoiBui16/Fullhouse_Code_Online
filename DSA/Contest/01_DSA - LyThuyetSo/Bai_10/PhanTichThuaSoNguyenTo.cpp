#include<iostream>
#include <cmath>
using namespace std;

void PTThuaSoNguyenTo(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            long long mu = 0;
            while (n % i == 0)
            {
                mu++;
                n /= i;
            }
            cout << i << "^" << cnt;
            if (n != 1)
                cout << " * ";
        }
    }    
    if (n != 1)
        cout << n << "^1";
}

int main()
{
    long long n;
    cin >> n;
    PTThuaSoNguyenTo(n);
    return 0;
}
