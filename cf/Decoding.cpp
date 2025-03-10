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
    string str = ""; cin >> str;
    string ans = "";

    ans = str[0];

    for(int i = 1; i < n; ++i){
        if(i % 2 == 0)
            ans += str[i];
        else
            ans = str[i] + ans;
    }

    if(n % 2 == 0) reverse(ans.begin(), ans.end());

    cout << ans;


    return 0;
}
