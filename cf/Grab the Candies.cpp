#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int t = 0; cin >> t;

    while(t--){
        int n = 0; cin >> n;
        int m = 0, b = 0;

        for(int i = 0; i < n; ++i){
            int x = 0; cin >> x;
            if(x % 2 == 0) m += x;
            else b += x;
        }

        cout << (m > b ? "YES" : "NO") << endl;
    }
    return 0;
}
