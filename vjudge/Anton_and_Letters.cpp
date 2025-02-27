
#include <bits/stdc++.h>

using namespace std;

int main() {

 	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	string str = "";
	getline(cin, str);
	int ln = str.length();
	set<char> st;
	for(int i = 0; i < ln; ++i)
	{
		if(isalpha(str[i]))
			st.insert(str[i]);
	}

	cout << st.size();


	return 0;
}

