#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int>D(8);
	for(int i = 0; i< 8;i++){
		cin>>D[i];
	}
	sort(D.rbegin(),D.rend());
	cout<<D[0]<<endl;
}
	
