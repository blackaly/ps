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
    int mx = 0;
    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i) cin >> arr[i];

    vector<int> freq(2000001, 0);

    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            freq[arr[i] + arr[j]]++;
        }
    }

    for(int i = 0; i < freq.size(); ++i) mx = max(mx, freq[i]);

    cout << mx;

    return 0;
}
