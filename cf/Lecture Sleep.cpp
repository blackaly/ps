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

    vector<int> a(n, 0);

    int sum = 0;

    for(int i = 0; i < n; ++i)
        cin >> a[i];

    for(int i = 0; i < n; ++i)
    {
        int x = 0; cin >> x;

        if(x == 1){
            sum += a[i];
            a[i] = 0;
        }

    }

    vector<int> prefix(n + 1, 0);

    for(int i = 1; i <= n; ++i){
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    int mx = 0;
    for(int i = k; i <= n; ++i){
        mx = max(mx, prefix[i] - prefix[i - k]);
    }

    cout << sum + mx;
    return 0;
}
