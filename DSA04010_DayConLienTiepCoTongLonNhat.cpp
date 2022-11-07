#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, x; cin >> n;
		int a[n+1];
		a[0] = 0;
		for(int i=1;i<=n;i++) {
			cin >> x;
			a[i] = a[i-1] + x;
		}
		int max = 0;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<=n;j++) {
				if(a[j] - a[i] > max) {
					max = a[j] - a[i];
				}
			}
		}
		cout << max << endl;
	}
}
