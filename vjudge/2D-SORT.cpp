
// Author: Ali Muhammad   # Date: 2025-02-25 15:07:40
#include <bits/stdc++.h>

using namespace std;



int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t = 0; scanf("%d", &t);

	while(t--)
	{
	 	multimap<long long, long long> mp;
		int n = 0; scanf("%d", &n);

		for(int i = 0; i < n; ++i)
		{
			long long x = 0, y = 0;
			scanf("%lld %lld", &x, &y);
			mp.insert(make_pair(x, y));
		}

		for(auto& x: mp) printf("%lld %lld\n", x.first, x.second);
	}


	return 0;
}

