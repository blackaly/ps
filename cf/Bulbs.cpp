
// Author: Ali Muhammad   # Date: 2025-03-10 14:40:26
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n = 0, m = 0; cin >> n >> m;
	set<int> st;

	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		for(int j = 0; j < x; ++j)
		{
			int y; cin >> y;
			st.insert(y);
		}
	}

	if(st.size() == m) cout << "YES";
	else cout << "NO";

	return 0;
}

