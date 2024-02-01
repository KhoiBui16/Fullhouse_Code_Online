/*
    C++ Buổi 18_Bài 02.Số nguyên lớn.
    Cho hai số nguyên lớn N và M có không quá 1000 chữ số. Người ta muốn tính xem liệu có thể lấy ra nhiều nhất bao nhiêu chữ số trong N (không cần liên tiếp) và giữ nguyên thứ tự của nó để tạo ra một số X sao cho ta cũng có thể tìm thấy X trong số M theo cách tương tự.

    Input Format
    Dòng thứ nhất ghi số N, dòng thứ 2 ghi số M.(1<=len(N), len(M) <= 1000)

    Output Format
    In ra số chữ số nhiều nhất có thể của X.

    Ví dụ:
    Dữ liệu vào:
    1235176433
    45412231359760
    Dữ liệu ra:
    6
    Giải thích test mẫu : 6 =>(X = "123576")
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findLargestCommonSubsequence(const string& N, const string& M) {
    int lenN = N.length();
    int lenM = M.length();

    // Tạo một bảng lưu độ dài của dãy con tăng chung
    vector<vector<int>> dp(lenN + 1, vector<int>(lenM + 1, 0));

    // Tính toán độ dài dãy con tăng chung
    for (int i = 1; i <= lenN; ++i) {
        for (int j = 1; j <= lenM; ++j) {
            if (N[i - 1] == M[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    // Kết quả là độ dài của dãy con tăng chung
    return dp[lenN][lenM];
}

int main() {
    string N, M;
    cin >> N >> M;

    int result = findLargestCommonSubsequence(N, M);

    cout << result << endl;

    return 0;
}