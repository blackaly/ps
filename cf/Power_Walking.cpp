
// Author: Ali Muhammad   # Date: 2025-02-27 11:07:47
// It's all about observation
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; cin >> t;
	while(t--)
	{
		int n = 0; cin >> n;
		set<int> st;
		for(int i = 0; i < n; ++i)
		{
			int a = 0; cin >> a;
			st.insert(a);
		}
		int cnt = st.size();
		for(int i = 0; i < cnt; ++i)
		{
			cout << cnt << " ";
		}
		for(int i = cnt; i < n; ++i)
		{
			cout << ++cnt << " ";
		}
		cout << endl;
	}


	return 0;
}

