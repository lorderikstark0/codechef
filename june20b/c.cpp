#include <bits/stdc++.h>
using namespace std;
//codde for this solution si chficrm

vector<bool> balance(vector<int>& arr){
	int balance=0;
	vector<bool> result;
	for(size_t i=0;i<arr.size();i++){
			if(arr[i]==5){
				balance+=5;
				result.push_back(true);
			}
			else if(arr[i]==10 && balance >=5){
				balance = balance -5;
				result.push_back(true);
	         }
	         else if(arr[i]==15 && balance >=10){
	         	balance=balance-10;
	         	result.push_back(true);
	         }
	         else {
	         	result.push_back(false);
	         }
	}
	return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		vector<int> arr;
		while(n--){
			int p;
			cin >> p;
			arr.push_back(p);			
		}
		vector<bool> ans =balance(arr);
		if(find(ans.begin(),ans.end(),false) !=ans.end())
		{
			cout << "NO"<<"\n";
		}
		else{
			cout <<"YES"<<"\n";
		}
	}
	return 0;
}