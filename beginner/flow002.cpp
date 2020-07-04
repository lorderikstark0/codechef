#include <iostream>
#include <vector>
using namespace std;
vector<int> remainder(vector<int>& res,vector<int>& res1)
{
    for(size_t i=0;i<res.size();i++)
    {
        res[i]=res[i]%res1[i];
    }
    return res;
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
    vector<int> reuslt=remainder(arr1,arr2);
    for(size_t i=0;i<reuslt.size();i++)
    {
        cout << reuslt[i]<<endl;
    }
    return 0;
}