#include <bits/stdc++.h>
#include <stack>
#define endl "\n"
using namespace std;

main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	string s;
	while(t--){
		cin >> s;
		stack<string> st;
		string top1,top2,top;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
				top1 = st.top();
				st.pop();
				top2 = st.top();
				st.pop();
				top = top1 + top2 + s[i];
				st.push(top);
			}else if(s[i]>='A' && s[i]<='Z'){
				top = s[i];
				st.push(top);
			}else if(s[i]>='a' && s[i]<='z'){
				top = s[i];
				st.push(top);
			}
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
