#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n)
{
    int q=n;
    int y=0;
    while(n>0)
    {
        int u=n%10;
        y=y*10+u;
        n=n/10;
    }
    return y;
}
int main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int n ;
        cin >> n;
        cout<< reverse(n)<<endl;
    }
    return 0;
}
