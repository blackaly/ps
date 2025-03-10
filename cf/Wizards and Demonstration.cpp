#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int n, x, y; cin >> n >> x >> y;
    int res = (ceil(n * (y / 100.0) - x));
    cout << (res < 0 ? 0: res);
    return 0;
}
