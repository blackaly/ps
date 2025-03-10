#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0, m = 0; cin >> n >> m;

    vector<int> a(n, 0);
    vector<int> b(m, 0);

    for(int i = 0; i < n; ++i)
        cin >> a[i];


    for(int i = 0; i < m; ++i)
        cin >> b[i];


    vector<int> ans(b);

    sort(a.begin(), a.end());

    for(int i = m; i < n; ++i)
        ans.push_back(a[i]);

    for(int i = 0; i < n; ++i)
        cout << ans[i] << ' ';


    return 0;
}
