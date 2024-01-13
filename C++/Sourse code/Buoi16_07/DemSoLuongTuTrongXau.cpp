/*
	C++ Buổi 16_Bài 07.Đếm số lượng từ trong xâu.
	Cho một xâu S có không quá 1000 kí tự, thực hiện đếm số lượng từ trong xâu.

	Input Format
	Dòng duy nhất chứa xâu có không quá 1000 kí tự.

	Output Format
	Số lượng từ trong xâu.

	Ví dụ:
	Dữ liệu vào:
	Python Java C++ PHP JS   DSA
	Dữ liệu ra:
	6
*/

/*
- stringstream nằm trong thư viện sstream, nó có chức năng biến xâu string của bạn thành luồng (tương tự như luồng vào từ bàn phím là cin).
- Từ đó bạn có thể đọc từng từ trong luồng stringstream ra và xử lý.
	Giải thích mã nguồn :
Ban đầu bạn khai báo 1 biến stringstream và khởi tạo giá trị cho nó bằng nội dung xâu bạn muốn tách từ
Dùng toán tử >> để nhập 1 từ trong luồng stringstream cho biến word,
vòng lặp kia sẽ lặp cho tới khi luồng stringstream của bạn không còn từ nào nữa thì nó sẽ dừng lặp.

Giữa các từ có nhiều dấu cách sẽ được bỏ qua hết,
tương tự như bạn nhập cin từ bàn phím thì số lượng dấu cách giữa các từ không có ý nghĩa.
Trong trường hợp bạn muốn tách theo 1 ký tự khác, ví dụ như là dấu -
thay vì dấu cách như mặc định bạn có thể sử dụng hàm getline(),
hoặc bạn có thể thay cách dấu - thành dấu cách và xử lý như tách từ bằng dấu cách.
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	// stringstream nằm trong thư viện sstream, nó có chức năng biến xâu string của bạn thành luồng(tương tự như luồng vào từ bàn phím là cin).
	// Từ đó bạn có thể đọc từng từ trong luồng stringstream ra và xử lý. Giữa các từ có nhiều dấu cách sẽ được bỏ qua hết,
	stringstream ss(s);
	// TẠO CHUỖI WORD ĐỂ NHẬP CÁC LUỒNG TRONG XÂU TƯƠNG TỰ NHƯ CIN 
	string word;
	int cnt = 0;

	// Toán tử >> để nhập 1 tử trong luồng stringstream cho biến word
	// vòng lặp kia sẽ lặp cho tới khi luồng stringstream của bạn không còn từ nào nữa thì nó sẽ dừng lặp.
	while (ss >> word)
		++cnt;

	cout << cnt;
	return 0;
}