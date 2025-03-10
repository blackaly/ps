#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

int c(int l, int r){
    int a = r - l - c(l, r);

    return a;

}

int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
       int n = 0; cin >> n;
       int distinct = 0;

       vector<int> arr(n, 0);

       for(int i = 0; i < n; ++i) cin >> arr[i];

       sort(arr.begin(), arr.end());

       for(int i = 0; i < n - 1; ++i){
           if(arr[i] != arr[i + 1]) ++distinct;
        }

        int mx = 0;
        int _mx = max(abs(arr[0] - arr[1] - distinct), _mx);

        int l = 0, r = 0;

        for(int i = 0; i < n - 1; ++i){
            mx = max(abs(arr[i] - arr[i + 1] - distinct), mx);

            if(_mx < mx){
                _mx = mx;
            }else{
                l = arr[i];
                r = arr[i + 1];
            }
        }

        cout << l << " " << r << endl;
    }

    return 0;
}
