/*
    C++ Buổi 13_Bài 02.Maximum sub array.
    Cho dãy số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng của dãy con có tổng lớn nhất.Ví dị cho mảng A[]={-2,-5,6,-2,-3,1,5,-6} ta có output bằng 7 tương ứng với dãy con {6,-2,-3,1,5}

    Dữ liệu vào:
    Dòng đầu tiên chứa số nguyên dương N; Dòng thứ 2 chứa N số nguyên của dãy A[].(1<=N<=10^5; 1<=abs(A[i])<=10^6)

    Dữ liệu ra:
    In ra đáp án của bài toán.

    Ví dụ:
    Dữ liệu vào:
    8
    -2 -5 6 -2 -3 1 5 -6
    Dữ liệu ra:
    7
    
*/


#include <iostream>
#include <algorithm>
using namespace std;
/*  Cách duyệt mảng con nhưng thòi gian chạy lâu O(n^3)
long long maxSubarraySum(int* arr, int n)
{
    int maxSubArr = arr[0];
    for (int start_pos = 0; start_pos < n; start_pos ++)
    {
        for (int quantity = 1; quantity + start_pos <= n; quantity++)
        {
            int sum = 0;
            /// ---- vòng for này để duyệt các mảng con
            for (int i = start_pos; i <= start_pos + quantity - 1; i++)
            {
                sum += arr[i];
            }
            if (sum > maxSubArr)
                maxSubArr = sum;
        }
    }
    return maxSubArr;
}
*/

int maxSubarraySum(int* arr, int n) // Độ phúc tạp O(n)
{
    /// dùng Kadane's Algorithm
    /// Ý tưởng: Tìm tổng lớn nhất kết thúc tại mỗi vị trí trong mảng.
    /// Cập nhật tổng lớn nhất tổng thể trong quá trình tìm ki
    int total_max = arr[0];
    int current_max = arr[0];

    for (int i = 0; i < n; i++)
    {
        current_max = max(arr[i], arr[i] + current_max);
        total_max = max(total_max, current_max);
    }

    return total_max;
}

// Cách 3: xài duplicated array độ phức tập O(n^2)
long long maxSubarraySum(int arr[], int n) {
    int prefixSum[n];
    prefixSum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    long long maxSum = arr[0];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long subarraySum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
            maxSum = max(maxSum, subarraySum);
        }
    }

    return maxSum;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int res = maxSubarraySum(arr, n);    

    cout << res;
    return 0;
}

/*
    Giải thích từng bước:

1. Lặp qua các vị trí bắt đầu:

Duyệt qua từng phần tử trong mảng (arr[i]) để làm vị trí bắt đầu của mảng con.
2. Lặp qua độ dài mảng con:

Cho mỗi vị trí bắt đầu, lặp qua các độ dài (quantity) từ 1 đến n - start_pos.
3. Tính tổng mảng con:

Sử dụng vòng lặp for để tính tổng các phần tử trong mảng con được xác định bởi vị trí bắt đầu và độ dài.
4. Cập nhật tổng lớn nhất:

So sánh tổng của mảng con hiện tại với tổng lớn nhất (maxSubArr).
Cập nhật maxSubArr nếu tìm thấy mảng con có tổng lớn hơn.
5. Trả về kết quả:

Sau khi duyệt qua tất cả các mảng con, maxSubArr sẽ chứa giá trị tổng lớn nhất của mảng con.
Độ phức tạp:

Vòng lặp for đầu tiên chạy n lần.
Vòng lặp for thứ hai chạy n lần cho mỗi lần lặp của vòng lặp đầu tiên.
Vòng lặp for thứ ba chạy quantity lần cho mỗi lần lặp của vòng lặp thứ hai.
Do đó, độ phức tạp thời gian tổng thể là O(n * n * quantity) = O(n^3).
Nhược điểm:

Cách tiếp cận này có độ phức tạp thời gian cao, không hiệu quả cho mảng lớn.
Không thể áp dụng cho các trường hợp cần xử lý thời gian thực.
Ưu điểm:

Đơn giản và dễ hiểu.
Có thể áp dụng cho mọi trường hợp.
Ngoài ra, bạn có thể tham khảo thêm các cách tiếp cận khác để tính tổng mảng con có độ phức tạp thấp hơn:

Kadane's Algorithm: O(n)
Mảng cộng dồn: O(n^2)
*/