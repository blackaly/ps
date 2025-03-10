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

    for(int i = 0; i < (n + 1); ++i){
        int x = 0;
        for(int j = n * 2; j > i*2; --j)
            cout << " ";

        for(int j = 0; j <= i; ++j, x++)
            cout << x << ' ';

        x-=2;

        for(int j = 0; j <= i - 1; ++j, x--)
            cout << x << ' ';
        cout << endl;

    }

    for(int i = 0; j < n; ++i){
        int x = 0;
        for(j = 0)
    }


    return 0;
}
