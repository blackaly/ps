#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

void display(deque<int>& dq){
    int ln = dq.size();

    for(int i = 0; i < ln; ++i) cout << dq[i] << ' ';
}

int main() {
    makefast;

    int n = 0; cin >> n;
    int m = 0; cin >> m;
    deque<int> dq;

    for(int i = 0; i < n; ++i)
    {
        int x = 0; cin >> x;
        dq.push_back(x);
    }

    while(m--){
        int x = 0; cin >> x;

        if(x == 2){
            int idx = 0; cin >> idx;
            int val = 0; cin >> val;

            if(idx == 1)
                dq.push_front(val);
            else
                dq.push_back(val);
        }
        else{
            reverse(dq.begin(), dq.end());
        }

    }

    cout << dq.size() << endl;
    display(dq);



    return 0;
}
