#include <stdio.h>
//improvement over the previous one is tthat i forget to add the 6 0zeors at end
int main()
{
    int t,i;
    long p,q;
    double tot;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld %ld",&q,&p);
        tot=(double)q*p;
        if(q>1000)
        {
            tot=tot-tot/10;
        }
        printf("%.6lf\n",tot);
    }
    return 0;
}