#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int N,K;
	cin>>N>>K;
	vector<pair<long long int, long long int>>AB(N);
	priority_queue<pair<long long int,long long int>, vector<pair<long long int,long long int>>, greater<pair<long long int,long long int>>>que;
	for(int i = 0; i < N; i++){
		cin>>AB[i].first>>AB[i].second;
		que.push(AB[i]);
	}
	long long int ans=0;
	for(int i = 0; i < K; i++){
		auto now=que.top(); que.pop();
		ans+=now.first;
		now.first+=now.second;
		que.push(now);
	}
	cout<<ans<<endl;
}

	

