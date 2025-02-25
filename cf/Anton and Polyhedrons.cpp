#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int q = 0; cin >> q;
    map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    int sum = 0;

    for(int i = 0; i < q; ++i){
        string str = ""; cin >> str;
        sum += mp[str];
    }

    cout << sum;

    return 0;
}
