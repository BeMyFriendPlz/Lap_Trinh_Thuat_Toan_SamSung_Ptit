#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<m;i++) cin >> b[i];
		int ans = 0;
		int i = 0, j = 0;
		while(k--) {
			if(i == n-1) ans = b[j++];
			if(j == m-1) ans = a[i++];
			if(a[i] < b[j]) {
				ans = a[i];
				i++;
			} else {
				ans = b[j];
				j++;
			}
		}
		cout << ans << endl;
	}
}
