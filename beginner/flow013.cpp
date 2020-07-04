#include <bits/stdc++.h>
using namespace std;

bool istri(int a ,int b ,int c)
{
    if(a+b+c==180)
    {
        return true;
    }
    return false;
}


int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int a ,b,c;
        cin >>a>>b>>c;
        if(istri(a,b,c))
        {
            cout <<"YES"<<endl;
        }
        else {
            cout <<"NO"<<endl;
        }
    }
    return 0;
}