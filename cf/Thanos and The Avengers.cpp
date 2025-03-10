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
    ll m = 0; cin >> m;

    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int cnt = 0;
    ll sum = 0;

    for(int i = n - 1; i >= 0; --i){
        sum += arr[i];
        if(sum >= m) break;
        ++cnt;
    }

    if(cnt == n) cout << "-1";
    else cout << cnt + 1;

    return 0;
}
