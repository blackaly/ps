#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    unsigned ll n = 0; cin >> n;
    unsigned  ll m = 0; cin >> m;

    unsigned ll res = __gcd(n, m);

    cout << res << " " << (n  / res) * m;
    return 0;
}
