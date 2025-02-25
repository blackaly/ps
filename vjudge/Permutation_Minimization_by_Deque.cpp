
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; cin >> t;

	while(t--)
	{
		int n = 0; cin >> n;

		vector<int> vt(n, 0);
		for(int i = 0; i < n; ++i)
		{
			cin >> vt[i];
		}

		deque<int> de;
		int mx = 10e5;

		for(int i = 0; i < n; ++i)
		{
			if(mx > vt[i])
			{
				mx = vt[i];
				de.push_front(mx);
			}
			else de.push_back(vt[i]);
		}

		while(!de.empty())
		{
			cout << de.front() << ' ';
			de.pop_front();
		}
	}

	return 0;
}

