#include <iostream>
#include <algorithm>
#include <cmath>

using ll = long long;

using namespace std;
int main() {

    ll n = 0; cin >> n;
    ll* arr = new ll[n];

    for(ll i = 0; i < n; ++i) cin >> arr[i];


    for(ll i = 0; i < n; ++i)
        cout <<
        min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]))
        << " "
        << max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]))
        << endl;


    return 0;
}
