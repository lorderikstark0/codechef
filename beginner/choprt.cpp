#include <bits/stdc++.h>
using namespace std;
#define pb push_back

vector<string> relation(vector<int>& arr1,vector<int>& arr2){
    vector<string>ans ;
    for(size_t i=0;i<arr1.size();i++){
        if(arr1[i]==arr2[i]){
            ans.pb("=");
        }
        else if(arr1[i]>arr2[i]){
            ans.pb(">");
        }
        else {
            ans.pb("<");
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    vector<int> arr1;
    vector<int> arr2;

    while(t-->0){
        int a ,b ;
        cin >> a >> b;
        arr1.pb(a);
        arr2.pb(b);
    }
    vector<string> ans=relation(arr1,arr2);
    for(size_t i=0;i<ans.size();i++){
        cout << ans[i]<<"\n";
    }
    return 0;   
}