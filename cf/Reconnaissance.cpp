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
    ll d = 0; cin >> d;

    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i + 1; j < n; ++j){
            if(abs(arr[i] - arr[j]) <= d || arr[i] == arr[j]) ++cnt;

        }
    }

    cout << cnt * 2;

    return 0;
}
