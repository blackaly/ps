#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0, m = 0; cin >> n >> m;
    int cnt = 0;
    vector<int> vt(n, 0);

    for(int i = 0; i < n; ++i) cin >> vt[i];


    for(int i = 0; i < n; ++i){
        if(i == 0) ++cnt;

        else{
            if(vt[i] - vt[i - 1] <= m)
                ++cnt;
            else cnt = 1;
        }
    }

    cout << cnt;
    return 0;
}
