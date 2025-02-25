#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

   int n = 0, t = 0; cin >> n >> t;

    if(n == 1 && t == 10){cout << "-1"; return 0;}
    else if(t == 10){
        for(int i = 0; i < n - 1; ++i)
            cout << "0";

            // 1010101010101 => 10^n
    }
    else{
        for(int i = 0; i < n; ++i){
            cout << t;
        }
    }


    return 0;
}
