#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define pb push_back

int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while(t-- >0)
    {
        int n ;
        cin >> n ;
        arr.pb(n);
    }
    vector<int> arr1;
    for(size_t i=0;i<arr.size();i++)
    {
        arr1.push_back(sqrt(arr[i]));
    }
    for(size_t i=0;i<arr1.size();i++)
    {
        cout << arr1[i]<<endl;
    }
    return 0;
}