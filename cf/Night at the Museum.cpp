#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string t = ""; cin >> t;

    char curr  = 'a';
    int len = t.length();
    int ans = 0;
    for(int i = 0; i < len; ++i){
        ans += min(26 - (abs(t[i] - curr)), abs(curr - t[i]));
        curr = t[i];
    }

    cout << ans;

    return 0;
}
