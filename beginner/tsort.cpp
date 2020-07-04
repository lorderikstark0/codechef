#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while(t-->0)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    sort(arr.begin(),arr.end());
    for(size_t i=0;i<arr.size();i++)
    {
        cout << arr[i]<<endl;
    }
    return 0;

}