#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	string s = ""; cin >> s;
	int q = 0; cin >> q;
	int n = s.length();


	while(q--)
	{
		int c = 0; cin >> c;
		if(c == 1)
		{
			reverse(s.begin(), s.end());
		}
		else
		{
			int x = 0; cin >> x;
			char p; cin >> p;
			if(x == 1) s.insert(s.begin(), p);
			else s.append(1, p);
		}
	}

	cout << s;

	return 0;
}

