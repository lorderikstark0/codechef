#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int count=0;int d=0;
    
    while(t>0){
        int p=t%10;
        count++;
        t=t/10;
    }
    if(count==0){
        cout<<1<<"\n";
    }
    else if(count==1){
        cout <<1<<"\n";
    }  
    else if(count==2){
        cout <<2<<"\n";
    }
    else if(count==3){
        cout<<3 <<"\n"; 
    }
    else {
        cout <<"More than 3 digits"<<"\n";
    }
     return 0;
}