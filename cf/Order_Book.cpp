
// Author: Ali Muhammad   # Date: 2025-03-05 19:51:10
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n, k; cin >> n >> k;
	map<int, int, greater<int>> mp_b;
	map<int, int> mp_s;

	for(int i = 0; i < n; ++i)
	{
		char s; cin >> s;
		int x, y; cin >> x >> y;
		if(s == 'B')
		{
			mp_b[x] += y;
		}
		else
		{
			mp_s[x] += y;
		}
	}
	int i = k;
	stack<pair<int, int>> st;
	for(auto& x: mp_s)
	{
		if(i <= 0) break;
		st.push(make_pair(x.first, x.second));
		i--;
	}
	while(!st.empty())
	{
		cout << "S " << st.top().first << " " << st.top().second << endl;
		st.pop();
	}
	i = k;
	for(auto& x: mp_b)
	{
		if(i <= 0) break;
		cout << "B " << abs(x.first) << " " << abs(x.second) << endl;
		i--;
	}

	return 0;
}
