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
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            if(!st.empty()){
                if(st.top() >= str[i]){st.push(str[i]); continue;}
                else
                    break;
            }st.push(str[i]);


        }else{
            char x = !st.empty() ? st.top() : '0';
            if(str[i] == ')'){
                if(x == '(')
                {
                    st.pop();
                    continue;
                }else {st.push(x); break;}
            }else if(str[i] == ']'){
                if(x == '['){
                    st.pop();
                    continue;
                }else {st.push(x); break;};
            }else if(str[i] == '}'){
                if(x == '{')
                {
                    st.pop();
                    continue;
                }else {st.push(x); break;}
            }
        }

    }

    if(st.empty()) cout << "yes";
    else cout << "no";


    return 0;
}
