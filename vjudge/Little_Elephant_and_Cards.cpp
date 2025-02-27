
// Author: Ali Muhammad   # Date: 2025-02-27 06:45:09
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	int n = 0; cin >> n;
	unordered_map<long long, int> front_color;
	unordered_map<long long, long long> sum;
	set<long long> all_colors;

	for(int i = 0; i < n; ++i)
	{
		int x = 0, y = 0; cin >> x >> y;
		front_color[x]++;

		if(x != y) sum[y]++;
		all_colors.insert(x);
		all_colors.insert(y);
	}

	int target = (n+1)/2;
	int mn = n;

	 for(auto& p : front_color) {
        if(p.second >= target) {
            cout << "0";
            return 0;
        }
    }

	for(auto& x: all_colors)
	{
		int front = front_color[x];
		int back = sum[x];

		if(front + back >= target)
		{
			mn = min(mn, target - front);
		}
	}

	if(mn >= n)
	{
		cout << -1;
		return 0;
	}


	printf("%d", mn);

	return 0;
}
