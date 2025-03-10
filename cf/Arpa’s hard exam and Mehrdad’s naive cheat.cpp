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
    int k = n % 4;
    if(n != 0){
        if(k == 0) cout << 6;
        else if(k == 1) cout << 8;
        else if(k == 2) cout << 4;
        else if(k == 3) cout << 2;
    }else cout << 1;

    return 0;
}
