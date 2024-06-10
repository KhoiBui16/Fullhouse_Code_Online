#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //* neu khong co greater => mac dinh max heap
    priority_queue <int, vector<int>, greater<int>> Q; // min_heap
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        Q.push(x);
    }
    long long sum = 0;
    while(Q.size() > 1) {
        long long rope1 = Q.top();
        Q.pop();
        long long rope2 = Q.top();
        Q.pop();
        sum += (rope1 + rope2);
        Q.push(rope1 + rope2);
    }
    cout << sum;
    return 0;
}