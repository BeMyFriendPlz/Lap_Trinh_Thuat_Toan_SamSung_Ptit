#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int ngTo(long long n) {
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3 == 0) return 0;
	for(int i=5;i*i<=n;i+=6) {
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		if(ngTo(n)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
