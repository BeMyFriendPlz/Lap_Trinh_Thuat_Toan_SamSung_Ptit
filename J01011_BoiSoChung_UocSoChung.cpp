#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		long long n,m;
		cin >> n >> m;
		long long bcnn = __gcd(n,m);
		long long ucln = n * m / bcnn;
		cout << ucln << " " << bcnn << endl;
	}
}
