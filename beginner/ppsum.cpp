#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;
//just used simple recursion for this 
int sum (int d ,int n){
	if(d==1){
		return ((n*(n+1))/2);
	}
	else{
		return sum(d-1,(n*(n+1)/2));
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int d ,n ;
		cin >> d >> n;
		cout << sum(d,n)<<"\n";
	}
	return 0;
}