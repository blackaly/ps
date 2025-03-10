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

    if(n == 3 || n == 2){
        cout << "NO SOLUTION";
        return 0;
    }


    if(n % 2 != 0){
        for(int i = 1; i <= n; i += 2)
        cout << i << " ";

        for(int i = 2; i < n; i += 2)
        cout << i << " ";
    }

    else{
        for(int i = 2; i <= n; i += 2)
        cout << i << " ";

    for(int i = 1; i < n; i += 2)
        cout << i << " ";
    }


    return 0;
}
