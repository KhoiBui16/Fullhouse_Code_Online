/*
    C++ Buổi 10_Bài 23.Đèn Lồng.
    Vanya đi bộ vào ban đêm dọc theo một con đường thẳng dài có độ dài l, được thắp sáng bởi N chiếc đèn lồng. Xét hệ trục tọa độ với điểm đầu của đường phố tương ứng với điểm 0 và điểm cuối của nó tương ứng với điểm l. Khi đó đèn lồng thứ i ở điểm ai. Đèn lồng chiếu sáng tất cả các điểm trên đường phố cách nó nhiều nhất là d, trong đó d là một số dương, chung cho tất cả các đèn lồng. Vanya tự hỏi: bán kính ánh sáng tối thiểu d mà những chiếc đèn lồng phải có để thắp sáng cả con phố?

    Input Format
    Dòng đầu tiên chứa hai số nguyên N, l (1 ≤ N ≤ 10^5, 1 ≤ l ≤ 10^9) - số lượng đèn lồng và chiều dài đường phố tương ứng. Dòng tiếp theo chứa n số nguyên a[i] (0 ≤ a[i] ≤ l). Nhiều đèn lồng có thể được đặt tại cùng một điểm. Đèn lồng có thể nằm ở cuối phố.

    Output Format
    In bán kính ánh sáng tối thiểu d, cần thiết để chiếu sáng cả đường phố. In ra kết quả với độ chính xác là 10 số sau dấu phây.

    Ví dụ:
    Dữ liệu vào:
    5 9
    1 6 9 3 2
    Dữ liệu ra:
    1.5000000000
*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long length;
    cin >> length;

    vector<long> a(n);
    for (long& x : a)
        cin >> x;
    
    sort(a.begin(), a.end());
    long max_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_distance = max(max_distance, a[i + 1] - a[i]);
    }
    float d = max_distance * 1.0 / 2;
    cout << fixed << setprecision(10) << d;

    return 0;
}