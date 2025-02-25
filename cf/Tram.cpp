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
    int mx = INT_MIN;
    int current_pass = 0;
    int temp = 0;
    for(int i = 0; i < n; ++i){
        int x = 0, y = 0; cin >> x >> y;
        if(temp - x + y > mx){
            mx = temp - x + y;
        }
        temp = temp - x + y;
    }

    cout << mx;

    return 0;
}
