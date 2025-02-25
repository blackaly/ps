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
    int index_mn = 0, index_mx = 0;
    int mn = INT_MAX, mx = INT_MIN;

    for(int i = 1; i <= n; ++i)
    {
        int x = 0; cin >> x;
        if(x <= mn)
        {
            index_mn = i;
            mn = x;
        }

        if(x > mx)
        {
            mx = x;
            index_mx = i;
        }
    }

    cout << index_mx + (n - index_mn - 1) - (index_mn < index_mx ? 1 : 0);

    return 0;
}
