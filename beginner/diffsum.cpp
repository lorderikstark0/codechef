#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 
//wrong answer --> do again
using namespace std;

int main(){
	
		int n1 ,n2;
		cin >> n1 ;
		cin >> n2;
		
		if(n1>n2){
			cout << n1 -n2<<"\n";
		}
		else{
			cout << n2-n1<<"\n";
		}
	
	return 0;
}