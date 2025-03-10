
// Author: Ali Muhammad   # Date: 2025-03-08 14:11:55
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n; cin >> n;
	for(int i = 0; i < n; ++i)
	{
		string s; cin >> s;
		set<char> st;
		int counter = 0;
		for(int j = 0; j < s.length(); ++j)
		{
			st.insert(s[j]);
			if(st.size() > 3)
			{
				counter++;
				st.clear();
				st.insert(s[j]);
			}
		}
		if(st.size() > 0) counter++;
		cout << counter << endl;
	}
	return 0;
}

