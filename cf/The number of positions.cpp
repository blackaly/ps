#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int n, a, b; cin >> n >> a >> b;
    cout << (n - max(a + 1, n - b) + 1);
    return 0;
}
