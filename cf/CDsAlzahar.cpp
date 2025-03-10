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
    int m = 0; cin >> m;

    map<ll, int> mp;

    for(int i = 0; i < n; ++i)
    {
        ll x = 0; cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        ll x = 0; cin >> x;
        mp[x]++;
        if(mp[x] >= 2) ++cnt;
    }cout << cnt;

    return 0;
}
