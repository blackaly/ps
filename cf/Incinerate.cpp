#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        int n = 0, k = 0; cin >> n >> k;
        int j = 0;

        vector<int>h(n, 0);
        vector<int>p(n, 0);

        for(int i = 0; i < n; ++i)
            cin >> h[i];

        for(int i = 0; i < n; ++i)
            cin >> p[i];

        sort(p.begin(), p.end());


        while(k != 0 && j < n){

            for(int i = 0; i < n; ++i){

                if(h[i] == 0) continue;

                if(h[i] - k < 0)
                    h[i] = 0;
                else
                    h[i] = h[i] - k;
            }

            k = k - p[j];
            ++j;

        }
        bool flag = true;

        for(int i = 0; i < n; ++i){
            if(h[i] != 0)
            {
                flag = false;
                break;
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}
