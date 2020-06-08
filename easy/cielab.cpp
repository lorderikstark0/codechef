#include <bits/stdc++.h>
#include <cstdio>
using namespace std;


int main(){
	int a ,b ;
	cin >> a>> b;
	int num =a-b;
	printf("%d\n",num%10==9 ? num-1 :num+1);
		return 0;
}