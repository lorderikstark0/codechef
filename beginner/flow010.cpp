#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;


string ship(char c){
	string s;
	if(c=='B'|| c=='b'){
		s= "BattleShip";
	}
	else if(c=='C'|| c=='c'){
		s= "Cruiser";
	}
	else if(c=='D'||c=='d'){
		s= "Destroyer";
	}
	else if(c=='F'||c=='f'){
		s= "Frigate";
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	
	while(t--){
		char c;
		cin >> c;
	    cout << ship(c)<<"\n";
		
	}
	return 0;
}