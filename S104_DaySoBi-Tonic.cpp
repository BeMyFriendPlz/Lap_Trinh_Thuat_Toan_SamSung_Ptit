#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n, a[105], dp1[105], dp2[105];
		cin >> n;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			dp1[i] = a[i];
			dp2[i] = a[i];
		}
		int ans = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i] > a[j]){
					dp1[i] = max(dp1[i], dp1[j]+a[i]);
				}
			}
		}
		for(int i=n;i>=1;i--){
			for(int j=n;j>i;j--){
				if(a[i] > a[j]){
					dp2[i] = max(dp2[i], dp2[j]+a[i]);
				}
			}
		}
		for(int i=1;i<=n;i++){
			ans = max(ans,dp1[i] + dp2[i] - a[i]);
		}
		cout << ans << endl;
	}
}
