#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		long long n, ans;
		cin >> n;
		for(int i=2;i<=sqrt(n);i++) {
			while(n%i==0) {
				ans = i;
				n/=i;
			}
		}
		if(n > 1) ans = n;
		cout << ans << endl;
	}
}
