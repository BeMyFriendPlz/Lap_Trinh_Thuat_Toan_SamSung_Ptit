#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
int n, a[15], b[15], check[15];

void in(){
	for(int i=1;i<=n;i++){
		cout << a[b[i]] << " ";
	}
	cout << endl;
}
void Try(int i){
	int j;
	for(j=1;j<=n;j++){
		if(!check[j]){
			b[i] = j; check[j] = true;
			if(i==n) in();
			else Try(i+1);
			check[j] = false;
		}
	}
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1);
	Try(1);
}
