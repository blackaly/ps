#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;


    int n, m, a, b; cin >> n >> m >> a >> b;

    int y = n * a;
    int z = (n / m) * b + (n % m) * a;
    int k = (n / m) * b + b;

    int mn = min(y, z);
    mn = min(mn, k);

    cout << mn;

    return 0;
}
