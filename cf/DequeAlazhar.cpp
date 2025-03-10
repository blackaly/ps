#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int q = 0; cin >> q;

    deque<ll> dq;

    while(q--){
        string str = ""; cin >> str;

        if(str == "push_back"){
            ll x = 0; cin >> x;
            dq.push_back(x);
        }else if(str == "push_front"){
            ll x = 0; cin >> x;
            dq.push_front(x);
        }else if(str == "front")
            cout << dq.front() << endl;

        else if(str == "back")
            cout << dq.back() << endl;
        else if(str == "print")
        {
            ll x =  0; cin >> x;
            cout << dq[x - 1] << endl;
        }else if(str == "pop_front")
            dq.pop_front();
        else
            dq.pop_back();

    }

    return 0;
}
