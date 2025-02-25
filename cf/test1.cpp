#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt ;

    while(tt--){
        int n = 0, m = 0; cin >> n >> m;

        int cnt = 0;
        queue<int> qu;

        int priorty = 9;


        for(int i = 0; i < n; ++i){
            int x = 0; cin >> x;
            qu.push(x);
        }


        while(priorty == m){

            if(qu.front() == priorty){
                --priorty;
                qu.pop();
                cnt++;
            }else{
                int x = qu.front();
                qu.pop();
                q.push(x);
            }

        }
    }


    return 0;
}
