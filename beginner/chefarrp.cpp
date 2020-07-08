#include <bits/stdc++.h>
using namespace std;

int subarrays(vector<int>& arr){
  //storing the sum of all subarrays in a vector 
  vector<int>sum ;
  int n=arr.size();
  for(int i=0;i<n;i++){
    sum.push_back(arr[i]*(i+1)*(n-i));
  }
  //similarlystoring the products of the subarrays in a vector 
  
  vector<int>prod;
  
  for(int i=0;i<n;i++){
    long long int product =1 ;
    for(int j=i;j<n;j++){
      product =product * arr[j];
      prod.push_back(product);
    }
  }
  int count1=0;
  for(size_t i=0;i<sum.size();i++){
    if(sum[i]==prod[i]){
      count1++;
    }
  }
  return count1;
}
//not solved 
int main(){
  
  int t;
  cin >> t;
  while(t--){
    int n ;
    cin >> n;
    vector<int> arr;
    while(n--){
      int a ;
      cin >> a;
      arr.push_back(a);
    }
    cout << subarrays(arr)<<"\n";
  }
  return 0;
}
