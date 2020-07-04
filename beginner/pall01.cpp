#include <bits/stdc++.h>
using namespace std;
#define pb push_back


bool isPalin(int n)
{
    int p=n;int q=0;
    while(n>0)
    {
        int y =n%10;
        q=q*10+y;
        n=n/10;
    }
    if(p==q)
    {
        return true;
    }
    return false;
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
    vector<bool> ans;
    for(size_t i=0;i<arr.size();i++)
    {
        ans.pb(isPalin(arr[i]));
    }
    for(size_t i=0;i<ans.size();i++)
    {
        if(ans[i]){
            cout<<"wins"<<endl;
        }
        else {
            cout<<"loses"<<endl;
        }
        
    }
    return 0;
}