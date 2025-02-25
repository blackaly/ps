#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0;  cin >> tt;

    while(tt--){
        int n = 0; cin >> n;
        stack<int> st;
        int car = 1;


        for(int i = 0; i < n; ++i){
            int x = 0; cin >> x;

            if(car == x)
                car++;
            else st.push(x);

            while(!st.empty()){
                if(st.top() == car){
                    car++;
                    st.pop();
                    continue;
                }break;
            }


        }

        if(st.empty())
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }


    return 0;
}
