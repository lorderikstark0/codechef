#include <bits/stdc++.h>
#define pb push_back
using namespace std;


int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while(t-->0)
    {
        int n;
        cin >> n;
        arr.pb(n);
    }
    for(size_t i=0;i<arr.size();i++)
    {
        arr[i]=factorial(arr[i]);
    }
    for(size_t i=0;i<arr.size();i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;
}