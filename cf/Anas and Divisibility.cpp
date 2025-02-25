#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string str = ""; cin >> str;

    if((str[str.length() - 1]  - '0') % 2 == 0) cout << "YES";
    else cout << "NO";


    return 0;
}
