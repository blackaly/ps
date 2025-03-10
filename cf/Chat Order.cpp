#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    // int q = 0; cin >> q;
    // set<pair<int, string>> sp;
    //
    // while(q--){
    //     string str = ""; cin >> str;
    //     pair<int, string> x = make_pair(q, str);
    //     sp.insert(x);
    // }
    // set<string> st;
    //
    // for(auto const& a : sp)
    // {
    //     if(st.find(a.second) != st.end()){
    //         continue;
    //     }
    //     st.insert(a.second);
    //     cout << a.second << endl;
    //
    //
    // }

    // using stack


    int q = 0; cin >> q;
    stack<string> st;
    set<string> s;


    while(q--){
        string str = ""; cin >> str;
        s.insert(str);
        st.push(str);
    }


    while(!st.empty()){
        if(s.find(st.top()) != s.end()){
            cout << st.top() << endl;
            s.erase(st.top());
            st.pop();
        }else st.pop();
    }


    return 0;
}
