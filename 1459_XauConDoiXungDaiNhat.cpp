#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		string s; cin >> s;
		int ans = 1;
		int n = s.length();
		int a[n+1][n+1];
		memset(a,0,sizeof(a));
		// Xau 1 ki tu luon doi xung
		for(int i=0;i<n;i++) a[i][i] = 1;
		// Xau 2 ki tu doi xung
		for(int i=0;i<n-1;i++) {
			if(s[i] == s[i+1]) {
				a[i][i+1] = 1;
				ans = 2;
			}
		}
		// Kiem tra xau tu 3 ki tu tro len
		for(int k=2;k<n;k++){
			for(int i=0;i<(n-k);i++){
				int j = i + k;
				if(s[i] == s[j]){
					a[i][j] = a[i+1][j-1];
				}
				if(a[i][j]) ans = max(ans,k+1);
			}
		}
		cout << ans << endl;
	}
}
