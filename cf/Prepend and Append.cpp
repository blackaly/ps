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

            while((str[0] == '0' && str[str.length() - 1] == '1')  || (str[0] == '1' && str[str.length() - 1]== '0')){
                str = str.substr(1, str.length() - 2);
            }

            cout << str.length() << endl;

        }

    return 0;
}
