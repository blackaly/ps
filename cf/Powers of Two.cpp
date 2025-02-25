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
    map<ll, int> mp;

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    ll cnt = 0;

    for(int i = 0; i < n; ++i){
        unsigned int x = 2;
        for(int j = 0; j < 31; ++j){
            cnt += mp[x - arr[i]];
            if(x - arr[i] == arr[i]) --cnt;
            x = x << 1;


        }
    }

    cout << (cnt >> 1);

    return 0;
}
