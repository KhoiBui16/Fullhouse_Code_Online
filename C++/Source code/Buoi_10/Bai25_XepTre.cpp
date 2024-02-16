/*
    C++ Buổi 10_Bài 25.Xếp Trẻ.
    Có n đứa trẻ muốn đi đu quay, và nhiệm vụ của bạn là tìm một chiếc thuyền gondola cho mỗi đứa trẻ. Mỗi chiếc gondola có thể có một hoặc hai người trong đó và ngoài ra, tổng trọng lượng của một chiếc gondola không được vượt quá x. Bạn biết cân nặng của mọi đứa trẻ. Số lượng thuyền gondola tối thiểu cần thiết cho trẻ em là bao nhiêu?

    Input Format
    Dòng nhập đầu tiên chứa hai số nguyên n và x: số đứa trẻ và trọng lượng tối đa cho phép. Dòng tiếp theo chứa n số nguyên p1, p2,…, pn: trọng lượng của mỗi đứa trẻ. (1≤ n ≤2.10^5; 1≤ x ≤10^9; 1≤ pi ≤ x)

    Output Format
    In ra số lượng thuyền gondola tối thiểu.

    Ví dụ:
    Dữ liệu vào:
    5 5
    3 2 4 3 1
    Dữ liệu ra:
    3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long x;
    cin >> n >> x;
    
    vector<long> p(n);
    for (long& it: p)
        cin >> it;

    sort(p.begin(), p.end());
    int cnt = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            i++; j--;
            cnt++;
        }
        else
        {
            j--;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}