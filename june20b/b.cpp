#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int maxPairs(string s){
	int n =s.length();
	int count=0;
	//converting string to arr vec 
	vector<char> st1(s.begin(),s.end());
	for(size_t i=0;i<st1.size();i++){
		if(st1[i]=='x')
		{
			if(st1[i+1]=='y'){
				count+=1;
				i=i+1;
			}
			else{
				continue;
			}
		}
		else if(st1[i]=='y'){
			if(st1[i+1]=='x'){
				count+=1;
				i=i+1;
			}
			else{
				continue;
			}
		}
	}


return count;

}

int main(){
	int t;
	cin >> t;
	while(t-->0){
		string s;
		cin >> s;//the length of the string is n 
		//in this for each valid i-th char of s is 'x'
		//if the ith cstudent is a girl or 'y' if this student is a boy
		//students stading next to each other in the row are friends

		//each pair must have a boy and girl and they can form a pair iff they are friends 
		//each student can be part of at most one pair
		//max piars =?

		cout << maxPairs(s)<<"\n";

	}
	return 0;
}