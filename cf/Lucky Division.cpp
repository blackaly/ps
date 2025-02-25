#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

bool isLucky(int n){
    int k = log(n) + 1;
    int ok = true;
    for(int i = 0; i < k; ++i){
        if(n % 10 != 4 || n % 10 != 7) {ok = false; break;}
    }
    return ok;
}

int main() {
    makefast;

    int n = 0; cin >> n;
    bool ok = false;

    if(isLucky(n)) ok = true;
    else{
        if(n % 4 == 0 || n % 7 == 0) ok = true;
    }

    cout << (ok ? "YES" : "NO");


    return 0;
}
