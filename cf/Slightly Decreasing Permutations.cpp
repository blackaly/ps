#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int k, n; cin >> n >> k;
    if(k == 0) for(int i = 1; i <= n; ++i) cout << i << ' ';
    else{
        // p(n, k) = n, (n - 1) , (n  - 2) ... (n - k + 1);
        for(int i = 0; i < k; ++i)
            cout << n - i << ' ';
        for(int i = k; i < n; ++i)
            cout << i - k + 1 << ' ';
    }
    return 0;
}
