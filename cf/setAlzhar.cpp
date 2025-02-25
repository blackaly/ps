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
    set<ll> st;
    while(q--){
        string str = ""; cin >> str;
        ll x = 0; cin >> x;

        if(str == "insert")
            st.insert(x);

        else if(str == "find"){
            if(st.find(x) != st.end())
                cout << "found" << endl;
            else cout << "not found" << endl;

        }else if(str == "lower_bound"){
            auto it = st.lower_bound(x);
            cout << (it != st.end() ? *it : -1) << endl;
        }else{
            auto it = st.upper_bound(x);
            cout << (it != st.end() ? *it : -1) << endl;
        }


    }

    return 0;
}
