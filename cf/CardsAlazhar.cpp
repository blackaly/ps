#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        deque<int> dq;

        int n = 0; cin >> n;

        for(int i = 1; i <= n; ++i) dq.push_back(i);

        cout << dq[0] << ' ';
        dq.pop_front();
        while(dq.size() != 1){
            dq.push_back(dq[0]);
            dq.pop_front();
            cout << dq.front() << ' ';
            dq.pop_front();
        }

        cout << endl << dq.front() << endl;;

    }

    return 0;
}
