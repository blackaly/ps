
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; cin >> t;
	while(t--)
	{
		string s = ""; cin >> s;
		if(s.length() % 2 == 1) cout << "NO" << endl;
		else
		{
			if(s[0] == ')') cout << "NO" << endl;
			else if(s[s.length() - 1] == '(') cout << "NO" << endl;
			else cout << "YES" << endl;
		}
	}


	return 0;
}

