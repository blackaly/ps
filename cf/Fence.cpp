#include <bits/stdc++.h>
#define endl "\n"
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

int main() {
    makefast;

    int n = 0, k = 0; cin >> n >> k;
    vector<long long> prefix(n, 0);

    int sum = 0;

    for(int i = 1; i <= n; ++i){
        int x = 0; cin >> x;
        sum += x;
        prefix[i] = sum;
    }

    int ans = 0;
    int mn = INT_MAX;
    for(int i = k; i <= n; i++){
        long long a = prefix[i] - prefix[i - k];

        if(a < mn){
            mn = a;
            ans = i - k + 1;
        }
    }


    cout << ans;
    return 0;
}
