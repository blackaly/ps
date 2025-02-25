#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

int uglies(int n, int divisor){

    while(n % divisor == 0)
        n /= divisor;

    return n;

}

bool isUgly(int n){

    if(n == 3 || n == 2 || n == 5 || n == 1 || n == 4) return true;

    n = uglies(n, 3);
    n = uglies(n, 2);
    n = uglies(n, 5);

    if(n == 1) return true;
    return false;
}

int main() {
    makefast;


    int l = 0, r = 0; cin >> l >> r;
    int cnt = 0;

    for(int i = l; i <= r; ++i)
            if(isUgly(i))
                ++cnt;

    cout << cnt;

    return 0;
}
