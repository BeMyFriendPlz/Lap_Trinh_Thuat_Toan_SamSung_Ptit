#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second == b.second){
		return a.first < b.first;
	}
	return a.second < b.second;
}

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		pair<int,int> a[n], temp;
		for(int i=0;i<n;i++) cin >> a[i].first;
		for(int i=0;i<n;i++) cin >> a[i].second;
		sort(a,a+n,cmp);
		int ans = 1;
		temp = a[0];
		for(int i=1;i<n;i++){
			if(a[i].first >= temp.second){
				temp = a[i];
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
