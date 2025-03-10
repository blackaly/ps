#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string s = "0123456789";
    int temp = 0, cnt = 0;

    string ss = "";
    int _temp = 0;
    int n = 0; cin >> n;
    int k = 0; cin >> k;

    for(int i = 0; i < n; ++i){
        cin >> ss;

        for(int j = 0; j <= k; ++j){
            _temp = ss.find(s[j]);
            if(_temp != -1)
                ++temp;
        }

        if(temp >= k + 1)
            ++cnt;

        temp = 0;
    }

    cout << cnt;
    return 0;
}
