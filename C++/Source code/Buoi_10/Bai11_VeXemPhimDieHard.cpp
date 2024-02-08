/*
    C++ Buổi 10_Bài 11.Vé Xem Phim Die Hard.
    Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 100, 50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé theo đúng thứ tự mọi người trong hàng không?

    Input Format
    Dòng đầu tiên chứa số nguyên n:số người trong hàng. Dòng tiếp theo chứa n số nguyên, mỗi số bằng 25, 50 hoặc 100 - giá trị của các tờ tiền mà mọi người có.(1≤n≤10^6)

    Output Format
    In YES nếu người bán hàng có thể bán và trả tiền thừa cho mọi người trong hàng, ngược lại in NO.

    Ví dụ:
    Dữ liệu vào:
    5
    25 25 50 25 100
    Dữ liệu ra:
    YES
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int currentMoney[100] = {0};
    int guess; // tiền khách trả
    bool check = true;

    for (int i = 0; i < n; i++)
    {
        cin >> guess;
        currentMoney[guess]++; // số tờ tiền hiện có tăng thêm tờ khách đưa
        int paid = guess - 25; // tiền thừa cần trả lại
        int value = 100; // xét từ tờ 100 (tờ to trả trước)

        while (value >= 25)
        {
            int count = paid / value; // đếm số tờ tiền mệnh giá value cần trả lại
            if (count <= currentMoney[value])
            {
                paid -= count * value; // trừ số tiền đã trả lại
                currentMoney[value] -= count; // số tờ còn lại trừ đi số tờ đã trả
            }
            else
            {
                paid -= currentMoney[value] * value;
                currentMoney[value] = 0;
            }
            value /= 2;
        }

        if (paid > 0)
            check = false;
    }

    cout << (check ? "YES" : "NO");
    return 0;
}
