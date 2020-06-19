#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		
		int rev=0;
		while(n!=0){
			int h = n%10;
			rev=rev*10+h;
			n=n/10;	
		}
		cout << rev <<"\n";
	}
	return 0;
}