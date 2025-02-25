
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int n = 0; cin >> n;
	vector<long long> vt(n, 0);

	deque<long long> evenOrOdd;
	if(n%2 == 0)
	{
		for(int i = 0; i < n; ++i)
		{
			cin >> vt[i];
			if((i+1)%2 == 0) evenOrOdd.push_front(vt[i]);
		}
	}
	else
	{
		for(int i = 0; i < n; ++i)
		{
			cin >> vt[i];
			if((i+1)%2) evenOrOdd.push_front(vt[i]);
		}
	}


	while(!evenOrOdd.empty())
	{
		cout << evenOrOdd.front() << ' ';
		evenOrOdd.pop_front();
	}
	if(n%2 == 0)
	{
		for(int i = 0; i < n; i+=2)
		{
			cout << vt[i] << ' ';
		}
	}
	else
	{
		for(int i = 1; i < n; i += 2)
			cout << vt[i] << ' ';
	}
	return 0;
}

