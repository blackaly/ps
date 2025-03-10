#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

string to_lower(string s){
    int n = s.length();
    string res = "";
    for(int i = 0; i < n; ++i) res += tolower(s[i]);

    return res;
}

int main() {
    makefast;
    string str = ""; cin >> str;
    str = to_lower(str);
    string ans = "";
    int n = str.length();

    for(int i = 0; i < n; ++i){
        if(str[i] == 'a' || str[i] == 'u' || str[i] == 'o' || str[i] == 'i' || str[i] == 'e' || str[i] == 'y') continue;

        ans.push_back('.');
        ans.push_back(str[i]);
    }

    cout << ans;
    return 0;
}
