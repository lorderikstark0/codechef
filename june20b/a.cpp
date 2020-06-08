#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int amount(vector<int>&arr,int k ){
	int revenue1=0;
	int revenue2=0;
	for(size_t i=0;i<arr.size();i++){
		revenue1+=arr[i];
		if(arr[i] > k){
			arr[i]=k;
		}
		revenue2+=arr[i];
	}
	return revenue1-revenue2;
}

int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n , k;
		cin >> n >> k ;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int h;
			cin >> h;
			arr.pb(h);//the price of the ith item 
			//price of each reduced from arr[i] -> k 

		}
		cout << amount(arr,k)<<"\n";
	}

	return 0;
}