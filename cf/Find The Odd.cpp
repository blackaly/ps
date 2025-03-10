#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    set<ll> st;
    int n= 0; cin >> n;

    for(int i = 0; i < n; ++i){
        ll x=  0; cin >> x;

        if(st.find(x) != st.end())
        {
            st.erase(x);
            continue;
        }st.insert(x);
    }

    cout << *(st.begin());

    return 0;
}
