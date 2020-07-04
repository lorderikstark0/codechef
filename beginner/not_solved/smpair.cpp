#include <bits/stdc++.h>
using namespace std;
#define pb push_back
//not solved 
int smallest_pair(vector<int>& arr)
{
    sort(arr.begin(),arr.end());
    return arr[0]+arr[1];
}


int main()
{
    int t;
    cin>> t;
    vector<int>arr;
    while(t-->0)
    {
        int n;
        cin >> n;
        while(n-->0)
        {
            int p;
            cin>> p;
            arr.pb(p);
        }
    }
    cout << smallest_pair(arr)<<endl;
    return 0;
}