#include <bits/stdc++.h>
#include <queue>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	deque<int> Q;
	while(n--){
		string x; cin >> x;
		if(x=="PUSHFRONT"){
			int a; cin >> a;
			Q.push_front(a);
		}else if(x=="PUSHBACK"){
			int a; cin >> a;
			Q.push_back(a);
		}else if(x=="POPFRONT"){
			if(!Q.empty()) Q.pop_front();
		}else if(x=="POPBACK"){
			if(!Q.empty()) Q.pop_back();
		}else if(x=="PRINTFRONT"){
			if(!Q.empty()) cout << Q.front() << endl;
			else cout << "NONE" << endl;
		}else {
			if(!Q.empty()) cout << Q.back() << endl;
			else cout << "NONE" << endl;
		}
	}
}
