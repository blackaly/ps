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
    double k = 0; cin >> k;
    vector<int> prefix(n + 1, 0);

    for(int i = 1; i <= n; ++i)
    {
        int x = 0; cin >> x;
        prefix[i] = x + prefix[i - 1];
    }

    double mx = 0;

    for(int i = k; i <= n; i++){
        mx = max(mx, (prefix[i] - prefix[i - k]) / double(n - k + 1));
    }

    mx = max(mx, (prefix[n]  / double(n - k + 1)));

    cout << mx;

    return 0;
}
