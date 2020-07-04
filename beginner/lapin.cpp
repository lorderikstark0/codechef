#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <queue>
#include <list>
#include <sstream>
#include <algorithm>
#include <cstring>
#define pb push_back 

using namespace std;

typedef long long ll;

const int MAX_CHAR=26;

bool checkCorrectorNot(string s){
	int count1[MAX_CHAR]={0};
	int count2[MAX_CHAR]={0};

	int n =s.length();
	if(n==1)
		return true;
	for(int i=0,j=n-1;i<j;i++,j--){
		//first half check 
		count1[s[i]-'a']++;

		//second half check 
		count2[s[j]-'a']++;
	}
	//check if the two values are different 
	for(int i=0;i<MAX_CHAR;i++){
		if(count1[i]!=count2[i]){
			return false;
		}
	}
	return true;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t-->0){
	string s;
	cin >> s;
	if(checkCorrectorNot(s)){
		cout<<"YES"<<"\n";
	}
	else{
		cout<<"NO"<<"\n";
	}
	}
	return 0;
}


