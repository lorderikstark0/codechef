#include <bits/stdc++.h>
using namespace std;
#define pb push_back
 //not solved 
 //failing at all NNNN test cases 
vector<string> result(vector<char>& arr)
{
    vector<string> ans;
   if(any_of(arr.begin(),arr.end()))
}
/**
 * vector<string> result(vector<char>& arr){
 *  vector<string> ans;
 *  if(find(arr.begin(),arr.end(),"I")){
 *  ans.pb("INDIAN");
 * }
 * else if(find(arr.begin(),arr.end(),"Y"))
 *  ans.pb("NOT INDIAN");
 * 
 * else {
 * ans.pb("NOT SURE")};
 * 
 * return ans ;
 * 
 * }
 * 
 * 
 * 
 * 
 */ 

int main()
{
   int t;
   cin >> t;
   vector<char>arr;
   while(t-->0){
       int n ;
       cin >> n;
       while(n-->0){
           char p;
           cin >>p;
           arr.pb(p);
       }
   vector<string> ans1=result(arr);
   for(size_t i=0;i<ans1.size();i++)
   {
       cout << ans1[i]<<"\n";
   }  
   } 
   
return 0;
}