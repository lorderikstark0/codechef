#include <bits/stdc++.h>
using namespace std;
//not solved 
int reverse(int m)
{
    int rev=0;
    while(m>0)
    {
        int p=m%10;
        rev=rev*10+p;
        p=p/10; 
    }
    return rev;
}

vector<int> reversechange(vector<int>& arr)
{
    vector<int> check;
    for(size_t i=0;i<arr.size();i++)
    {
        check.push_back(reverse(arr[i]));
    }
    return check;
}
int main()
{
    vector<int> arr;
    int t;
    cin >> t;
    while(t-- >0)
    {
        int p;
        cin >> p;
        arr.push_back(p);
    }
    vector<int> ans=reversechange(arr);
    for(size_t i=0;i<ans.size();i++)
    {
        cout << ans[i]<<endl;
    }
    return 0;
}