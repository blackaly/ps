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
    for(int i = 2; i <= sqrt(n); ++i){
            int square = 0;

            while(n % i == 0){
                square++;
                n /= i;
            }
        if(square == 0) continue;
        cout << i << " " << square << endl;
    }

    if(n > 1) cout << n << " " << 1 << endl;

    return 0;
}
