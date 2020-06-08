#include <bits/stdc++.h>
using namespace std;

#define pb push_back


bool allServed(vector<int>& arr){
	int balance=0;
	bool poss=false;
	for(size_t i=0;i<arr.size();i++){
		if(arr[i]==5){
			balance+=5;
			poss=true;
		}
		else if(arr[i]==10 && balance >5){
			balance +=10;
			balance =balance-5;
			poss=true;
		}
		else if(arr[i]==15 && balance >10){
			balance +=15;
			balance=balance-10;
			poss=true;
		}
		else{
			poss=false;
		}
	}
return poss;

}


int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n;
		cin >> n;
		vector<int> arr;
		while(n-->0){
			int p ;
			cin >>p;
			arr.pb(p);
			
		}
		if(allServed(arr)){
				cout <<"YES"<<"\n";
			}
			else{
				cout <<"NO"<<"\n";
			}
	}
	return 0;
}