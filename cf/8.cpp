#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0; cin >> n;
    int m = 0; cin >> m;

    set<int> st;

    for(int i = 1; i <= m; ++i)
        st.insert(i);

    while(n--){
        int l = 0; cin >> l;
        int r = 0; cin >> r ;

        for(int i = l; i <= r; ++i)
            st.erase(i);

    }

    cout << st.size() << endl;

    for(auto const& a: st)
        cout << a << ' ';


    return 0;
}
