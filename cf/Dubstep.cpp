#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string str = ""; cin >> str;
    string _str = "";
    for(int i = 0; i < str.length(); ++i){

        if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            _str += " ";
            i += 2;
        }
        else _str += str[i];
    }

    cout << _str;

    return 0;
}
