#include <bits/stdc++.h>

#define pb push_back 
typedef long long int ll;
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 
#define MOD 10e9+7
using namespace std;

/// since fibonacci numbers grows for a large numbers it cannot be fitted in any primitive datatype in cpp .Also we observe tha any fibonaaci numbers is cycle with cycle of 60 

ll fibonacci(ll f[],ll n){
	f[0]=0;
	f[1]=1;
	//use the greedy approach 
	for(ll i=2;i <=n;i++){
		f[i](f[i-1]+f[i-2])%10;
	}
	return f[n];
}

int findLastDigit(int n){
	ll f[60] ={0};
	//precomputing the units digit of first 60 fibonacci numbers 
	fib(ff,60);
	return f[n%60];
}


int main(){
	
		ll n ;
		cin >> n;
		cout << fibonacci(n)<<"\n";
	
	return 0;
}