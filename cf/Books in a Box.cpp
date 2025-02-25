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
    stack<int> st;

    while(n--){
        int k = 0; cin >> k;

        if(k == 1){
            int x = 0; cin >> x;
            st.push(x);
        }else if(k == 2){
            if(!st.empty())
                st.pop();

        }else{
            if(!st.empty())
                cout << st.top() << endl;
        }
    }

    return 0;
}
