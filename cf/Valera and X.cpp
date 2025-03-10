#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int x = 0; cin >> x;
    if(x % 2 == 0){
        cout << "NO";
        return 0;
    }

    // string str = ""; cin >> str;

    vector<char> _str;
    string str = "";
    for(int i = 0; i < x; ++i){
        cin >> str;
        for(int i = 0; i < str.length(); ++i){
            _str.push_back(str[i]);
        }
    }

    bool flag = true;
    char value = _str[0];
    for(int i = 0; i < _str.size() - 2; i+=2){
        if(_str[i] != _str[i + 2]){
            cout << "NO";
            return 0;
        }
    }

    char sample = str[0];

    for(int i = 1; i < _str.size(); i+=2){
        if(_str[i] == sample){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
liiil
ilili
iilii
ilili
liiil
    return 0;
}
