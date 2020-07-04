#include <bits/stdc++.h>
using namespace std;

int minDiff(vector<int>& arr){
  //first sorting the array
  sort(arr.begin(),arr.end());

  int diff =INT_MAX;

  for(int i=0;i<arr.size()-1;i++){
    if(arr[i+1] -arr[i] <diff){
      diff=arr[i+1]-arr[i];
    }
  }
  return diff;
}

int main(){
  int t;
  cin >> t;
  while(t-- >0){
    int n ;
    cin >> n ;
    vector<int> arr;
    for(int i=0;i<n;i++){
      int h;
      cin >> h;
      arr.push_back(h);
      
    }
    cout << minDiff(arr)<<"\n";
  }
  return 0;
}
