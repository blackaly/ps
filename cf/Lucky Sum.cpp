#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int l = 0; cin >> l;
    int r = 0; cin >> r;
    int cnt = l;
    int sum = 0;
    if(l <= 4) for(int i = l; i <= 4; ++i){
         sum += 4;
         ++cnt;
    }

    for(int i = cnt; i <= r; ++i) sum += 7;

    cout << sum;

    return 0;
}
