#include <iostream>
#include <vector>

using namespace std;

long long mod = (long long)(1e9 + 7);

/*Xử lý việc nhân 2 ma trận trả về một ma trận*/
vector<vector<long long>> multiMatrix(vector<vector<long long>> a, vector<vector<long long>>b) {
	int m = a.size(); // Lấy chiều dài 1 cạnh của ma trận, do các ma trận mà ma trận vuông cùng kích thước nên ta chỉ cần 1 độ dài 1 cạnh là đủ
	vector<vector<long long>> c(m, std::vector<long long>(m)); // Khởi tạo ma trận kết quả
	for (int i = 0; i < m; i++) // Nhân ma trận
	{
		for (int j = 0; j < m; j++)
		{
			c[i][j] = 0; // Đưa phần tử của ma trận kết quả về 0
			for (int k = 0; k < m; k++) // Cộng đáp án vào kết quả
			{
				//c[i][j] += a[i][k] * b[k][j];
				c[i][j] += (a[i][k] % mod) * (b[k][j] % mod);
				c[i][j] %= mod;
			}
		}
	}
	return c;
}

/*Tính lũy thừa bằng lũy thừa nhị phân*/
vector<vector<long long>> powMatrix(vector<vector<long long>> a, int _pow) {
	if (_pow == 1) {
		return a;
	}
	else {
		vector<vector<long long>> x = powMatrix(a, _pow / 2);
		if (_pow % 2 == 0) {
			return multiMatrix(x,x);
		}
		else if (_pow % 2 == 1) {
			return multiMatrix(multiMatrix(x, x), a);
		}
	}
}

int main() {

	/*Nhập ma trận*/
	int n; cin >> n;
	vector<vector<long long>> a;
	int _pow; cin >> _pow;
	for (int i = 0; i < n; i++) {
		vector<long long> row;
		for (int j = 0; j < n; j++) {
			long long value; cin >> value;
			row.push_back(value);
		}
		a.push_back(row);
	}
	/*Xử lý kết quả*/
	auto result = powMatrix(a, _pow);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

}