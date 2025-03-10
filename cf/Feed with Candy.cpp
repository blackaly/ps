#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    stack<int> st;
    int n = 0; cin >> n;
    int x = 0; cin >> x;
    int cnt = 0;

    while(n--){
        int type = 0; cin >> type;
        int h = 0; cin >> h;
        int mass = 0; cin >> mass;



        if(st.empty()){
            if(h <= x){
                ++cnt;
                x += mass;
            }
            st.push(type);
        }
        else{
            if(st.top() == type) continue;
            else st.push(type);

            if(h > x)
                continue;


            x += mass;
            ++cnt;
        }
    }


    cout << cnt;

    return 0;
}
