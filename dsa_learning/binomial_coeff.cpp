#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;
#define MAX 500
#define MOD 10e9+7


int mulitply(int x ,int res[],int res_size){
	int carry =0;
	for(int i=0;i<res_size;i++){
		int prod = res[i]*x +carry;
		res[i]= prod %10;
		carry =prod/10;
	}
	
	while(carry){
		res[res_size]=carry%10;
		carry =carry/10;
		res_size++;
	}
	return res_size;
}

ll int factorial(int n){
	int res[MAX];
	res[0]=1;
	int res_size=1;
	
	for(int x=2;x<=n;x++){
		res_size =multiply(x,res,res_size);
	}
	for(int i=res_size-1;i>=0;i--){
		cout << res[i]<<"\n";
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int a , b;
		cin >> a >> b;
		
		ll int n =factorial(a);
		ll int d = 	factorial(b-a);
		ll int d2= factorial(b);
		
		cout << n /(d*d2) << "\n";
		
	}
	return 0;
}