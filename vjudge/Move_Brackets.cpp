
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; cin >> t;
	while(t--)
	{
		stack<char> st;
		int n = 0; cin >> n;

		string s = ""; cin >> s;

		for(int i = 0; i < n; ++i)
		{
			if(st.empty()) st.push(s[i]);
			else if(st.top() == ')') st.push(s[i]);
			else if(st.top() == '(' && s[i] == ')') st.pop();
			else st.push(s[i]);
		}

	cout << (st.size() / 2) << endl;

	}


	return 0;
}

