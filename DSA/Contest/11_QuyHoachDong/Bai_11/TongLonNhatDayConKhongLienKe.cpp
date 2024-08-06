#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll maxSumOfSubArr(vector<ll>&dp, vector<int> a)
{
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for (int i = 2; i < a.size(); i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    return dp[a.size() - 1];
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<ll> dp(n, 0);
    cout << maxSumOfSubArr(dp, a);
    return 0;
}

/*
Để giải thích rõ hơn về cách áp dụng công thức dp[i] = max(dp[i - 1], dp[i - 2] + a[i])
trong bài toán này, chúng ta sẽ đi qua từng trường hợp và cung cấp ví dụ minh họa để dễ hiểu hơn.

Các trường hợp cần xét:

Ban đầu, ta khởi tạo dp[0] = a[0], tức là chỉ có một phần tử đầu tiên trong dãy con.
dp[1] được tính toán như max(a[0], a[1]). Lý do là vì khi chỉ có hai phần tử a[0] và a[1],
ta cần chọn giá trị lớn nhất để đảm bảo rằng không có hai phần tử liền kề trong dãy con.

Không bao gồm a[i]:
Trong trường hợp này, dp[i] chỉ lấy giá trị của dp[i - 1].
Điều này có nghĩa là không bao gồm phần tử a[i] vào dãy con để đảm bảo không có hai phần tử liền kề nhau.
Ví dụ: Nếu dp[i - 1] đã là tổng lớn nhất của dãy con kết thúc tại i - 1, thì dp[i] sẽ giữ nguyên giá trị này.

Bao gồm a[i]:
Trường hợp này xảy ra khi a[i] được bao gồm vào dãy con để tạo ra tổng lớn nhất,
điều kiện là không được bao gồm a[i - 1] (vì không có hai phần tử liền kề nhau).
Để tính dp[i] trong trường hợp này, ta sẽ cộng giá trị của a[i] với dp[i - 2].
Lý do là dp[i - 2] đại diện cho tổng lớn nhất của dãy con kết thúc tại i - 2, mà không bao gồm a[i - 1].

Ví dụ minh họa:
Giả sử có mảng a và dp như sau:
Mảng a: [2, 7, 9, 3, 1, 5]

Mảng dp ban đầu: [0, 0, 0, 0, 0, 0]
Bước 0 (Khởi tạo):

dp[0] = a[0] = 2
dp[1] = max(a[0], a[1]) = max(2, 7) = 7
=> dp sau bước này: [2, 7, 0, 0, 0, 0]

Bước 1:
Tại i = 2:
Không bao gồm a[2] (9): dp[2] = dp[1] = 7
Bao gồm a[2] (9): dp[2] = dp[0] + a[2] = 2 + 9 = 11
=> dp[2] được chọn là 11 vì lớn hơn 7
=> dp sau bước này: [2, 7, 11, 0, 0, 0]

Bước 2:
Tại i = 3:
Không bao gồm a[3] (3): dp[3] = dp[2] = 11
Bao gồm a[3] (3): dp[3] = dp[1] + a[3] = 7 + 3 = 10
=> dp[3] được chọn là 11 vì lớn hơn 10
=> dp sau bước này: [2, 7, 11, 11, 0, 0]

Bước 3:
Tại i = 4:
Không bao gồm a[4] (1): dp[4] = dp[3] = 11
Bao gồm a[4] (1): dp[4] = dp[2] + a[4] = 11 + 1 = 12
=> dp[4] được chọn là 12 vì lớn hơn 11
=> dp sau bước này: [2, 7, 11, 11, 12, 0]

Bước 4:
Tại i = 5:
Không bao gồm a[5] (5): dp[5] = dp[4] = 12
Bao gồm a[5] (5): dp[5] = dp[3] + a[5] = 11 + 5 = 16
=> dp[5] được chọn là 16 vì lớn hơn 12
=> dp sau bước này: [2, 7, 11, 11, 12, 16]

Kết quả cuối cùng:
    Tổng lớn nhất của dãy con không có hai phần tử liền kề nhau trong mảng a là dp[5] = 16.

Đây là cách công thức dp[i] = max(dp[i - 1], dp[i - 2] + a[i]) được áp dụng để giải quyết bài toán.
Mỗi bước lặp, ta cập nhật dp[i] dựa trên hai trường hợp đã nêu, đảm bảo rằng ta luôn có tổng lớn nhất của dãy con không có hai phần tử liền kề nhau.

*/
