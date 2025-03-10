#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

bool lambda(int a, int b){
    return a > b;
}

int main() {
    makefast;
    int n, m; cin >> n >> m;
    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end(),  lambda);

    int sum = 0;
    int cnt = 0;
    for(int i = n - 1; i >= 0; --i){
        if(cnt == m) break;
        if(arr[i] < 0){
            sum += abs(arr[i]);
            ++cnt;
        }
    }

    cout << sum;

    return 0;
}
