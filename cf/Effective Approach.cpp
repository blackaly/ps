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
    vector<int> vt(n, 0);
    map<int, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> vt[i];
        mp[vt[i]] = i + 1;
    }

    int m = 0; cin >> m;
    long long cnt[2] = {0};
    for(int i = 0; i < m; ++i){
        int k = 0; cin >> k;

        cnt[0] += mp[k];
        cnt[1] += (n + 1) - mp[k];

    }

    cout << cnt[0] << " " << cnt[1];

    return 0;
}
