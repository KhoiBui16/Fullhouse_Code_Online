#include<bits/stdc++.h>
using namespace std;

void tron(int a[],int l, int m,int r){
	vector<int> x(a+l,a+m+1);
	vector<int> y(a+m+1,a+r+1);
	int i = 0, j = 0,h = 0;
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i];
			i++,l++;
		}
		else{
			a[l] = y[j];
			j++,l++;
		}
	}
	while(i <x.size()){
			a[l] = x[i];
			i++,l++;
	}
	while(j < y.size()){
			a[l] = y[j];
			j++,l++;
	}
}

void merge_sort(int a[],int l, int r){
	if(l >= r)return;
	int m = (l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	tron(a,l,m,r );
}

int main(){
	int a[9] ={12,6,8,32,17,16,2,8,5};
	merge_sort(a,0,8);
	for(int i = 0;i < 8 ;i++){
		cout << a[i] << " ";
	}
	
}
