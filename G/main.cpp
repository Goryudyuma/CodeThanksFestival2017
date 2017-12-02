#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int N,M;
	cin>>N>>M;
	//	vector<vector<long long int>>D(N);
	vector<long long int>D(N);
	for(int i = 0; i < M; i++){
		long long int a,b;
		cin>>a>>b;
		a--;b--;
		if(a>b){
			//			swap(a,b);
		}
		//D[a].push_back(b);
		D[b]|=(1LL<<a);
		D[a]|=(1LL<<b);
	}
	set<long long int>memo;
	vector<long long int>bitnum(N,-1);
	priority_queue<pair<long long int,long long int>, vector<pair<long long int,long long int>>, greater<pair<long long int,long long int>>>que;
	que.push(make_pair(-1,0));
	long long int ans=0;
	while(que.size()){
		auto now=que.top();que.pop();
		//		cout<<now.first<<" "<<now.second<<endl;
		//if(memo.count(now.second))continue;
		{
			long long int count=0;
			for(int i = 0; i < N; i++){
				if((1LL<<i)&now.second)count++;
			}
			if(N-now.first+count<=ans)continue;
			ans=max(ans,count);
		}
		//memo.insert(now.second);
		for(int i = now.first+1; i < N; i++){
			auto next=now;
			if(D[i]&next.second){
			}else{
				next.second|=(1LL<<i);
				next.first=i;
				que.push(next);
			}
		}
	}
	cout<<ans<<endl;
}
