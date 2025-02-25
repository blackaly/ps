#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    ll n = 0; cin >> n;

    ll eq = 180 - (360 / n);

    cout << eq * n;

    return 0;
}
