#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;

int main(){
	int l;
	cin >> l;
	int b;
	cin >>b;
	
	int area = l*b;
	int peri = 2*(l+b);
	if(area >peri){
		cout << "Area"<<"\n";
		cout <<area<<"\n";
	}
	else if(peri>area){
		cout <<"Peri"<<"\n";
		cout << peri<<"\n";
	}
	else{
		cout <<"Eq"<<"\n";
		cout << area<<"\n";
	}
	
	return 0;
}