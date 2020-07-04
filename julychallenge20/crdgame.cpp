#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while(t--){
      int n ;
      cin >> n;
      multimap<int,int> arr1;
      while(n--){
          int a,b;
          cin >> a >> b;
          arr1.insert(pair<int,int>(a,b));
      }
    multimap<int,int>::iterator itr;
    
    multimap<int,int> arr2;
    for(itr = arr1.begin();itr!=arr1.end();++itr){
        int sum1=0;
        int sum2=0;
        
        int a =itr->first;
        if(a!=0){
          int h = a%10;
          sum1+=h;
          a=a/10;
        }
        int b =itr->second;
        if(b!=0){
          int h=b%10;
          sum2+=h;
          b=b/10;
        }
        arr2.insert(pair<int,int>(sum1,sum2));
    }
   	vector<int>arr;
    int chefPt=0;
    int mortyPt=0;
    for(itr=arr2.begin();itr!=arr2.end();++itr){

      
      if(itr->first==itr->second){
        
        chefPt++;
        mortyPt++;
      }
      else if(itr->first > itr->second){
        chefPt+=1;
        
      }
      else {
        mortyPt+=1;
        
      }
   }
   arr.push_back(chefPt);
   arr.push_back(mortyPt);


    
      if(chefPt>mortyPt){
      	cout << "0"<<" "<<chefPt<<"\n";
      }
      else if(chefPt<mortyPt){
      	cout <<"1"<<" "<<mortyPt<<"\n";
      }
      else{
      	cout <<"2"<<" "<<mortyPt<<"\n";
      }
    
 	
 }
 return 0;
}
