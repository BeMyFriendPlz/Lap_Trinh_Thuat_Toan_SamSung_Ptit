#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int a,b;
		cin >> a >> b;
		cout << __gcd(a,b) << endl;
	}
}
