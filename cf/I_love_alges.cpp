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
    int cnt = 0;
    int x = 0; cin >> x;
    int mn = x, mx = x;

    for(int i = 1; i < n; ++i){
        cin >> x;

        if(x > mx){
            ++cnt;
            mx = x;
        }
        if(x < mn){
            ++cnt;
            mn = x;
        }
    }

    cout << cnt;

    return 0;
}
