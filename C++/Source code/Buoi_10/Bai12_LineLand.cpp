/*
    C++ Buổi 10_Bài 12.Lineland.
    Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi thành phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố được đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có thể gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. Đối với mỗi thành phố, hãy tính hai giá trị mini và maxi, trong đó mini là chi phí tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi phí tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác.

    Input Format
    Dòng đầu tiên là số nguyên dương n(2 ≤ n ≤ 10^6) Dòng thứ hai chứa chuỗi n số nguyên khác nhau x1, x2, ..., xn (-10^9<= xi <=10^9), trong đó xi là tọa độ x của thành phố thứ i. Tất cả các xi là khác biệt và theo thứ tự tăng dần.

    Output Format
    Đối với mỗi thành phố in ra 2 giá trị mini và maxi trên 1 dòng.

    Ví dụ:
    Dữ liệu vào:
    4
    -5 -2 2 7

    Dữ liệu ra:
    3 12
    3 9
    4 7
    5 12
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    long min_cost, max_cost;
    cin >> n;
    long arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            min_cost = arr[1] - arr[0];
            max_cost = arr[n - 1] - arr[0];
        }
        else if (i == (n - 1))
        {
            min_cost = arr[n - 1] - arr[n - 2];
            max_cost = arr[n - 1] - arr[0];
        }
        else
        {
            min_cost = arr[i] - arr[i - 1];
            if (arr[i + 1] - arr[i] < min_cost)
                min_cost = arr[i + 1] - arr[i];

            max_cost = arr[n - 1] - arr[i];
            if (arr[i] - arr[0] > max_cost)
                max_cost = arr[i] - arr[0];
        }

        cout << min_cost << " " << max_cost << endl;
    }
    
    return 0;
}