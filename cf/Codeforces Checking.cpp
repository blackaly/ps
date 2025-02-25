#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0; cin >> n;
    string codeforces = "codeforces";
    while(n--){
        char c = ' '; cin >> c;

        size_t found = codeforces.find(c);
        if (found != string::npos)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
