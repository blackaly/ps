
// Author: Ali Muhammad   # Date: 2025-02-25 14:54:34
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	map<string, int> mp;

	int n = 0; cin >> n;
	string str = ""; cin >> str;
	int mx = -1;
	string ans = "";
	for(int i = 0; i < n - 1; ++i)
	{
		string tmp;
		tmp.push_back(str[i]);
		tmp.push_back(str[i+1]);
		mp[tmp]++;
		if(mx < mp[tmp])
		{
			mx = mp[tmp];
			ans = tmp;
		}
	}

	cout << ans;


	return 0;
}

