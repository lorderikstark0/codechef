#include <iostream>
#include <vector>
using namespace std;

int sum(int p)
{
    int sum=0;
    while(p>0)
    {
        int y=p%10;
        sum=sum+y;
        p=p/10;
    }
    return sum;
}

vector<int> sumofDigs(vector<int> &arr)
{
    vector<int> ans;
    for(size_t i=0;i<arr.size();i++)
    {
            ans.push_back(sum(arr[i]));
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    vector<int> arr1;
    while(t-- >0)
    {
        int n ;
        cin >> n;
        arr1.push_back(n);
    }
    vector<int>ans =sumofDigs(arr1);
    for(size_t i=0;i<ans.size();i++)
    {
        cout << ans[i]<<endl;
    }
    return 0;
}