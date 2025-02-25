
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n = 0; cin >> n;
	string s = ""; cin >> s;

	deque<int> de;
	de.push_front(0);

	int index = 0;

	for(int i = 1; i <= n; ++i)
	{

		if(i == 1)
		{
			if(s[i-1] == 'L') de.push_front(i);
			else
			{
				de.push_back(i);
				index++;
			}
			continue;
		}
		stack<int> left;
		stack<int> right;
		int l = 0;
		int r = de.size() - 1;
		while(l < r)
		{
			if(l < index)
			{
				left.push(de.front());
				de.pop_front();
				l++;
			}
			else if(r > index)
			{
				right.push(de.back());
				de.pop_back();
				r--;
			}
		}

		if(s[i-1] == 'L')
		{
			de.push_front(i);
		}
		else
		{
			de.push_back(i);
			index++;
		}

		while(!right.empty() || !left.empty())
		{
			if(!right.empty())
			{
				de.push_back(right.top());
				right.pop();
			}
			else
			{
				de.push_front(left.top());
				left.pop();
			}
		}

	}

	while(!de.empty())
	{
		cout << de.front() << ' ';
		de.pop_front();
	}

	return 0;
}

