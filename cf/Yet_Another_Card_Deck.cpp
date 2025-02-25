
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n = 0; cin >> n;
	int q = 0; cin >> q;

	vector<int> vt(n, 0);
	for(int i = 0; i < n; ++i) cin >> vt[i];
	vector<int> query(q, 0);
	for(int i = 0; i < q; ++i) cin >> query[i];

	vector<int> query_pos(51, -1);
	for(int i = 0; i < n; ++i)
		if(query_pos[vt[i]] == -1)
			query_pos[vt[i]] = i;

	for(int i = 0; i < query.size(); ++i)
	{
		int pos = query_pos[query[i]];
		cout << pos + 1 << " ";
		for(int j = 0; j < 51; ++j)
		{
			if(query_pos[j] != -1 && query_pos[j] < pos)
				query_pos[j]++;
		}
		query_pos[query[i]] = 0;
	}


	return 0;
}

