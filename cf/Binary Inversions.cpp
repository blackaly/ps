#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

ll inverse(vector<int>& ar){
    ll ans = 0;
    ll cnt = 0;
    for(int i = ar.size() - 1; i >=0 ; --i){
        if(ar[i] == 0) cnt++;
        else ans += cnt;
    }

    return ans;
}

int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        int n = 0; cin >> n;
        ll mx = 0;

        vector<int> arr(n, 0);

        for(int i = 0; i < n; ++i)
            cin >> arr[i];


        mx = inverse(arr);

        for(int i = 0; i < n; ++i){
            if(arr[i] == 0){
                arr[i] = 1;

                mx = max(mx, inverse(arr));
                arr[i] = 0;
                break;
            }
        }

        for(int i = n - 1; i >= 0; --i){
            if(arr[i] == 1){
                arr[i] = 0;
                mx = max(mx, inverse(arr));
                break;
            }
        }

        cout << mx << endl;

    }

    return 0;
}
