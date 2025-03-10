#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    priority_queue<ll> pq;

    int q=  0; cin >> q;

    while(q--){
        string str = ""; cin >> str;

        if(str == "push"){
            ll x = 0; cin >> x;
            pq.push(x);
        }else if(str == "top")
            cout << pq.top() << endl;
        else
            pq.pop();

    }

    return 0;
}
