/*
    C++ Buổi 04_Bài 11.Goldbach conjecture.
    heo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố. 
    Cho số nguyên dương chẵn N >=4 . 
    Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N. Ví dụ N = 4 ta có 1 cặp số nguyên tố là 2 + 2 = 4.

    Dữ liệu vào:
    Đầu vào là một số chẵn N.(4≤N≤1000000).
    Dữ liệu ra:
    Đưa ra kết quả mỗi test theo từng dòng, mỗi dòng là một cặp số thỏa mãn. 
    Chú ý mỗi cặp chỉ liệt kê một lần, không xét đến thứ tự.

    Dữ liệu vào:
    10
    Dữ liệu ra:
    3 7
    5 5
*/

#include<iostream>
#define ll long long

using namespace std;

bool snt(int);

int main()
{
    int n;
    cin >> n;
    for (ll i = 2; i + i <= n; i++)
        if (snt(i) && snt(n - i)) cout << i << " " << n - i << '\n';
    return 0;
}

bool snt(int m)
{
    if (m < 2) return false;
    for (ll i = 2; i * i <= m; i++)
        if (m % i == 0) return false;
    return true;
}