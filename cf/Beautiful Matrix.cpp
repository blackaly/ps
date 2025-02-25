#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    int index = 0;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            int x = 0; cin >> x;

            if(x == 1){
                index = abs((j + 1) - 3) + abs((i + 1) - 3);
                break;
            }
        }
    }

    cout << index;

    return 0;
}
