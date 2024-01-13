/*
	C++ Buổi 10_Bài 19.Xếp lịch diễn.
	Ca sĩ nổi tiếng Le Roi vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. 
	Đoàn thứ i mời lưu diễn từ ngày ai đến ngày bi (ai, bi là các số nguyên, ai ≤ bi). 
	Tuy nhiên tại một thời điểm, Le Roi chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. 
	Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất,Le Roi quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. 
	Bạn hãy tính thử xem Le Roi nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.

	Input Format
	Dòng thứ nhất là số nguyên n là số đoàn ca nhạc. 
	Trong n dòng tiếp theo, dòng thứ i gồm hai số ai, bi cách nhau một khoảng trắng là ngày bắt đầu và ngày kết thúc lưu diễn của đoàn thứ i. (1<=n<=10^5; 1<=ai<=bi<=10^6)

	Output Format
	Số nguyên xác định số lượng đoàn nhiều nhất mà Le Roi có thể tham gia.

	Dữ liệu vào:
	5
	2 4
	4 6
	5 7
	8 10
	9 10
	Dữ liệu ra:
	3
*/

// Bài này liên quan tới giải thuật THAM LAM: Greedy Algorithm  => LIÊN QUAN TỚI VẤN ĐỀ SẮP XẾP CÔNG VIỆC MỘT CÁCH TỐI ƯU
// Ý tưởng là sắp xếp theo thời gian kết thúc tăng dần => SL đoạn nhiều nhất mà ca sĩ có thể tham gia
// vì nếu sắp xếp theo g bắt đầu tăng dần thì khi gặp giờ kết thúc quá lớn => chỉ sẽ diễn dc ít show hơn
// điều kiện để chọn show tiếp theo là thời gian bắt đầu show thứ 2 phải lớn hơn thời gian kết thúc show thứ nhất

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int>, pair<int, int>);

int main()
{
	// 2 dòng lệnh dưới giúp thòi gian code chạy vector sẽ nhanh hơn
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	// Nhập các phần tử vô vector
	for (int i = 1; i <= n; i++)
	{
		// 2 biến a và b tương ứng với ngày bắt đầu và ngày kết thúc
		int a, b;
		cin >> a >> b;
		v.push_back({ a, b });
	}
	// sắp xếp lại vector theo thứ tự tăng dần của ngày kết thúc
	sort(v.begin(), v.end(), cmp);
	int cnt = 1;
	int end = v[0].second;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].first > end)
		{
			cnt++;
			end = v[i].second;
		}
	}
	cout << cnt;
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second < b.second)
		return true;
	return false;
}