#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, ss;
    cin >> s >> ss;
    if (s.length() != ss.length()) {
        cout << "No";
        return 0;
    }

    string concatenated = s + s;

    if (concatenated.find(ss) != string::npos) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
