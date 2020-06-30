#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 
#include <cmath>

using namespace std;

int solve(int m ,int n ,int k){
	if(abs(m-n)==k){
		return 0;
	}
	else{
		if(m>n){
			while(m!=n ){
				k=k-1;
				
				n=n+1;
				if(k<=0){break;}
			}
			return m-n;
		}
		else if(m==n){
			return 0;
		}
		else{
			while(m!=n ){
				k=k-1;
				m=m+1;
				if(k<=0){
					break;
				}
			}
			return n-m;
		}
		}
	}


int main(){
	int t;
	cin >> t;
	while(t--){
		int m , n , k;
		cin >> m >> n >> k;
		int answer = solve(m,n,k);
		cout << answer<<"\n";
	}
	return 0;
}