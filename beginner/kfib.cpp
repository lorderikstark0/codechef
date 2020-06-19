#include <bits/stdc++.h>

#define pb push_back 
#define ll long long  
 

#define MOD 10e+7
using namespace std;

ll int func(int n ,int k){
	if(n<=k){
		return 1;
	}
	else {
		return (func(n-1,k)+func(n-2,k));
	}
}


int main(){
	int n , k;
	cin >> n >> k;
	cout << func(n,k) % MOD<<"\n";


	return 0;
}