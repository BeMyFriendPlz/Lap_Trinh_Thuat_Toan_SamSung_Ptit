#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	vector <int> vt;
	while(cin >> s) {
		if(s == "show") {
			if(vt.empty()) {
				cout << "empty" << endl;
			} else {
				for(int x : vt) {
					cout << x << " ";
				}
				cout << endl;
			}
		} else if (s == "pop") {
			if(!vt.empty()) {
				vt.pop_back();
			}
		} else {
			int n; cin >> n;
			vt.push_back(n);
		}
	}
}
