#include <bits/stdc++.h>
#include <stack>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	string s;
	cin.ignore();
	while(t--){
		getline(cin,s);
		stack<char> a;
		bool OK = false;
		for(int i=0;i<s.size();i++){
			if(s[i]==')'){
				OK = true;
				char top = a.top(); a.pop();
				while(top != '('){
					if(top=='+' || top=='-' || top=='*' || top=='/' || top=='^'){
						OK = false;
					}
					top = a.top(); a.pop();
				}
				if(OK) break;
			}else a.push(s[i]);
		}
		if(OK) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
