#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;
		int a[n+5];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		int dp[s+5] = {0};
		for(int i=0;i<n;i++) {
			dp[a[i]] = 1;
			for(int j = s; j >= a[i]; j--) {
				if(dp[j-a[i]]==1) dp[j] = 1;
			}
		}
		if(dp[s]==1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
