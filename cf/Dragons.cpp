#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int s = 0; cin >> s;
    int n =  0; cin >> n;
    vector<pair<int, int>> arr;

    for(int i = 0; i < n; ++i){
        int x = 0; cin >> x;
        int y = 0; cin >> y;

        arr.push_back(make_pair(x, y));
    }

    sort(arr.begin(), arr.end());
    bool flag = false;
    for(int i = 0; i < n; ++i){
        if(arr[i].first < s) s += arr[i].second;
        else {flag = true; break;}
    }

    cout << (flag ? "NO" : "YES");

    return 0;
}
