/*
    C++ Buổi 10_Bài 22.Vắt sữa bò.
    Vào một buổi sáng anh Bo sắp một đàn bò gồm n con bò để vắt sữa. Anh dự kiến là vào sáng hôm đó, con bò thứ i có khả năng sẽ vắt được ai lít sữa. Tuy nhiên đàn bò của anh có đặc tính là cứ mỗi lần vắt sữa một con, những con còn lại trông thấy sợ quá nên sẽ bị giảm sản lượng mỗi con 01 lít sữa. Nếu vắt sữa con bò thứ nhất, n-1 con còn lại bị giảm sản lượng. Sau đó vắt sữa con bò thứ hai thì n-2 con còn lại bị giảm sản lượng.... Bạn hãy giúp anh Bo tính xem thứ tự vắt sữa bò như thế nào để số lượng sữa vắt được là nhiều nhất nhé.

    Input Format
    Dòng thứ nhất là số nguyên n (1 ≤ n ≤ 10^5) là số lượng con bò.Dòng thứ hai gồm n số nguyên a1, a2,..., an (1 ≤ ai ≤ 10^6) là sản lượng sữa của các con bò.

    Output Format
    Số lít sữa nhiều nhất mà anh Bo có thể vắt được.

    Ví dụ:
    Dữ liệu vào:
    4
    4 4 7 4
    Dữ liệu ra:
    13
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (long long& x : a)
        cin >> x;

    sort(a.begin(), a.end());

    long long max_milk_product = 0;
    long long count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > count)
        {
            max_milk_product += a[i] - count;
            count++;
        }
    }
    cout << max_milk_product;

    return 0;
}

// Duyệt từ phần tử cuối ngược trở lại giúp tối đa hóa lượng sữa vắt được trong bài toán vắt sữa bò.