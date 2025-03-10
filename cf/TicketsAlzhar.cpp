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
    queue<int> q;

    while(n--){
        int x = 0; cin >> x;
        int y = 0; cin >> y;

        if(x == 1)
            q.push(y);

        else{
            if(q.front() == y)
                cout << "Yes" << endl;
            else cout << "No" << endl;
            q.pop();
        }
    }


    return 0;
}
