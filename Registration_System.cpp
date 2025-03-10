
// Author: Ali Muhammad   # Date: 2025-03-08 14:01:40
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n; cin >> n;
	map<string, int> mp;

	for(int i = 0; i < n; ++i)
	{
		string s; cin >> s;
		if(mp.find(s) != mp.end())
		{
			cout << s << mp[s] << endl;
			continue;
		}
		mp[s]++;
		cout << "OK" << endl;
	}

	return 0;
}

