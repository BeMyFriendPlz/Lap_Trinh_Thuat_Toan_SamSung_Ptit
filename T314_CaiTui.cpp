#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
int c[1005][1005] = {0};
int ans = 0;

void Xuly(int a[],int w[],int n, int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i] > j){
				c[i][j] = c[i-1][j];
			}else{
				c[i][j] = max(c[i-1][j],w[i] + c[i-1][j-a[i]]);
			}
			ans = max(ans,c[i][j]);
		}
	}
}

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n+1],w[n+1];
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=n;i++){
			cin >> w[i];
		}
		ans = 0;
		memset(c,0,sizeof(c));
		Xuly(a,w,n,m);
		cout << ans << endl;
	}
}
