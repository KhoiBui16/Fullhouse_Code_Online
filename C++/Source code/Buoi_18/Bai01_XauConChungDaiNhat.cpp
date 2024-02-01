/*
    C++ Buổi 18_Bài 01.Xâu con chung dài nhất
    Cho 2 xâu kí tự S và T, hãy tìm xâu con chung dài nhất của S và T. Các kí tự của xâu con không nhất thiết phải liền kề nhau.

    Input Format
    Dòng đầu tiên là xâu S; Dòng thứ 2 là xâu T;(S và T chỉ gồm các chữ cái in hoa và có độ dài không quá 1000)

    Output Format
    In ra độ dài xâu con chung dài nhất của S và T

    Ví dụ:
    Dữ liệu vào:
    AEYABCGWAK
    AEUTUEBC
    Dữ liệu ra:
    4

    Giải thích test mẫu : 4 => (AEBC)
*/

 // Xài kỹ thuật quy hoạt động
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    // Độ phức tạp O(n^2)
    int len1 = s.size();
    int len2 = t.size();

    int F[len1 + 1][len2 + 1];
    for (int i = 0; i <= len1; i++)
    {
        for (int j = 0; j <= len2; j++)
        {
            if (i == 0 || j == 0)
                F[i][j] = 0; // cơ sở của quy hoạt động
            else
            {
                if (s[i - 1] == t[j - 1])
                    F[i][j] = F[i - 1][j - 1] + 1;
                else
                {
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                }
            }
        }
    }
    cout << F[len1][len2] << endl;

    return 0;
}