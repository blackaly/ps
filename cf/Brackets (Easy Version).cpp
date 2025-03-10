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
    if(str.length() == 0){
        cout << "yes";
        return 0;
    }

    stack<char> st;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '(')
            st.push(str[i]);
        else
        {
            if(!st.empty())
                st.pop();
            else {st.push(str[i]); break;}
        }
    }

    if(st.empty()) cout << "yes";
    else cout << "no";


    return 0;
}
