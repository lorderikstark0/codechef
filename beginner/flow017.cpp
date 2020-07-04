#include <bits/stdc++.h>
using namespace std;
#define pb push_back


void result(vector<int>& arr)
{
   sort(arr.begin(),arr.end());
   cout << arr[1]<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        vector<int>arr;
        int a,b,c;
        cin >> a >> b>> c;
        arr.pb(a);
        arr.pb(b);
        arr.pb(c);
        result(arr);
    }
    return 0;
}