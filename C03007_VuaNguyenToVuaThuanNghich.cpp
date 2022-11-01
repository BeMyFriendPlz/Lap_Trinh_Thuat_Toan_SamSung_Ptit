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

int thuanNghich(int n) {
	string s = to_string(n);
	for(int i=0;i<=s.length()/2;i++) {
		if(s[i] != s[s.length()-1-i]) return 0;
	}
	return 1;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int dem = 0;
		for(int i=n;i<=m;i++) {
			if(thuanNghich(i) && ngTo(i)) {
				cout << i << " ";
				dem++;
				if(dem%10==0) cout << endl;
			}
		}
		cout << endl << endl;
	}
}
