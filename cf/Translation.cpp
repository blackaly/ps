#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    string str; cin >> str;
    string _str; cin >> _str;

    reverse(_str.begin(), _str.end());

    cout << (str == _str ? "YES" : "NO");

    return 0;
}
