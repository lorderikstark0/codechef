#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//not solved 
long int subarraySum(vector<int>& arr){
    long int result=0;
    for(size_t i=0;i<arr.size();i++){
        result += (arr[i]*(i+1)*(arr.size()-i));
    }
    return result;
}

long int subarrayMul(vector<int>& arr){
    long int result=0;

}



int main()
{
    int t;
    cin >> t;
    int count=0;
    while(t-->0){
        int n ;
        cin >> n;
        vector<int> arr(n,0);
        for(size_t i=0;i<arr.size();i++){
            int p;
            cin >> p;
            arr[i]=p;
        }
        if(subarraySum(arr)==subarrayMul(arr)){
            cout <<count<<"\n";
        }
        else {
            continue;
        }
    }
    return 0;
    
}