#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t-->0){
        long b,c,m,n;
        scanf("%li%li",&b,&c);
        m=b;n=c;
        while(n){
            m=m%n;
            m^=n^=m^=n;
        }
        printf("%li %li\n",m,(b*c)/m);
    }
    return 0;
}