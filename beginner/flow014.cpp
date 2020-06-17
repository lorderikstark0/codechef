#include <bits/stdc++.h>
#define pb push_back 

using namespace std;

typedef long long ll;

int gradeDisp(int h,float c,int ten){
	int grade=0;
	if(h>50 && c<0.7 && ten>5600){
		grade=10;
	}
	else if(h>50 && c<0.7){
		grade=9;
	}
	else if(c<0.7 && ten>5600){
		grade=8;
	}
	else if(h>50 & ten>5600 ){
		grade=7;
	}
	else if(h>50 || ten >5600 || c<0.7){
		grade=6;
	}
	else {
		grade=5;
	}
	return grade;

}




int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t-->0){
		int h;
		cin >> h;
		float c;
		cin >> c;
		int ten;
		cin >> ten;
		cout <<gradeDisp(h,c,ten)<<"\n";
	}
	return 0;
}