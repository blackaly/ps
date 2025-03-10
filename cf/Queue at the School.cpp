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
    int t = 0; cin >> t;
    string str = ""; cin >> str;

    while(t--){
        for(int i = 0; i < n - 1; ++i){
            if(str[i + 1] == 'G' && str[i] == 'B'){
                swap(str[i], str[i + 1]);
                ++i;
            }
        }

    }

    cout << str;

    return 0;
}
