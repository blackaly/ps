
#include <bits/stdc++.h>

using namespace std;

int main() {

	string s = "";
	getline(cin, s);
	int n = s.length();
	set<char> st;
	for(int i = 0; i < n; ++i)
	{
		if(isalpha(s[i]))
			st.insert(s[i]);
	}

	cout << st.size();

	return 0;
}

