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
    int mx = 0, mn = n + 1;
    int pos_mx = 0, pos_min = 0;
    int ans = 0;

    for(int i = 0; i < n; ++i){
        int k = 0; cin >> k ;

        if(k > mx)
        {
            mx = k;
            pos_mx = i;
        }
        if(k < mn)
        {
            mn = k;
            pos_min = i;
        }

    }

    int left = min(pos_min, pos_mx);
    int right = (n - 1) - max(pos_mx, pos_min);

    if(left > right){
        ans = max(pos_min, pos_mx);
    }else{
        ans = (n - 1) - min(pos_min, pos_mx);
    }

    cout << ans;


    return 0;
}
