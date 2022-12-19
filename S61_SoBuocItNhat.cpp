#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

bool cmp(int a, int b){
	return a <= b;
}

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n), b(n+1);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n+1;i++){
			b[i] = INT_MAX;
		}
		b[0] = INT_MIN;
		int ans = 1;
		for(int i=0;i<n;i++){
			int k = lower_bound(b.begin(),b.end(),a[i],cmp) - b.begin();
			// int k = upper_bound(b.begin(),b.end(),a[i]) - b.begin();
			b[k] = a[i];
			ans = max(ans,k);
		}
		cout << n - ans << endl;
	}
}
