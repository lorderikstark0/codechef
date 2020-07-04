#include <bits/stdc++.h>
using namespace std;
int main(){

    int a ,b ;
    cin >> a >> b;
    //originally use
    //cout << a-b+1<<"\n";

    if((a-b)%10==9){
        cout << a-b-1<<"\n";
    }

    else {
        cout <<a-b+1<<"\n";
    }
    return 0;

}
