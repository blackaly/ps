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
    int one_h = 0;
    int two_h = 0;

    for(int i = 0; i < n; ++i){
        int x = 0; cin >> x;
        if(x == 100) one_h++;
        else two_h++;
    }

    //if(one_h % 2 != 0) cout << "NO";
    if((one_h % 2 == 0 && one_h != 0) || (two_h % 2 == 0 && two_h != 0) && (one_h == 0))
        cout << "YES";
    else cout << "NO";
    return 0;
}
