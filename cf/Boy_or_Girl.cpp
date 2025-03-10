
// Author: Ali Muhammad   # Date: 2025-03-10 12:39:31
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	string s = ""; cin >> s;
	set<char> st;
	for(int i = 0; i < s.length(); ++i) st.insert(s[i]);

	cout << (st.size() % 2 == 1? "IGNORE HIM!" : "CHAT WITH HER!");

	return 0;
}

