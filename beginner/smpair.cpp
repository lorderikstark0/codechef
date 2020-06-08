#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t-->0){
		int n ;
		cin >> n;
		vector<int> arr(n);//now to remove all 0s from vector		
		int a;
		cin >> a;
		arr.pb(a);
	//removing all 0s from vectror
	arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());

	sort(arr.begin(),arr.end());
	cout << arr[0]<<"\n";
	cout << arr[1]<<"\n";
	int sum = arr[0]+arr[1];
	cout << sum <<"\n";
	}

return 0;
}