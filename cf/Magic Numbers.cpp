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
    int len = log10(n) + 1;
    bool ok = false;
    int cnt = 0;
    for(int i = 0; i < len; ++i){
        if(cnt > 2){ok = false; break;}
        if(n % 10 == 1) {cnt = 0;ok = true;}
        else if(n % 10 == 4){ok = false; cnt++;}
       else  {ok = false; break;}
        n /= 10;
    }
    cout << (ok ? "YES" : "NO");


    return 0;
}
