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

    while(tt--){
        int n=  0; cin >> n;
        vector<int> arr(n, 0);

        for(int i = 0; i < n; ++i) cin >> arr[i];

        for(int i = 0; i < n; ++i)
            cout << arr[i] << ' ';

        int mx = max(arr[0], arr[1]);
        cout << mx << ' ';

        for(int i = 1; i < n - 1; ++i){
            mx = max(mx, arr[i + 1]);
            cout << mx << ' ';

        }

        cout << endl;


    }

    return 0;
}
