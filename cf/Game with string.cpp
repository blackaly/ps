#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int player = 1;
    string str = ""; cin >> str;

    stack<char> st;

    int ln = str.length();
    st.push(str[0]);

    for(int i = 1; i < ln; ++i){
        if(!st.empty()){
            if(str[i] == st.top() && player == 1)
            {
                player = 2;
                st.pop();
            }else if(str[i] == st.top() && player == 2){
                player = 1;
                st.pop();
            }
            else st.push(str[i]);
        }else st.push(str[i]);
    }

    if(player == 1) cout << "NO";
    else cout << "YES";

    return 0;
}
