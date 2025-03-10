#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define NIL -1

using namespace std;

int main() {
    makefast;

    int n = 0; cin >> n;

    if(n <= 2){
        cout << n;
        return 0;
    }

    vector<int> arr(n, 0);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    int mx = 0; int cnt = 2;
    for(int i = 0; i < n - 2; ++i){
        if(arr[i] + arr[i + 1] == arr[i + 2]) cnt++;
        else{
            mx = max(mx, cnt);
            cnt = 2;
        }
    }
    mx = max(mx, cnt);
    cout << mx;
    return 0;
}
