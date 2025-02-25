#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define o                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    o;
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<int> vt(n, 0);
        map<int, int> mp;
        ll count = 0;
        for(int i = 0; i < n; ++i) cin >> vt[i]; 
        for(int i = 0; i < n; ++i){
            count += mp[vt[i] - i]++;
        }
        cout << count << endl;
    }
    return 0;
}