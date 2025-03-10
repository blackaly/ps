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
    int k = n;
    int cnt = 0;
    stack<string> st;
    string e = "End";
    while(n--){
        string str = ""; cin >> str;

        if(n == k - 1){
            if(str != "Header"){
                cout <<"WA";
                return 0;
            }
        }else if(n == 0){
            if(str != e + "Header"){
                cout << "WA";
                return 0;
            }
        }

        if(str == "Header")
            ++cnt;


        if(cnt > 1) {cout << "WA"; return 0;}

        if(!st.empty()){
            if(e + st.top() == str)
                st.pop();
            else st.push(str);
        }
        else st.push(str);

    }

    if(!st.empty()) cout << "WA";
    else cout << "ACC";

    return 0;
}
