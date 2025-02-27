
// Author: Ali Muhammad   # Date: 2025-02-27 10:08:35
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	map<string, string> mp;
	string a, b, line;

	while(getline(cin, line))
	{
		if(line == "") break;
		istringstream sin(line);
		sin >> a >> b;
		mp[b] = a;
	}

	while(cin >> a)
	{
		string s = mp[a];
		if(s == "")
		{
			cout << "eh" << endl;
			continue;
		}
		cout << s << endl;
	}

	return 0;
}

