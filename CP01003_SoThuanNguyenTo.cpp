#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int ngTo(int n) {
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3 == 0) return 0;
	for(int i=5;i*i<=n;i+=6) {
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}

int kiemTra(int n) {
	int sum = 0;
	while(n > 0) {
		int temp = n%10;
		if(!ngTo(temp)) return 0;
		sum += temp;
		n/=10;
	}
	if(ngTo(sum)) return 1;
	return 0;
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
			if(ngTo(i) && kiemTra(i)) {
				dem++;
			}
		}
		cout << dem << endl;
	}
}
