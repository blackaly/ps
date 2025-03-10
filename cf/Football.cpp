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
    string file = "";
    map<string, int> freq;
    int max = 0;
    string ans = "";

    while(n--){
        cin >> file;
        freq[file]++;

        if(max < freq[file]){
            max = freq[file];
            ans = file;
        }

    }

    cout << ans;

    return 0;
}
