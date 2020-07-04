#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define pb push_back

vector<int> primes;
void sieve(){
	//utility function 
	int n =MAX;
	

	int nNew =sqrt(n);

	int marked[n/2+500]={0};

	for(int i=1;i<=(nNew-1)/2;i++)
		for(int j=(i*(i+1))<<1;j<=n;j++)
			marked[j]=1;


	//since 2 is prime number 
	primes.pb(2);

	//remianing primes are of the form 2*i+1 such that  marked[i]
	//is false 
	for(int i=1;i<=n/2;i++)
		for(marked[i]==0)
		primes.pb(2*i+1);	

}

//modified binary search to find the nearset prime number less than n 

int binarySearch(int left,int right ,int n){

	if(left<right){
		int mid=(left+right)/2;

		//base condition is if we 
		if(mid==0|| mid==primes.size()-1)
				return primes[mid];

		if(primes[mid]==n)
			return primes[mid-1];

		//now if primes[mid] <n and primes[mid+1]>n that  means we reached 
		//nearrest prime
		if (primes[mid] < n && primes[mid+1] > n) 
            return primes[mid]; 
        if (n < primes[mid]) 
            return binarySearch(left, mid-1, n); 
        else
            return binarySearch(mid+1, right, n); 
    } 
    return 0; 
}






int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while(t --> 0){
		int x ,y;
		cin >> x >> y;
		x=x+y;
		//now we are left with the job of fidning the nearset prime 
		//number after the given number x i.e x+y 
		

	}


return 0;
}