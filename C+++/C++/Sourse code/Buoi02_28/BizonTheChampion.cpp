/*
	C++ Buổi 02_Bài 28.Bizon the Champion.
	Bizon the Champion được gọi là Champion vì một lý do. 
	Bizon the Champion gần đây đã có một món quà - một tủ kính mới với n kệ và anh quyết định đặt tất cả những món quà của mình ở đó. 
	Tất cả các món quà có thể được chia thành hai loại: 
		huy chương và cúp. 
	Bizon the Champion có 
		a1 cúp giải nhất, 
		a2 cúp giải nhì và 
		a3 cúp giải ba. 
	Bên cạnh đó, anh có 
		b1 huy chương giải nhất, 
		b2 huy chương giải nhì và 
		b3 huy chương giải ba. 
	Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp, 
	đó là lý do Bizon the Champion quyết định tuân theo các quy tắc: 
		bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc; 
		không có kệ có thể chứa nhiều hơn năm cúp; 
		không có kệ có thể có hơn mười huy chương. 
	Giúp Bizon the Champion tìm hiểu xem chúng tôi có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

	Input Format:
		Dòng đầu tiên chứa các số nguyên a1, a2 và a3.
		Dòng thứ hai chứa các số nguyên b1, b2 và b3.
		Dòng thứ ba chứa số nguyên n. Các số trong các dòng được phân tách bằng khoảng trắng đơn.
		(0 ≤ a1, a2, a3, b1, b2, b3 <= 100; 1 <= n <= 100)
	Output Format:
		In "YES" (không có dấu ngoặc kép) 
		nếu tất cả các phần thưởng có thể được đưa lên kệ theo cách được mô tả. 
		Nếu không, hãy in "NO" (không có dấu ngoặc kép).

	Dữ liệu vào:
	5 5 5 10 15 25
	15
	Dữ liệu ra:
	YES
*/	

#include <iostream>

using namespace std;

// cong thuc làm tròn lên 1 don vi: 

int main()
{
	int n;
	int a1, a2, a3;
	int b1, b2, b3;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	int tong_huy_chuong = a1 + a2 + a3;
	int tong_cup = b1 + b2 + b3;
	int so_ke_toi_thieu_dat_huy_chuong = tong_huy_chuong / 5;
	if (tong_huy_chuong % 5 != 0) 
		so_ke_toi_thieu_dat_huy_chuong += 1;

	int so_ke_toi_thieu_dat_cup = tong_cup / 10;
	if (tong_cup % 10 != 0)
		so_ke_toi_thieu_dat_cup += 1;

	if ((so_ke_toi_thieu_dat_huy_chuong + so_ke_toi_thieu_dat_cup) <= n)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}