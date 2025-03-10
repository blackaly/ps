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
    int k = 0; cin >> k;

    k = k - 1;

    vector<int> arr(n, 0);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    int cnt = 1;

    if(!arr[k]) cnt = 0;

    int l = k - 1;
    int r = k + 1;


    while(l >= 0 && r < n){
        if(arr[l] && arr[r]) cnt += 2;
        l--;
        r++;
    }

    if(r <= n - 1){
        while(r < n){
             if(arr[r])
                ++cnt;
            r++;
        }
    }

    if(l > 0){
        while(l >= 0){
             if(arr[l])
                ++cnt;
            l--;
        }
    }

    cout << cnt;



    return 0;
}
