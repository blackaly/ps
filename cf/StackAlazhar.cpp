#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int q = 0; cin >> q;
    stack<ll> st;

    while(q--){
        string str = ""; cin >> str;
        if(str == "push")
        {
            ll x = 0;
            cin >> x;
            st.push(x);
        }

        else if(str == "top")
            cout << st.top() << endl;
        else
            st.pop();
    }

    return 0;
}
