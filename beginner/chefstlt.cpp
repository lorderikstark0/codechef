#include <bits/stdc++.h>
using namespace std;
//lower part is working 
//upper part is not 
int main(){
  int t;
  cin >> t;
  while(t--){
      string s1;
      string s2;
      cin >> s1 >> s2;

      //first traverse the whole string and check which letters are matching 
      //and which letters have ? placed in them 

      vector<char> arr1(s1.begin(),s1.end());
      vector<char> arr2(s2.begin(),s2.end());
      
      //also given the both the strings have equal lengths
      
      vector<int> pos_not_matched;
      for(size_t i=0;i<arr1.size();i++){
        if(arr1[i]!=arr2[i] && (arr1[i]!='?'&&arr2[i]!='?') ){
          pos_not_matched.push_back(i);
        }
      }
      // the min will be the size of this pos_not_matched 
      int min1 = pos_not_matched.size();

      int max_size1 =arr1.size(); //cause the max unmatched chars will never be greater than 
      // the size of the array 
      //
      //for the max number we have to see take the least no of ? from both of the strings and take the min of that and subtract them from the size of the array 
      //if both have eqaul number and is >=2 then max unmathced is the number of ? itself
      //if 1 then max unmatched if len(arr)
      int count1=0;int max1=0;
      for(size_t i=0;i<arr1.size();i++){
        if(arr1[i]==arr2[i] && arr1[i]=='?'){
          count1++;
        }
      }
      int count2=0,count3=0;

      for(size_t i=0;i<arr1.size();i++){
        if(arr1[i]=='?'){
          count2++;
        }
      }
      for(size_t i=0;i<arr2.size();i++){
        if(arr2[i]=='?'){
          count3++;
        }
      }
      int min2 = min(count2,count3);
      
      if(count1==arr1.size()){
          max1=arr1.size();
      }
      
      
      else if(count1!=arr1.size() && min2>0){
        max1=arr1.size()-min2;
      }

      else if(count2==count3 && count2>=2){
          max1=count2;
      }

      cout << min1 << " "<<max1<<"\n";
  
	}
	return 0;
}

