#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	vector <int> vt;
	while(t--) {
		string s; cin >> s;
		if(s == "PRINT") {
			if(vt.empty()) {
				cout << "NONE" << endl;
			} else {
				cout << vt.back() << endl;
			}
		} else if (s == "POP") {
			if(!vt.empty()) {
				vt.pop_back();
			}
		} else {
			int n; cin >> n;
			vt.push_back(n);
		}
	}
}
