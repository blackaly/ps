
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; cin >> t;
	while(t--)
	{
		int n = 0; cin >> n;
		int m = 0; cin >> m;
		queue<int> qu;
		int mx = -1;
		int mx_index = 1;
		int indx = 0;
		for(int i = 0; i < n; ++i)
		{
			int x = 0; cin >> x;
			qu.push(x);
		}

		int cnt = 1;
		int tmp_index = qu.size();
		while(!qu.empty())
		{
			int mx = -1;
			for(int j = 0; j < qu.size(); ++j)
			{
				if(mx < qu.front())
				{
					mx = qu.front();
					mx_index = j;
				}
				int tmp = qu.front();
				qu.push(tmp);
				qu.pop();
			}

			if(mx_index == m) break;
			else if(mx_index > m)
			{
				m = tmp_index - (mx_index - m);
				for(int j = 0; j <= mx_index; ++j)
				{
					if(j == mx_index)
					{
						cnt++;
						m--;
						qu.pop();
					}
					else
					{
						int tmp = qu.front();
						qu.push(tmp);
						qu.pop();
					}
				}
			}
			else
			{
				m = m - mx_index;
				for(int j = 0; j <= mx_index; ++j)
				{
					if(j == mx_index)
					{
						cnt++;
						m--;
						qu.pop();
					}
					else
					{
						int tmp = qu.front();
						qu.push(tmp);
						qu.pop();
					}
				}
			}
			tmp_index = qu.size();
		}

		cout << cnt << endl;

	}


	return 0;
}

