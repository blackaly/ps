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
    vector<int> arr(n, 0);
    vector<ll> pref(n + 1, 0);
    vector<ll> pref_sort(n + 1, 0);
    for(int i = 1; i <= n; ++i){
        cin >> arr[i - 1];
        pref[i] = pref[i - 1] + arr[i - 1];
    }

    sort(arr.begin(), arr.end());

    for(int i = 1; i <= n; ++i)
        pref_sort[i] = pref_sort[i - 1] + arr[i - 1];

    int q = 0; cin >> q;

    while(q--){
        int type, l, r; cin >> type >> l >> r;
        if(type == 1){
            cout << pref[r] - pref[l - 1] << endl;
        }else{
            cout << pref_sort[r] - pref_sort[l - 1]  << endl;
        }
    }
    return 0;
}
