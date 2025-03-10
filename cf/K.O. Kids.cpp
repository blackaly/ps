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
    int k = 0; cin >> k;
    int z = k;
    int ans = k;
    string str = ""; cin >> str ;
    char now = 'L';

    while(z--){
        now = 'L';
        for(int i = 0; i < n; ++i){
            if(now == str[i]){
            {
                if(now == 'L') now = 'R';
                else now = 'L';
                continue;
            }
            }else{
                ans--;
                if(str[i] == 'R') str[i] = 'L';
                else str[i] = 'R';
                break;
            }
        }
    }

    cout << (ans < 0 ? 0 : ans);

    return 0;
}
