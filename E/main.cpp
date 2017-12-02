#include<bits/stdc++.h>

using namespace std;

vector<long long int>question{1,1*6,1*6*6,1*6*6*6,1*6*6*6*6,1*6*6*6*6*6};

int main(){
	long long int N;
	cin>>N;
	vector<long long int>ans(N);
	int beg = 0;
	while(beg<N){
		cout<<"?";
		for(int i = 0; i < N; i++){
			if(0<=i-beg&&i-beg<6){
				cout<<" "<<question[i-beg];
			}else{
				cout<<" "<<0;
			}
		}
		cout<<endl;
		long long int ret;
		cin>>ret;
		for(int i = 0; i < 6 && i+beg<N; i++){
			ret-=question[i]*8;
		}
		for(int i = 0; i < 6; i++){
			if(ret%2 == 1){
				ans[beg+i]=1;
			}
			ret/=6;
		}
		beg+=6;
	}
	cout<<"!";
	for(int i = 0; i < N;i++){
		cout<<" "<<ans[i];
	}
	cout<<endl;
}

