#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    map<ll, ll> mp;
    int n = 0; cin >> n;
    vector<ll> arr(n, 0);

    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    sort(arr.begin(), arr.end());

    ll cnt = 0;
    ll sum = arr[0] + arr[n - 1];

    for(int i = 0; i < n; ++i){

        cnt += mp[sum - arr[i]];

        if(sum - arr[i] == arr[i])
            --cnt;
    }


    cout << cnt / 2;

    return 0;
}
