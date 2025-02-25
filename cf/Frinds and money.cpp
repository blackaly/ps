#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    map<string, int> mp;

    int n = 0; cin >> n;
    int q = 0; cin >> q;

    for(int i = 0; i < n; ++i)
    {
        string str = ""; cin >> str;
        ll x; cin >> x;
        mp[str] = x;
    }

    while(q--){
        int typ = 0; cin >> typ;
        string str = ""; cin >> str;

        if(typ == 1){
            int y = 0; cin >> y;
            mp[str] += y;
        }else cout << mp[str] << endl;


    }

    return 0;
}
