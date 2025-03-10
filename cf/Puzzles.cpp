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
    vector<int> arr(m, 0);

    for(int i = 0;  i < m; ++i) cin >> arr[i];
    int mn = INT_MAX;
    int mx = 0;

    for(int i = 0; i < n; ++i){
        if(arr[i] > mx) mx = arr[i];
        if(mn < arr[i]) mn = arr[i];
    }

    cout << mx - mn;

    return 0;
}
