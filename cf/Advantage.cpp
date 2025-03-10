#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--) {
        int n = 0; cin >> n;
        vector<ll> arr(n, 0);

        for(int i = 0; i < n; ++i)
            cin >> arr[i];

        vector<ll> _arr(arr);

        sort(_arr.begin(), _arr.end());

        int _mx = _arr[n - 2];
        int mx = _arr[n - 1];

        int temp = 0;
        for(int i = 0; i < n; ++i){

            if(arr[i] == mx)
            {
                cout << mx - _mx << ' ';
                continue;
            }

            cout << arr[i] - mx << ' ';

        }

        cout << endl;
    }

    return 0;
}
