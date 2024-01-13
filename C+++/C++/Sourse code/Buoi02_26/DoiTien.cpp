/*
	C++ Buổi 02_Bài 26.Đổi tiền.
	A có rất nhiều tiền. Anh ta có n đô la trong ngân hàng. 
	ì lý do bảo mật, anh ta muốn rút tiền mặt (chúng tôi sẽ không tiết lộ lý do tại đây). 
	Các mệnh giá cho tờ đô la là 1, 5, 10, 20, 100. 
	Số tờ tiền tối thiểu mà A có thể nhận được sau khi rút toàn bộ số dư của mình là bao nhiêu?
	Input Format
	Số nguyên dương n(1 ≤ n ≤ 10^9).
	Output Format
	In ra số tờ tiền tối thiểu để rút được n đô la.

	Dữ liệu vào:
	200
	Dữ liệu ra:	
	2
*/

// 2.26

#include <iostream>

using namespace std;

int main()
{
	int a[5] = { 100, 20, 10, 5, 1 };
	long n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		cnt += n / a[i];
		n %= a[i];
	}
	cout << cnt;
	return 0;
}