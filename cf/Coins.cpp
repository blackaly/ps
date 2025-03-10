#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    map<char, int> mp;

    for(int i = 0; i < 3; ++i){
        string s = ""; cin >> s;

        if(s[1] == '>') mp[s[0]]++;
        else mp[s[2]]++;
    }

    if(mp['A'] == 1 && mp['B'] == 1 && mp['C'] == 1){
        cout << "Impossible";
        return 0;
    }

    if(mp['A'] == 0) cout << "A";
    else if(mp['B'] == 0) cout << "B";
    else if(mp['C'] == 0) cout << "C";

    if(mp['A'] == 1) cout << "A";
    else if(mp['B'] == 1) cout << "B";
    else if(mp['C'] == 1) cout << "C";

    if(mp['A'] == 2) cout << "A";
    else if(mp['B'] == 2) cout << "B";
    else if(mp['C'] == 2) cout << "C";

    return 0;
}
