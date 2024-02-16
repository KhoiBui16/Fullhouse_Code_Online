/*
    C++ Buổi 10_Bài 26.Hòa Nhạc.
    Có n vé xem hòa nhạc có sẵn, mỗi vé có một mức giá nhất định. Sau đó, m khách hàng lần lượt đến. Mỗi khách hàng thông báo mức giá tối đa mà họ sẵn sàng trả cho một vé và sau đó, họ sẽ nhận được một vé với mức giá gần nhất có thể sao cho không vượt quá mức giá tối đa.

    Input Format
    Dòng đầu tiên chứa các số nguyên n và m: số lượng vé và số lượng khách hàng. Dòng tiếp theo ghi n số nguyên h1, h2,…, hn: giá của từng vé. Dòng cuối cùng chứa m số nguyên t1, t2,…, tm: giá tối đa cho mỗi khách hàng theo thứ tự họ đến. (1≤ n, m ≤2.10^5; 1≤ ti, hi ≤10^9)

    Output Format
    In, cho mỗi khách hàng, giá mà họ sẽ trả cho vé của họ. Sau đó, vé không thể được mua lại lần nữa. Nếu khách hàng không lấy được vé nào, hãy in −1.

    Ví dụ:
    Dữ liệu vào:
    6 4
    3 4 5 7 9 6
    3 5 8 3
    Dữ liệu ra:
    3
    5
    7
    -1
*/

// Cách 2:

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    multiset<long> tickets;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        tickets.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        long maxPrice;
        cin >> maxPrice;
        auto it = tickets.upper_bound(maxPrice);

        if (it == tickets.begin())
            cout << -1 << endl;
        else
        {
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}