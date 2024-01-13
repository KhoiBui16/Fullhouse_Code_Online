/*
	C++ Buổi 02_Bài 16.Tổ hợp chập 2.
	Trong lớp có n sinh viên, muốn chọn ra 2 bạn sinh viên để tham gia cuộc thi đánh cầu, hỏi có bao nhiêu cách?
	Số lượng sinh viên trong lớp N.(1 ≤ N ≤ 10^6).
	Dữ liệu vào:
	6
	Dữ liệu ra:
	15
*/
#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long nC2 = ((n - 1) * n) / 2;
	cout << nC2;
	return 0;
}