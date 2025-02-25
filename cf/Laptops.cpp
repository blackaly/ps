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
    bool ok = 0;
    // int tempa = 0; cin >> tempa;
    // int tempb = 0; cin >> tempb;

    vector<pair<int, int>> vp(n);

    for(int i = 0; i < n; ++i) cin >> vp[i].first >> vp[i].second;

    sort(vp.begin(), vp.end());

    for(int i = 1; i < n; ++i){
        if(vp[i].first < vp[i - 1].first && vp[i].second > vp[i - 1].second){
            ok = 1; break;
        }else if(vp[i - 1].first < vp[i].first && vp[i - 1].second > vp[i].second){
            ok = 1; break;
        }
    }

    if(ok) cout << "Happy Alex";
    else cout << "Poor Alex";

    return 0;
}
