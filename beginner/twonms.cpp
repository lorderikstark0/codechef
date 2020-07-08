#include <bits/stdc++.h>
using namespace std;

//tester gives thata the answer is partially correct --> try to solve more for it 

int maxvalue(int a ,int b ,int n){
   int a1 ,b1;
   a1=a;b1=b;
   
   while(n!=0){     
     a=a*2;
     n=n-1;
     if(n>0){
       b=b*2;
        n=n-1;         
     }
  }
    
   int c=a;
   int d=b;
  
   int h = (int) max(c,d)/ min(c,d);
   return h;

}

int main(){
  int t;
  cin >> t;
  while(t--){
    int a ,b,n;
    cin >> a >> b>> n;

    cout << maxvalue(a,b,n)<<"\n";
  }
   
  return 0;
}
