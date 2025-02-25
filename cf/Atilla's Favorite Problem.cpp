#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        int n = 0; cin >> n;
        string str = ""; cin >> str;

        sort(str.begin(), str.end());

        int sum = 0;

        for(char i = 'a'; i <= str[n - 1]; ++i){
            sum += 1;
        }

        cout << sum << endl;

    }
    return 0;
}
