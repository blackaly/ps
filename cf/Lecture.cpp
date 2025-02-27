
// Author: Ali Muhammad   # Date: 2025-02-27 10:17:54
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n = 0, m = 0; cin >> n >> m;
	map<string, string> mp;

	for(int i = 0; i < m; ++i)
	{
		string a, b; cin >> a >> b;
		mp[a] = b;
	}

	for(int i = 0; i < n; ++i)
	{
		string a; cin >> a;
		if(a.length() > mp[a].length())
			cout << mp[a] << " ";
		else if(a.length() < mp[a].length())
			cout << a << " ";
		else
			cout << a << " ";
	}


	return 0;
}

