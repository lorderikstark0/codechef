#include <bits/stdc++.h>
using namespace std;
#define pb push_back
/*
int countans(string p,int n){
    //prints all substrings
    vector<string>ans ;
    int count=0;
    //slow cause 0(n^2)
    
    for(int i=0;i<n;i++)
    for(int len=1;len<=n-i;len++){
        ans.pb(p.substr(i,len));
    }
    
    for(size_t i=0;i<ans.size();i++){
        string a= ans[i];
        int q= a.length();
        if(a.at(0)=='1' && a.at(q-1)=='1'){
            count++;
        }
    
    }
    return count;
}
*/

//

//using sets and powersets to generate all possible substrings

int main(){
    int t;
    cin >> t;
    while(t-->0){
        int n ;
        cin >> n;//size of p
        string p;
        cin >> p;
      cout << countans(p,n)<<"\n";
    }
    return 0;
}