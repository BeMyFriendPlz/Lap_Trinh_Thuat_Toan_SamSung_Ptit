#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int dp[n+5]; // so luong so co tong binh phuong bang i;
		for(int i=0;i<=n;i++){
			dp[i] = i; // gan cho dp cua i gia tri max la bang i lan so 1;
			for(int j=1;j<=sqrt(i);j++){
				dp[i] = min(dp[i],dp[i-j*j] + 1);
			}
		}
		cout << dp[n] << endl;
	}
}
