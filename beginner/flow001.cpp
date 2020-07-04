#include <iostream>
#include <vector>
using namespace std;


vector<int> sum(vector<int>& arr1,vector<int>& arr2)
{
    for(size_t i=0;i<arr1.size();i++)
    {
         arr1[i]=arr1[i]+arr2[i];
    }
    return arr1;
}


int main()
{
    int t;
    cin >> t;
    vector<int> arr1;
    vector<int> arr2;
    
    while(t-- >0)
    {
        int a ,b;
        cin >> a >> b;
        arr1.push_back(a);
        arr2.push_back(b);
    }
    vector<int> ans = sum(arr1,arr2);
    for(size_t i=0;i<ans.size();i++)
    {
        cout << ans[i]<<endl;
    }
    return 0;
}