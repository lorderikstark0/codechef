#include <bits/stdc++.h>
using namespace std;
#define pb push_back

string showID(char c)
{
    string p="";
    switch (c){
        case 'B':p= "Battleship";break;
        case 'b':p= "Battleship";break;
        case 'C':p= "Cruiser";break;
        case 'c':p= "Cruiser";break;
        case 'D':p= "Destroyer";break;
        case 'd':p= "Destroyer";break;
        case 'F':p= "Frigate";break;
        case 'f':p= "Frigate";break;
      }
      return p;
}

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t-->0)
    {
        char c ;
        cin >> c;
        ans.pb(showID(c));
    }
    for(size_t i=0;i<ans.size();i++){
        cout << ans[i]<<"\n";
    }
    return 0;
}