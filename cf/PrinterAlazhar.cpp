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
        int n = 0; cin >> n;
        vector<int> arr(n, 0);

        for(int i  = 0; i < n; ++i) cin >> arr[i];

        unsigned ll all = 1;

        for(int i = 0; i < n; ++i) all *= arr[i];

        unsigned ll cmp = 1;
        int index = -1;
        for(int i = 0; i < n; ++i){
            cmp *= arr[i];

            if((all / cmp) == cmp){
                index = i + 1;
                break;
            }
        }


        cout << index << endl;

    }

    return 0;
}
