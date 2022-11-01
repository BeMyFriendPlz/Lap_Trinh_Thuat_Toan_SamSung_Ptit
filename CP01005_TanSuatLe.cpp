#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, x; cin >> n;
		map<int,int> map;
		for(int i=0;i<n;i++) {
			cin >> x;
			map[x]++;
		}
		for(auto x: map) {
			if(x.second % 2 == 1) {
				cout << x.first << endl;
				break;
			}
		}
	}
}
