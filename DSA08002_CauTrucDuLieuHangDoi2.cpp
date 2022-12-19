#include <bits/stdc++.h>
#include <queue>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	queue<int> Q;
	while(n--){
		string x; cin >> x;
		if(x=="PUSH"){
			int a; cin >> a;
			Q.push(a);
		}else if(x=="POP"){
			if(!Q.empty()) Q.pop();
		}else {
			if(!Q.empty()) cout << Q.front() << endl;
			else cout << "NONE" << endl;
		}
	}
}
