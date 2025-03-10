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
    int k = 0; cin >> k;
    int ans = 0;
    vector<int> vt(k, 0);

    for(int i = 0; i < n; ++i){
        int x = 0; cin >> x;
        ++vt[x % k];
    }

    ans += vt[0] / 2;

    cout << ans * 2;

    return 0;
}
