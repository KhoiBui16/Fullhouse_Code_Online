#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<long> tickets(n);
    for (long& x : tickets)
        cin >> x;
    
    sort(tickets.begin(), tickets.end());
    for (int i = 0; i < m; i++)
    {
        long maxPrices;
        cin >> maxPrices;

        vector<long>::iterator it = upper_bound(tickets.begin(), tickets.end(), maxPrices);
        if (it == tickets.begin()) // nếu vị trí vé có giá lớn hơn giá của người dùng đưa ở vị trí ban đầu -> không có vé nào phù hợp
            cout << -1 << endl;
        else
        {
            cout << *(--it) << endl;
            tickets.erase(it); // Xóa vé đã mua (it-- trả về giá trị của it trước khi xóa, sau đó mới xóa it)
        }
    }
    return 0;
}