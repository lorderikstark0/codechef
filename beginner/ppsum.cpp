#include <bits/stdc++.h>
using namespace std;

//observer the recursion stack carefully on how to appraoch 
//recursion is right but gives overflow for 4 and 4 
long long int sum(int d,int n)
{
    if(d==0)
    {//forgot to add this testcase
        return n;
    }
    else if(d==1)
    {
        return (n*(n+1))/2;
    }
    else return sum(d-1,(n*(n+1))/2);
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int d,n;
        cin >> d >> n;
        cout <<sum(d,n)<<"\n";
    }
    return 0;
}