#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int x, long long int y){
	if(x<y){
		return gcd(y,x);
	}
	if(y==0){
		return x;
	}
	return gcd(y, x % y);
}

int main(){
	long long int N,M;
	cin>>N>>M;
	cout<<M-gcd(N,M)<<endl;
}
