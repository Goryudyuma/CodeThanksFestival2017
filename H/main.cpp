#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int N,M;
	cin>>N>>M;
	vector<long long int>D(N+M, -1);
	set<pair<long long int,long long int>>S;
	for(int i = 0; i < M; i++){
		long long int a,b;
		cin>>a>>b;
		a--;b--;
		if(a>b)swap(a,b);
		if(S.count(make_pair(a,b))){
			continue;
		}
		S.insert(make_pair(a,b));

		while((D[a]!=-1||D[b]!=-1)&&a!=b){
			if((a<b&&D[a]!=-1)||D[b]==-1){
				a=D[a];
			}else{
				b=D[b];
			}
		}
		if(a!=b){
			D[a]=i+N;
			D[b]=i+N;
		}
	}
	long long int Q;
	cin>>Q;
	for(int i = 0; i < Q; i++){
		long long int a,b;
		cin>>a>>b;
		a--;b--;
		while(a!=-1&&b!=-1&&a!=b){
			if(a<b){
				a=D[a];
			}else{
				b=D[b];
			}
		}
		if(a!=b){
			cout<<-1<<endl;
		}else{
			cout<<a-N+1<<endl;
		}
	}
}
