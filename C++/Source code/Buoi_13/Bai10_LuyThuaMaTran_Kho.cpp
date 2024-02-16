/*
    C++ Buổi 13_Bài 10.Lũy thừa ma trận.(Khó)
    Cho ma trận A[][] là ma trận vuông cỡ N x N. Hãy tính kết quả A^K và chia dư các phần tử trong ma trận kết quả cho 10^9 + 7
    Dữ liệu vào:
    Dòng đầu tiên chứa 2 số nguyên dương N và K; N dòng tiếp theo là các phần tử trong ma trận A.(1<=N<=10; 1<=K<=10^9; 0<=A[i][j]<=1000)

    Dữ liệu ra:
    In ra ma trận đáp án.

    Ví dụ:
    Dữ liệu vào:
    2 2
    20 13
    14 55

    Dữ liệu ra:
    582 975 
    1050 3207
*/

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

// Hàm tính ma trận đơn vị
vector<vector<int>> identityMatrix(int n)
{
    vector<vector<int>> I(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        I[i][i] = 1;
    }
    return I;
}

// Hàm nhân hai ma trận
vector<vector<int>> multiplyMatrix(vector<vector<int>>& A, vector<vector<int>>& B) 
{
    int n = A.size(); // Kích thước ma trận
    vector<vector<int>> C(n, vector<int>(n)); // Ma trận kết quả

    // Lặp qua từng phần tử của ma trận kết quả
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            // Tính toán giá trị tại (i, j) của ma trận kết quả
            for (int k = 0; k < n; k++) 
            {
                C[i][j] += (A[i][k] % MOD) * (B[k][j] % MOD);
                C[i][j] %= MOD;
            }
        }
    }
    return C; // Trả về bản sao của ma trận kết quả
}

// Hàm tính lũy thừa ma trận A^K

vector<vector<int>> matrixPower(vector<vector<int>>& A, int k) 
{
    if (k == 0) 
    {
        return identityMatrix(A.size());
    }
    if (k % 2 == 0) 
    {
        // Tạo các biến cục bộ để lưu kết quả đệ quy
        vector<vector<int>> result1 = matrixPower(A, k / 2);
        vector<vector<int>> result2 = matrixPower(A, k / 2);
        return multiplyMatrix(result1, result2);
    }
    // Tạo biến cục bộ để lưu kết quả đệ quy
    vector<vector<int>> result = matrixPower(A, k - 1);
    return multiplyMatrix(A, result);
}

int main() 
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> A(n, vector<int>(n));
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> A[i][j];

    vector<vector<int>> result = matrixPower(A, k);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
