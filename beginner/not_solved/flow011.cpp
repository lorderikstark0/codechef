#include <bits/stdc++.h>
using namespace std;
//decrease the floating point power to make it into accetable range in 10^-2

double answer(int sal)
{
    double hra=0;
    double da=0;
    double gross=0;
    if(sal>=1500)
    {
        hra= 500;
        da =0.98*sal;
        gross=hra+sal+da;
    }
    else {
        hra=0.1*sal;
        da=0.9*sal;
        gross=sal+hra+da;
    }
    return gross;
}

int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int sal;
        cin >> sal;
      cout << answer(sal)<<endl;
    }
    return 0;
}