#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0, m = 0; cin >> n >> m;
    // flag = true;
    int counter = 0;
    for(int i = 0; i < n * m; ++i){
        char a = ' '; cin >> a;
        if(a == 'B' || a == 'W' || a == 'G')
            ++counter;
    }
    // cout << counter << endl;
    if(counter == m * n)
        cout << "#Black&White";
    else cout << "#Color";

    return 0;
}
