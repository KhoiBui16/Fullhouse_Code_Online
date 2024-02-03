#include<bits/stdc++.h>

using namespace std;


int main(){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int Min=1e9+7;
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])<Min) Min=a[i]-a[i-1];
        }
        int dem=0;
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])==Min) dem++;
        }
        cout<<Min<<" "<<dem<<endl;
}