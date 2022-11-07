#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int Binary(int n, int a[], int k) {
	int l = 0; int r = n-1;
	while(l <= r) {
		int mid = l + (r - l) / 2;
		if(a[mid] == k) {
			return mid + 1;
		} else if(a[mid] < k) {
			l = mid + 1;
		} else {
			r = mid - 1;
		}
	}
	return -1;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int ans = Binary(n,a,k);
		if(ans == -1) {
			cout << "NO" << endl;
		} else {
			cout << ans << endl;
		}
	}
}
