#include <bits/stdc++.h>
//max mex
#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

//mex currently out of scope as requires segment tree to use them 
//refer this https://stackoverflow.com/questions/41633225/please-tell-me-the-efficient-algorithm-of-range-mex-query
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n ,m ;
		cin >> n >> m;
		vector<int> arr;
		while(n--){
			int a;
			cin >> a;
			arr.pb(a);
		}
		sort(arr.begin(),arr.end());
		
		
	}
	
	return 0;
}