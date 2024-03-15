#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

void EnterArray(vector<long>& arr)
{
    for (auto& x : arr)
        cin >> x;
}

void GiaoHaiMang(vector<long>& a, vector<long>& b)
{
    set<long> MangGiao;
    for (auto x : a)
        if (binary_search(b.begin(), b.end(), x))
            MangGiao.insert(x);

    for (auto it : MangGiao)
        cout << it << " ";
}

void HopHaiMang(vector<long>& a, vector<long>& b)
{
    set<long> MangHop(a.begin(), a.end());
    MangHop.insert(b.begin(), b.end());

    for (auto it : MangHop)
        cout << it << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long> a(n), b(m);

    EnterArray(a);
    EnterArray(b);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    GiaoHaiMang(a, b);
    cout << endl;
    HopHaiMang(a, b);

    return 0;
}