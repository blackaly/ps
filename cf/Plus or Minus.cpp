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
        int a, b, c; cin >> a >> b >> c;
        int res = a + b - c;

        if(res != 0) cout << '-' << endl;
        else cout << '+' << endl;
    }

    return 0;
}
