/*
	C++ Buổi 02_Bài 19.Luyện tập viết câu điều kiện.
	Cho một số nguyên không âm N. Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
	1. N có phải là số chẵn?
	2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5?
	3. N có phải là số chia hết 3 nhưng không chia hết cho 7?
	4. N có phải là số chia hết cho 3 hoặc 7?
	5. N là số lớn hơn 30 và nhỏ hơn 50?
	6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5?
	7. N có phải là số có 2 chữ số và có chữ tận cùng là một số nguyên tố?
	8. N có phải là số không vượt quá 100 và chia hết cho 23? 9
	9. N không thuộc đoạn [10, 20]?
	10. N có chữ số tận cùng là bội số của 3?

	Số nguyên dương N.(1 ≤ N ≤ 10^6).
	In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện. 
	Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.

	Dữ liệu vào:
	257
	Dữ liệu ra:
	NO
	NO
	NO
	NO
	NO
	NO
	NO
	NO
	YES
	NO
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	// 1
	if (n % 2 == 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 2
	if (n % 3 == 0 && n % 5 == 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 3
	if (!(n % 3) && n % 7 != 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 4
	if (!(n % 3) || !(n % 7))
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 5
	if (n > 30 && n < 50)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 6
	if (n >= 30 && (!(n % 2) || !(n % 3) || !(n % 5)))
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 7
	int r = n % 10;
	if (n > 9 && n < 100 && (r == 2 || r == 3 || r == 5 || r == 7))
		cout << "YES" << endl;
	else cout << "NO" << endl;
	// 8
	if (n <= 100 && !(n % 23))
		cout << "YES" << endl;
	cout << "NO" << endl;
	// 9
	if (n >= 10 && n <= 20)
		cout << "NO" << endl;
	else cout << "YES" << endl;
	// 19
	int x = n % 10;
	if (x % 3 == 0)
		cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}