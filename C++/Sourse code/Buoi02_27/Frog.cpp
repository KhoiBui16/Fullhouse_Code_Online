/*
	C++ Buổi 02_Bài 27.Frog.
	Một con ếch hiện đang ở điểm 0 trên trục tọa độ Ox. 
	Nó nhảy theo thuật toán sau: 
		bước nhảy thứ nhất là a đơn vị về bên phải, 
		bước nhảy thứ hai là b đơn vị về bên trái, 
		bước nhảy thứ ba là a đơn vị bên phải, 
		bước nhảy thứ tư là b đơn vị bên trái, v.v. .
	Nếu con ếch đã nhảy một số lần chẵn (trước lần nhảy hiện tại), 
		nó nhảy từ vị trí hiện tại x sang vị trí x + a, mặt khác, 
		nó nhảy từ vị trí hiện tại x sang vị trí x − b. 
	Nhiệm vụ của bạn là tính toán vị trí của ếch sau k bước nhảy.
	Input Format
	3 số nguyên trên cùng một dòng tương ứng a,b,k.(1 ≤ a,b,k ≤ 10^9).
	Output Format
	Vị trí của con ếch sau k bước nhảy.

	Dữ liệu vào:
	3 5 8
	Dữ liệu ra:
	-8
*/

#include <iostream>

using namespace std;

int main()
{
	long long a, b, k;
	cin >> a >> b >> k;
	if (k % 2 == 0) 
		cout << (k / 2) * (a - b);
	else 
		cout << (k / 2 + 1) * a - b * (k / 2);
	return 0;
}