#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
int n, a[15], check[15];

void in() {
	for(int i=1;i<=n;i++) {
		cout << a[i];
	}
	cout << " ";
}

void Try(int i) {
	for(int j=n;j>=1;j--) {
		if(!check[j]) {
			a[i] = j;
			check[j] = 1;
			if(i == n) {
				in();
			} else {
				Try(i+1);
			}
			check[j] = 0;
		}
	}
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		cin >> n;
		Try(1);
		cout << endl;
	}
}
