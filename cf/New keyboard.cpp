#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string str = "";

    while(getline(cin >> ws, str)){
        deque<char> dq;
        stack<char> st;
        int ln = str.length();

                for(int i = 0; i < ln; ++i){
                if(str[i] == '[')
                {   i += 1;
                    while(str[i] != ']' && str[i] != '['){
                        if(i < ln) st.push(str[i++]);
                        else break;


                    }
                    while(!st.empty()){
                        dq.push_front(st.top());
                        st.pop();
                    }
                }
                else if(str[i] == ']')
                {
                    i += 1;
                    while(str[i] != '[' && str[i] != ']'){
                        dq.push_back(str[i]);
                        ++i;
                    }
                }else dq.push_back(str[i]);
            }

            for(int i = 0; i < dq.size(); ++i)
                cout << dq[i];

    }




    return 0;
}
