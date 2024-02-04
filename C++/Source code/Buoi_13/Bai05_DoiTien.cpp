/*
    C++ Buổi 13_Bài 05.Đổi Tiền.
    Ngân hàng MB hiện có N tờ tiền có mệnh giá khác nhau được lưu vào mảng C[], bạn hãy tìm cách đổi số tiền là S sao cho số tờ tiền cần dùng là ít nhất. Bạn được sử dụng một mệnh giá không giới hạn số lần.

    Dữ liệu vào:
    Dòng đầu tiên chứa 2 số N và S; Dòng thứ 2 chưa N số là mệnh giá các tờ tiền.(1<=N<=100; 1<=S<=10^6; 1<=C[i]<=10^6)

    Dữ liệu ra:
    In ra số tờ tiền nhỏ nhất cần đổi. Nếu không thể đổi được số tiền đúng bằng S thì in ra -1.

    Ví dụ:
    Dữ liệu vào:
    5 13
    5 11 10 4 3
    Dữ liệu ra:
    2
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// dùng phương pháp quy hoạch động

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];
    // tạo mảng dp để lưu số tiền tối thiểu cần để đổi mỗi số tiền từ 0 đến s
    int dp[s + 1]; 
    // khởi tạo trường hợp cơ sở khi tổng tiền s = 0
    dp[0] = 0;
    for (int i = 1; i <= s; i++) // duyệt các tờ tiền có giá trị từ 1 -> s
    {
        // khỏi tạo 1 lượng tiền tối thiểu là 1 số lớn
        dp[i] = 999999999;

        // với mỗi mênh giá tờ tiền
        for (int j = 0; j < n; j++)
        {
            if (c[j] <= i)
                // cập nhật lại số tờ tiền tối thiểu cần để đổi số tiền i
                dp[i] = min(1 + dp[i - c[j]], dp[i]);
        }
    }

    if (dp[s] == 999999999)
        cout << -1;
    else
        cout << dp[s];
    
    return 0;
}