#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int l = 0, r = 0; cin >> l >> r;
    int m = 0; cin >> m;

    ll res = 1;

    for(int i = l; i <= r; ++i)
    {
        if(res == 0) break;

        res *= i;
        res %= m;
    }

    cout << res;


    return 0;
}
