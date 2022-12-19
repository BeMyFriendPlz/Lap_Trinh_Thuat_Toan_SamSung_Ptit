#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	string s;
	cin.ignore();
	while(t--){
		cin >> s;
		stack <char> st;
		int ans = 0;
		for(int i=0;i<s.size();i++){
			if(st.empty()){
				st.push(s[i]);
			}else if(s[i]==')' && st.top()=='('){
				st.pop();
			}else{
				st.push(s[i]);
			}
		}
		char top = st.top();
		st.pop();
		while(!st.empty()){
			if(top==')' && st.top()==')'){
				ans++;
				st.pop();
			}else if(top=='(' && st.top()=='('){
				ans++;
				st.pop();
			}else if(top=='(' && st.top()==')'){
				ans+=2;
				st.pop();
			}
			if(!st.empty()){
				top = st.top();
				st.pop();
			}
		}
		cout << ans << endl;
	}
}
