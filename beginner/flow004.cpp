#include <bits/stdc++.h>
using namespace std;

int sum(int p)
{
    int q=p%10;
    while(p>=10)
    {
        p/=10;
    }
    return p+q;
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
        arr.push_back(n);
    }
    vector<int> ans;
    for(size_t i=0;i<arr.size();i++)
    {
        ans.push_back(sum(arr[i]));
    }
    for(size_t i=0;i<arr.size();i++)
    {
        cout << ans[i]<<endl;
    }
    return 0;
}