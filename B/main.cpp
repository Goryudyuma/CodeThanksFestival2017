#include<bits/stdc++.h>

using namespace std;

int main(){
	string S;
	cin>>S;
	int ans = 1<<20;
	for(int i = 0; i < S.length(); i++){
		int j = 0;
		bool f=true;
		while(i+j<S.length() && i - j >= 0){
			if(S[i+j] != S[i-j]){
				f=false;
				break;
			}
			j++;
		}
		if(f && i + j == S.length()){
			ans = min(ans, (int)S.length() - j * 2+1);
		}
		j = 0;
		f=true;
		while(i+j+1<S.length() && i - j >= 0){
			if(S[i+j+1] != S[i-j]){
				f=false;
				break;
			}
			j++;
		}
		if(f && i+j+1==S.length()){
		//	cout<<(int)S.length() - j * 2<<endl;
			ans = min(ans, (int)S.length() - j * 2);
		}

	}
	cout<<ans<<endl;
}
