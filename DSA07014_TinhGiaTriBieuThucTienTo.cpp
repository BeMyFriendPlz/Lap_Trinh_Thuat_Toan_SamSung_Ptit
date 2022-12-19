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
		stack<int> st;
		int top1,top2,top;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
				top1 = st.top();
				st.pop();
				top2 = st.top();
				st.pop();
				switch (s[i]){
					case '+':{
						top = top1 + top2;
						break;
					}
					case '-':{
						top = top1 - top2;
						break;
					}
					case '*':{
						top = top1 * top2;
						break;
					}
					case '/':{
						top = top1 / top2;
						break;
					}
					default:{
						top = pow(top1,top2);
					}
				}
				st.push(top);
			}else if(s[i]>='0' && s[i]<='9'){
				top = (s[i] - '0');
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
