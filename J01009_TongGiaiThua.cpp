#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

long long giaiThua(int n) {
	long long gt = 1;
	for(int i=2;i<=n;i++) {
		gt *= i;
	}
	return gt;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	long long sum = 0;
	for(int i=1;i<=n;i++) {
		sum += giaiThua(i);
	}
	cout << sum << endl;
}
