
// Author: Ali Muhammad   # Date: 2025-03-10 14:51:30
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n; cin >> n;
	set<int> st;
	for(int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		st.insert(x);
		if(st.size() % 2)
		{
			auto element = st.begin();
			advance(element, st.size() / 2);
			cout << setprecision(3) << *element/1.0 << endl;
		}
		else
		{
			auto element = st.begin();
			auto element_2 = st.begin();
			int siz = st.size() / 2;
			advance(element, siz);
			advance(element_2, siz - 1);

			cout << setprecision(3) << (float)(*element + *element_2) / 2.0 << endl;
		}
	}

	return 0;
}

