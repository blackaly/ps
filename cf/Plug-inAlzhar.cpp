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

    stack<char> st;
    int ln = str.length();
    st.push(str[0]);

    for(int i = 1; i < ln; ++i){
        if(!st.empty()){
            char a = st.top();
            if(a == str[i]) st.pop();
            else st.push(str[i]);
        }else st.push(str[i]);

    }

    string _str = "";

    while(!st.empty()){
        _str += st.top();
        st.pop();
    }
    reverse(_str.begin(), _str.end());
    cout << _str;


    return 0;
}
