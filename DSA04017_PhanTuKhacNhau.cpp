#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n], b[n-1];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++) cin >> b[i];
		int ans = 0;
		int i = 0;
		while(i < n) {
			if(i == n-1) {
				ans = i + 1;
				break;
			}
			if(a[i] == b[i]) {
				i++;
			} else {
				ans = i + 1;
				break;
			}
		}
		cout << ans << endl;
	}
}
