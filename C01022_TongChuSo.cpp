#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int sum = 0;
		for(int i=0;i<s.length();i++) {
			sum += (s[i] - '0');
		}
		cout << sum << endl;
	}
}
