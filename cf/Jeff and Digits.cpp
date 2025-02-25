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
    int cntf = 0, cntz = 0;

    for(int i = 0; i < n; ++i){
        int x = 0; cin >> x;
        if(x) cntf++;
        else cntz++;
    }

    if(cntz == 0){cout << -1; return 0;}

    for(int i = 0; i < (cntf / 9) * 9; ++i)
        cout << 5;

    if(cntf < 9) cntz = 1;


    for(int i = 0; i < cntz; ++i)
        cout << 0;

    return 0;
}
