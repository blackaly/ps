#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int n = 0; cin >> n;

    while(n--){
        int x = 0; cin >> x;
        if(360 % (180 - x) != 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
