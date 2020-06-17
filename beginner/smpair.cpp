#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		vector<int> arr;
		while(n--){
			int a;
			cin >> a;
			arr.pb(a);
		}
		sort(arr.begin(),arr.end());
		cout << arr[0]+arr[1]<<"\n";
	}
return 0;
}