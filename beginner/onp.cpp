#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;

int priority(string exp){
	
}


string result(string exp){
	
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string exp ;
		cin >> exp ;
		string result =rpn(exp);
		cout << result <<"\n";
	}
	return 0;
}