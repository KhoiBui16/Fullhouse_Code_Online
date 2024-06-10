#include <bits/stdc++.h>
using namespace std;

class SOLVE
{
    private:
        int n; //* so luong thuc mua toi da trong 1 ngay
        int s; //* so ngay can ton tai
        int m; //* so luong thuc tieu thu cua 1 ngay
        int count;
    public:
        void enterInput();
        bool checkSurvival();
        int minDay();
};

void SOLVE::enterInput() { cin >> n >> s >> m; }

bool SOLVE::checkSurvival()
{
    if (m > n) return false;
    int total_food_need = s * m;
    if (total_food_need > n * (s - s / 7)) //* ve sau (s - s / 7) la so ngay co the mua hang vi chu nhat khong mo 
        return false;
    int minDayToBuy = (total_food_need) / n;
    if (total_food_need % n != 0) 
        minDayToBuy++;
    count = minDayToBuy;
    return (minDayToBuy <= s);
}

int SOLVE::minDay()
{
    if (checkSurvival()) return count;
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    SOLVE problem;
    problem.enterInput();
    cout << problem.minDay();
    return 0;
}