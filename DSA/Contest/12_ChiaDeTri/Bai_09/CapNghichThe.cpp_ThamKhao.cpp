#include<bits/stdc++.h>
#define ll long long
using namespace std;


int n;
vector<int> a;

void inp(){
    cin >> n;
    for(int i = 0;i < n;i++){
        int x; cin >> x;
        a.push_back(x);
    }
}

ll merge(int l,int m,int r){
    ll tmp[r+1];
    int i = l, j = m, k = l, cnt = 0;
    while(i < m && j <= r){
        if(a[i] <= a[j]){
            tmp[k] = a[i];
            k++, i++;
        }
        else {  //a[i] > a[j]
            tmp[k] = a[j];
            ++j, ++k;
            cnt += m-i;
        }
    }
    while(i < m){
        tmp[k] = a[i];
        k++, i++;
    }
    while(j <= r){
        tmp[k] = a[j];
            ++j, ++k;
    }
    for(int x = l;x <= r;x++){
        a[x] = tmp[x];
    }
    return cnt;
}

ll mergeSort(int l,int r){
    ll ans = 0;
    if(l < r){
        int m = (l +r)/2;
        ans += mergeSort(l,m);
        ans += mergeSort(m+1,r);
        ans += merge(l,m+1,r);
    }
    return ans;
}
int main(){
    inp();
    cout << mergeSort(0,n-1); //nlogn
    return 0;
}
