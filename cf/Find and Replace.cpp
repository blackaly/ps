#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int t = 0; cin >> t;
    while(t--){
        int n = 0; cin >> n;
        string str = ""; cin >> str;
        vector<int> arr(26, -1);
        bool f = true;
        for(int i = 0; i < n; ++i){
            if(arr[str[i] - 'a'] == -1)
                arr[str[i] - 'a'] = i % 2;
            else{
                // distance between two same elements should be the same.
                if(arr[str[i] - 'a'] !=  (i % 2)) {f = false; break;}
                else continue;
            }
        }

        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}
