#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string s1; cin >> s1;
    string s2; cin >> s2;
    string res = "";
    for(int i = 0; i < s1.length(); ++i){
        if(s1[i] == '1' && s2[i] == '1')
            res += '0';
        else if((s1[i] == '1' && s2[i] == '0')
        || (s2[i] == '1' && s1[i] == '0'))
            res += '1';
        else
            res += '0';

    }

     cout << res;

    return 0;
}
