/*
    C++ Buổi 10_Bài 16.Khiêu vũ.
    Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2, ..., an. Các bạn nữ có chiều cao là b1, b2, ..., bm. Nhân dịp lễ tổng kết cuối năm, cả lớp dự định tổ chức buổi khiêu vũ nhưng có điều kiện là trong một đôi khiêu vũ bất kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia quá 1 đôi khiêu vũ. Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.

    Input Format
    Gồm 3 dòng: - Dòng thứ nhất là hai số n, m mỗi số cách nhau một khoảng trắng. - Dòng thứ hai gồm n số nguyên a1, a2, ..., an là chiều cao các bạn nam. - Dòng thứ ba gồm m số nguyên b1, b2, ..., bm là chiều cao các bạn nữ. (1<=n,m<=10^5; 1<=a[i],b[i]<=10^6)

    Output Format
    In ra số lượng cặp khiêu vũ nhiều nhất ghép được.

    Ví dụ:
    Dữ liệu vào:
    5 5
    4 5 1 3 2
    6 2 2 3 1
    Dữ liệu ra:
    4

    Giải thích: Có thể ghép 4 cặp như sau: (4,1), (5,2), (3,2), (2,1).
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort (b, b + m);

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[res])
            res++;
    }

    cout << res;
    return 0;
}