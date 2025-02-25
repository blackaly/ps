#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    long long n = 0; cin >> n;

    long long sum = (n / 2) * 1;

    if(n % 2 == 0) cout << sum;
    else cout << sum - n;

    return 0;
}
