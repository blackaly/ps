
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	while(1)
	{
		int x = 0;
		cin >> x;
		if(x == 0) break;
		queue<int> qu;
		vector<int> vt;
		int y = 0;
		for(int i = 1; i <= x; ++i) qu.push(i);

		while(!qu.empty())
		{

			if(qu.size() <= 1)
			{
				y = qu.front();
				break;
			}
			vt.push_back(qu.front());
			qu.pop();
			qu.push(qu.front());
			qu.pop();
		}

		for(int i = 0; i < vt.size(); ++i) cout << vt[i] << ' ';
		cout << endl << y;

	}


	return 0;
}

