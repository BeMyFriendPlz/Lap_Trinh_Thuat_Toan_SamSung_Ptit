#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s; cin >> s;
	set<int> s1;
	for(int i=0;i<s.size();i++) {
		s1.insert(s[i]);
	}
	cout << s1.size();
}
