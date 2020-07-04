#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int p = n;
    if(n%4==0)
    {
        n=n+1;
        cout<<n<<endl;
    }
    else {
        p=p-1;
        cout <<p<<endl;
    }
return 0;
}