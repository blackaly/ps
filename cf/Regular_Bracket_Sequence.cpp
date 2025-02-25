
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	stack<char> st;
	string s = ""; cin >> s;
	int n = s.length();

	for(int i = 0; i < n; ++i)
	{
		if(st.empty()) st.push(s[i]);
		else if(st.top() == ')') st.push(s[i]);
		else if(st.top() == '(' && s[i] == ')') st.pop();
		else st.push(s[i]);
	}

	cout << (s.length() - st.size()) << endl;


	return 0;
}

