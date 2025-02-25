#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    ll n = 0; cin >> n;
    ll m = 0; cin >> m;

    if(n == 0){cout << m; return 0;}

    ll ans = (m - (n % m)) + n;

    cout << (m == ans - n? 0 : ans - n);


    // ll cnt = 0;
    //
    // if(n == 0) {cout << m; return 0;}
    // else if(m == 0) {cout << m; return 0;}
    //
    // while(n % m != 0){
    //     ++cnt;
    //     ++n;
    // }
    //
    // cout << cnt;

    return 0;
}
