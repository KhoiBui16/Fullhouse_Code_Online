/*
    C++ Buổi 13_Bài 07.Dãy con tăng dài nhất
    Cho mảng số nguyên A[] gồm N phần tử, hãy tìm dãy con (không nhất thiết các phần tử phải liên tiếp) tăng chặt dài nhất của mảng A.

    Dữ liệu vào:
    Dòng đầu tiên là N; Dòng thứ 2 gồm N phần tử của mảng A(1<=N<=1000; 1<=A[i]<=1000)

    Dữ liệu ra:
    In ra độ dài của dãy con tăng dài nhất.

    Ví dụ:
    Dữ liệu vào:
    7
    1 2 7 4 5 6 3
    Dữ liệu ra:
    5
*/

#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    

    // Tạo mảng `dp` lưu trữ độ dài dãy con tăng dài nhất kết thúc tại mỗi phần tử
    vector<int> dp(n);
    for (int i = 0; i < n; i++) 
        dp[i] = 1;
    

    // Duyệt qua từng phần tử trong mảng
    for (int i = 1; i < n; i++) 
    {
        // Duyệt qua các phần tử trước đó
        for (int j = 0; j < i; j++) 
        {
            // Nếu phần tử hiện tại lớn hơn phần tử trước đó
            if (a[i] > a[j]) 
            {
                // Cập nhật độ dài dãy con tăng dài nhất kết thúc tại phần tử hiện tại
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

  // Tìm độ dài dãy con tăng dài nhất
    int lis = 0;
    for (int i = 0; i < n; i++) {
        lis = max(lis, dp[i]);
    }

    // In ra độ dài dãy con tăng dài nhất
    cout << lis << endl;

    return 0;
}
