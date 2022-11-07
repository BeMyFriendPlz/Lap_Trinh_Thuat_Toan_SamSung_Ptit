#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		long n; cin >> n;
		long nho = 0, dem = 1;
		while(n > 10) {
			nho = (n%10+nho>=5);
			n /= 10;
			dem *= 10;
		}
		cout << (n+nho)*dem << endl;
	}
}
