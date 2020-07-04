#include <bits/stdc++.h>
using namespace std;


int main(){
  bool state =true;
  while(true){
    int i;
    cin >> i;
    if(i==42){
      state=false;
      exit(0);
    }
    state=true;
    cout << i <<"\n";
  }
  return 0;
}
