#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n = 0; cin >> n;
	string s = ""; cin >> s;
	string res = "";
	map<string, int> mp;
	for(int i = 0; i < n - 1; ++i)
	{
		string tmp = "";
		tmp = s[i];
		tmp += s[i+1];
		mp[tmp]++;
	}
	int mx = -1;

	for(auto it:mp)
	{
		if(it.second > mx)
		{
			mx = it.second;
			res = it.first;
		}
	}


	cout << res;

	return 0;
}
