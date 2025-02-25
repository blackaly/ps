
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	stack<int> st;
	deque<int> de;

	int n = 0; cin >> n;
	string s = ""; cin >> s;

	if(s[0] == 'L') st.push(0);
	else de.push_back(0);

	for(int i = 0; i <= n - 1; ++i)
	{
		if(s[i+1] == 'R' || i==n-1)
		{
			de.push_back(i+1);
		}
		else
			st.push(i+1);
	}

	while(!st.empty())
	{
		de.push_back(st.top());
		st.pop();
	}

	while(!de.empty())
	{
		cout << de.front() << ' ';
		de.pop_front();
	}



	return 0;
}

