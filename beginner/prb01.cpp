#include <bits/stdc++.h>
using namespace std;
#define pb push_back

//usig school method to find the primes 
bool isPrime(int n)
{
    //corner cases check
    if(n<=1 )
    return false;
    if(n<=3)
    return true;

    if(n%2==0 || n%3==0)
    return false;

    for(int i=5;i*i<=n;i=i+6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    while(t-->0)
    {
        int n ;
        cin >> n;
        arr.pb(n);
    }
    vector<bool> ans ;
    for(size_t i=0;i<arr.size();i++)
    {
        ans.pb(isPrime(arr[i]));
    }
    for(size_t i=0;i<ans.size();i++)
    {
        if(ans[i])
        {
            cout <<"yes"<<endl;
        }
        else {
            cout <<"no"<<endl;
        }
    }
    return 0;
}