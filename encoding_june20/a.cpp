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
		vector<int> arr;
		while(n--){
			int i;
			cin >> i;
			arr.push_back(i);
		}
		int sum=0;
		for(size_t i=0;i<arr.size();i++){
			sum+=arr[i];
		}
		if(sum/n>0){
			cout << "Yes"<<"\n";
		}
		else{
			cout <<"No"<<"\n";
		}
	}
	return 0;
}