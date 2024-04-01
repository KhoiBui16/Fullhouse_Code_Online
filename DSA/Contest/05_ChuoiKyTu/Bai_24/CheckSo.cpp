#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) 
        if (n % i == 0) return false;
    return true;
}

bool checkBeautyNum(string num)
{
    long long sum = 0;
    for (vector<string>::size_type i = 0; i < num.size(); i++) // hoac la int i
    {
        if (num[i] != '2' && num[i] != '3' && num[i] != '5' && num[i] != '7')
            return false;
        else sum += (num[i] - '0');
    }
    return isPrime(sum);
}

int main()
{
    string str;
    cin >> str;
    if (checkBeautyNum(str)) cout << "YES";
    else cout << "NO";
        
    return 0;
}