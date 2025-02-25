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
    int cnt = 1;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; ++i){
        if(cnt == arr[i]) cnt++;
    }
    cout << cnt;
    return 0;
}
