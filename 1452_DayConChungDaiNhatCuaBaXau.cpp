#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
int dp[105][105][105];

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m >> k;
		string s1,s2,s3;
		cin >> s1 >> s2 >> s3;
		memset(dp,0,sizeof(dp));
		int ans = 0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int h=1;h<=k;h++){
					if(s1[i-1] == s2[j-1] && s2[j-1] == s3[h-1]){
						dp[i][j][h] = dp[i-1][j-1][h-1] + 1;
					}else{
						dp[i][j][h] = max(dp[i-1][j][h],max(dp[i][j-1][h],dp[i][j][h-1]));
					}
					ans = max(ans,dp[i][j][h]);
				}
			}
		}
		cout << ans << endl;
	}
}
