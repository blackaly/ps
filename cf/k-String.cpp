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
    int len = str.length();
    string res = "";
    bool ok = false;

    // vector<int> freq(1 + 'z', 0);
    // for(int i = 0; i < len; ++i){
    //             freq[str[i]]++;
    // }

    sort(str.begin(), str.end());

    for(int i = 0; i < len; i += n){
        if(str[i] == str[i + n - 1]) res += str[i];
        else {ok = true; break;}
    }
    if(ok) cout << -1 << endl;
    else
    {
        for(int i = 0; i < n; ++i)
           cout << res;
    }
    return 0;
}
