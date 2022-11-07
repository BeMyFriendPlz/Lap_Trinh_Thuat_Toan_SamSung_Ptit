#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m, x;
	cin >> n >> m;
	map<int,int> map;
	set<int> s1, s2;
	for(int i=0;i<n;i++) {
		cin >> x;
		s1.insert(x);
	}
	for(int i=0;i<m;i++) {
		cin >> x;
		s2.insert(x);
	}
	for(auto x : s1) map[x]++;
	for(auto x : s2) map[x]++;
	for(auto x : map) {
		if(x.second == 2) {
			cout << x.first << " ";
		}
	}
	cout << endl;
}
