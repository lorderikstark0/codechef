#include <bits/stdc++.h>
using namespace std;

void checkstatus(int n)
{
    if(n<10)
    {
        cout <<"What an obedient servant you are!"<<endl;
    }
    else {
        cout <<"-1"<<endl;
    }
}

int main()
{
    int t;
    cin>> t;
    while(t-->0)
    {
        int n;
        cin >>n;
        checkstatus(n);
    }
    return 0;
}