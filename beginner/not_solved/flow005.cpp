#include <bits/stdc++.h>
using namespace std;
#define pb push_back

//even though using dynamic programming approach its 
//giving tle 
//todo


int smallestnumber(int coins[],int m ,int v){
 //coin denominatiosn are 1,2,5,10,50,100

    int table[v+1];

    table[0]=0;//base case 0 if v==0

    //initilaize al the table values 
    for(int i=1;i<=v;i++){
        table[i]=INT_MAX;
    }

    //compute the min coins from 1 to V 
    for(int i=1;i<=v;i++){
        for(int j=0;j<m;j++){
            if(coins[j]<=i){
                int sub_res=table[i-coins[j]];
                if(sub_res !=INT_MAX && sub_res +1 < table[i])
                    table[i]=sub_res +1;

            }
        }
        
    }
    return table[v];
}


int main(){
    int t;
    cin >> t;
    vector<int> arr;
    while(t-->0){
        int n ;
        cin >> n;
        arr.pb(n);
    }
    int coins[]={1,2,5,10,50,100};
    int m =sizeof(coins)/sizeof(coins[0]);

    for(size_t i=0;i<arr.size();i++){
        int v=arr[i];
        cout << smallestnumber(coins,m,v)<<"\n";
    }
    return 0;

}