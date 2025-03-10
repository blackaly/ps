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

    vector<int> c(n + 1, 0);
    vector<int> freq(2, 0);

    long long all = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
        freq[i%2] += c[i];
        all += c[i];
    }

    int ans = 0;

    for(int i = 0; i < n; ++i){
        if(i % 2 == 0)
            freq[0] = all - freq[1] - c[i];

        else
            freq[1] = all - freq[0] - c[i];

        if(freq[1] == freq[0])
            ans++;

    }

    cout << ans;

    return 0;
}
