#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int k = 0; cin >> k;
    int s = 0; cin >> s;

    int cnt = 0;

    for(int i = 0; i <= k; ++i){
        for(int l = 0; l <= k; ++l){
            bool cond = (s - i - l >= 0) &&
            (s - i - l <= k);

            if(cond) ++cnt;
        }
    }

    cout << cnt;


    return 0;
}
