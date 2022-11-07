#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
long long mod = 123456789;

long long Pow(long long n, long long k) {
	if(k==1) return n;
	long long x = Pow(n, k/2);
	if(k%2==0) {
		return (x * x) % mod;
	} else {
		return (((x * x) % mod) * n) % mod;
	}
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while(t--) {
		long long n; cin >> n;
		cout << Pow(2,n-1) << endl;
	}
}
