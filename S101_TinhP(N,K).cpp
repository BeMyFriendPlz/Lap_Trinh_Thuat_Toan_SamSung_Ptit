#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
int mod = 1e9+7;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		long long ans = 1;
		for(int i=n;i>=n-k+1;i--){
			ans = (ans * i)%mod;
		}
		cout << ans << endl;
	}
}
