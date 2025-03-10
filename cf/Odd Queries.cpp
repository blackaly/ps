#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int t = 0; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        vector<int> arr(n, 0);
        vector<int> pre(n + 1, 0);
        int sum = 0;
        for(int i = 1; i <= n; ++i){
            cin >> arr[i - 1];
            pre[i] = arr[i - 1] + pre[i - 1];
        }
        while(q--){
            int l, r, k; cin >> l >> r >> k;
            int s = pre[n] - (pre[r] - pre[l - 1]) + (k * (r - l + 1));

            if(s % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}
