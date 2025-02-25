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
    vector<ll> arr(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    for(int i = 0; i < n - 1; ++i){
            ll mn = min(arr[i], arr[i + 1]);

            arr[i] = arr[i] - mn;
            arr[i + 1] = arr[i + 1] - mn;
    }

    cout << (*max_element(arr.begin(), arr.end()) == 0 ? "YES" : "NO");


    return 0;
}
