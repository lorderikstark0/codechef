#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
    int t;
    cin >> t;
    while(t-->0){
        int n ;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int p;cin >> p;
            arr.pb(p);
        }
        int min_infected=1;
        int max_infected=1;
        for(size_t i=0;i<arr.size();i++){
            if(abs(arr[i]-arr[i+1])>2){
                continue;
            }
            else{
                
            }
        }
    }
    return 0;
}