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
    int m = 0; cin >> m;

    vector<int> prefix(str.length(), 0);

    int sum = 1;

    for(int i = 1; i < str.length(); ++i){
        if(str[i] == str[i - 1])
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }

    while(m--){
        int l = 0; cin >> l;
        int r = 0; cin >> r;

        cout << prefix[r - 1] - prefix[l - 1] << endl;
    }

    return 0;
}
