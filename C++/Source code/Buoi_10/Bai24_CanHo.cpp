/*
    C++ Buổi 10_Bài 24.Căn Hộ.
    Có n người nộp đơn và m căn hộ miễn phí. Nhiệm vụ của bạn là phân phối các căn hộ sao cho càng nhiều người đăng ký sẽ nhận được căn hộ càng tốt. Mỗi người nộp đơn có một kích thước căn hộ mong muốn, và họ sẽ chấp nhận bất kỳ căn hộ nào có diện tích đủ gần với kích thước mong muốn.

    Input Format
    Dòng nhập đầu tiên có ba số nguyên n, m và k: số người đăng ký, số căn hộ và chênh lệch tối đa cho phép. Dòng tiếp theo chứa n số nguyên a1, a2,…, an: diện tích căn hộ mong muốn của mỗi người đăng ký. Nếu kích thước mong muốn của người nộp đơn là x, người đó sẽ chấp nhận bất kỳ căn hộ nào có kích thước từ x-k đến x + k. Dòng cuối cùng ghi m số nguyên b1, b2,…, bm: diện tích từng căn hộ.(1≤ n, m ≤10^5 0≤ k ≤10^9 1≤ai, bi ≤10^9)

    Output Format
    In một số nguyên: số người nộp đơn sẽ nhận được một căn hộ.

    Ví dụ:
    Dữ liệu vào:
    5 4 3
    40 66 184 19 24
    45 63 18 26
    Dữ liệu ra:
    3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long k;
    cin >> k;
    vector<long> a(n), b(m);

    for (long& x: a)
        cin >> x;
    for (long& it: b)
        cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (b[j] < a[i] - k)
            j++;
        if (b[j] <= a[i] + k && j < m)
        {
            cnt++;
            j++;
        }
    }
    cout << cnt;
    
    return 0;
}