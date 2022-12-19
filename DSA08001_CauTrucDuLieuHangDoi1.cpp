#include <bits/stdc++.h>
#include <queue>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n;
		queue<int> Q;
		while(n--){
			cin >> x;
			if(x==1){
				cout << Q.size() << endl;
			}else if(x==2){
				if(Q.empty()) cout << "YES" << endl;
				else cout << "NO" << endl;
			}else if(x==3){
				cin >> x;
				Q.push(x);
			}else if(x==4){
				if(!Q.empty()) Q.pop();
			}else if(x==5){
				if(!Q.empty()) cout << Q.front() << endl;
				else cout << -1 << endl;
			}else if(x==6){
				if(!Q.empty()) cout << Q.back() << endl;
				else cout << -1 << endl;
			}
		}
	}
}
