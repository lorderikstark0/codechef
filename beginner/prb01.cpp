#include <bits/stdc++.h>

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i)
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)

#define pb push_back
#define fi first
#define se second
//contianers use 
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal
// find if a given value is present in a container
#define present(c,x) ((c).find(x) != (c).end())
//find version works for all containers.
#define cpresent(c,x) (find(all(c),x) != (c).end())
// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

bool primal(int n){
	if(n<=1 )
		return false;
	if(n<=3)
	return true;
	
	if(n%2==0 || n%3==0)
	return false;
	
	for(int i=5;i*i<=n;i=i+6)
	if(n%i==0|| n%(i+2)==0)
	return false;
	
return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
    	int n ;
    	cin >> n;
    	
    	if(primal(n)){
    		cout << "yes"<<"\n";
    	}
    	else{
    		cout <<"no"<<"\n";
    	}
    }
    
    
       
    
    return 0;
    
    
}