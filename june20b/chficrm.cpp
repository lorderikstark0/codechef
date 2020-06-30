#include <bits/stdc++.h>

//p3 of contest 20b june 
/*
Basic idea is that take two pointers t0 and t10  at 0
when customer comes we can provide chain using 2 zeroes 

Best strategy is to give change using t10 whenevr poss and if not then
us t5 change. 
CAUSE rs10 is less flexibel than rs5 because we can make 
rs10 from rs5 but not the other way round .

*/
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
		int n5=0,n10=0,n15=0;
		string ans="YES";
		
		while(n--){
			int nG;
			cin >> nG;
			if(nG==5)n5++;
			if(nG==10)n10++,n5--;
			if(nG==15){
				n15++;
				if(n10>0)n10--;
				else n5-=2;
			}
			if(n5<0 || n10<0)ans="NO";
		}
		cout << ans <<"\n";
	}
	return 0;
}