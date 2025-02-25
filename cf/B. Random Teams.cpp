#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    ll n = 0, m = 0; cin >> n >> m;
    ll mx = 0;
    ll mn = 0;

    ll temp = n - m + 1;

    mx = (temp * (temp - 1)) / 2;

    ll a = n / m;
    ll b = n % m;
    temp = a * (a - 1) / 2;
    ll _temp = (a + 1) * a  / 2;
    mn = (temp * (m - b)) + (_temp * b);
    // for(int i = 0; i < m; ++i){
    //     mn += dv * (dv - 1) / 2;
    // }
    // if(mn <= 0) mn = 1;
    cout << mn << ' ' << mx;


    return 0;
}
