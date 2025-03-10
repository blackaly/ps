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
    deque<int> dq;

    while(q--){
        string str = ""; cin >> str;

        if(str == "toFront"){
            int x = 0; cin >> x;
            dq.push_front(x);
        }else if(str == "front" && !dq.empty()){
            cout << dq.front() << endl;
            dq.pop_front();
        }else if(str == "back" && !dq.empty()){
            cout << dq.back() << endl;
            dq.pop_back();
        }else if(str == "reverse"){
            if(!dq.empty()) reverse(dq.begin(), dq.end());
        }else if(str == "push_back"){
            int x = 0; cin >> x;
            dq.push_back(x);
        }else {
            cout << "No job for Ada?" << endl;
        }
    }

    return 0;
}
