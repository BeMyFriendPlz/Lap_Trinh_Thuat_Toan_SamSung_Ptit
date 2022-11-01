#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int ngTo(int n) {
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++) {
		if(n%i==0) return 0;
	}
	return 1;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		bool check = false;
		for(int i=2;i<=n/2;i++) {
			if(ngTo(i) && ngTo(n-i)) {
				cout << i << " " << n-i << endl;
				check = true;
				break;
			}
		}
		if(!check) cout << -1 << endl;
	}
}
