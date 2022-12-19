#include <bits/stdc++.h>
#include <queue>
#include <map>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		priority_queue <int> Q;
		map <char,int> M;
		int k;
		string s;
		cin >> k >> s;
		for(int i=0;i<s.size();i++){
			M[s[i]]++;
		}
		for(auto x:M){
			Q.push(x.second);
		}
		while(k--){
			int x = Q.top();
			Q.pop();
			Q.push(x-1);
		}
		int ans = 0;
		while(!Q.empty()){
			int x = Q.top(); Q.pop();
			ans += x*x;
		}
		cout << ans << endl;
	}
}
