#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    while(n-->0)
    {
        int p;
        cin >> p;
        arr.pb(p);
    }
    int count_l=0;
    int count_ul=0;
    for(size_t i=0;i<arr.size();i++)
    {
        if(arr[i]%2==0)
        {
            count_l++;
        }
        else {
            count_ul++;
        }
    }
    if(count_l>count_ul)
    {
        cout <<"READY FOR BATTLE"<<endl;
    }
    else {
        cout <<"NOT READY"<<endl;
    }
return 0;
}
