#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
	// Bài này liên quan tới giải thuật THAM LAM: Greedy Algorithm  => LIÊN QUAN TỚI VẤN ĐỀ SẮP XẾP CÔNG VIỆC MỘT CÁCH TỐI ƯU
	// Ý tưởng là sắp xếp theo thời gian kết thúc tăng dần => SL đoạn nhiều nhất mà ca sĩ có thể tham gia
	// vì nếu sắp xếp theo g bắt đầu tăng dần thì khi gặp giờ kết thúc quá lớn => chỉ sẽ diễn dc ít show hơn
	// điều kiện để chọn show tiếp theo là thời gian bắt đầu show thứ 2 phải lớn hơn thời gian kết thúc show thứ nhất

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second < b.second)
		return true;
	return false;
}

int main()
{
	// 2 dòng lệnh dưới giúp thòi gian code chạy vector sẽ nhanh hơn
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v;
	// Cách nhập các cặp giờ vào vector bằng cách sử dụng kết hợp với pair
	for (int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;  // a là thời gian bắt đầu, b là thời gian kết thúc
		v.push_back({ a, b });
	}

	// sắp xếp theo thời gian kết thúc tăng dần bằng hàm sort
	sort(v.begin(), v.end(), cmp);
	// nếu không có cmp thì sẽ mặc định sắp xếp theo first tăng dần
	// tạo biến đếm show diễn là cnt = 1 vì luôn có ít nhất 1 show diễn
	// và lưu thời gian kết thúc của show đầu tiên vào biến end
	int cnt = 1;
	int end = v[0].second; 
	// duyệt toàn bộ các show diễn từ 1 đến n => duyệt tới < size vì dùng vector
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i].first > end)
		{
			cnt++;
			// cập nhật lại giờ kết thúc của show trước đó
			end = v[i].second;
		}
	}
	cout << cnt;
	return 0;
}
