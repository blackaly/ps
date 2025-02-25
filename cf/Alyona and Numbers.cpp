#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int a = 0; cin >> a;
    int b = 0; cin >> b;

    long long cnt = 0;

    for(int i = 1; i <= b; ++i)
        cnt += ((a + (i % 5)))/ 5;

    cout << cnt;
    return 0;
}
