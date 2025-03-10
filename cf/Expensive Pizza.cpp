#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    stack<ll> st;

    int n = 0; cin >> n;

    for(int i = 0; i < n; ++i){
        ll x = 0; cin >> x;

        if(st.empty()) st.push(x);
        else{
            while(!st.empty() && st.top() < x){
                cout << x << ' ';
                st.pop();
            }

            st.push(x);
        }
    }

    for(int i = 0; i < st.size(); ++i)
        cout << -1 << ' ';


    return 0;
}
