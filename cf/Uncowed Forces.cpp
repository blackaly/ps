#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int x = 500;
    vector<int> vt(5, 0);

    for(int i = 0; i < 5; ++i)
        cin >> vt[i];


    int ans = 0;

    for(int i = 1; i <= 5; ++i){
        int w = 0; cin >> w;
        int l = (x * i) * 0.3;

        ans += max(l, (1 - vt[i - 1] / 250) * (x*i) - (50 * w));
    }

    int h1 = 0; cin >> h1;

    ans += h1 * 100;

    int h2 = 0; cin >> h2;

    ans -= h2 * 50;

    cout << ans;

    return 0;
}
