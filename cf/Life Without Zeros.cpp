#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;


int remove_zeros(int x){
    int res = 0;
    int b = 1;
    while(x != 0){
        int digit = x % 10;
        if(!digit) {x /= 10; continue;}
        res += digit * b;
        b *= 10;
        x /= 10;
    }

    return res;
}

int main() {
    makefast;

    int x = 0; cin >> x;
    int y = 0; cin >> y;

    int sum = x + y;
    if(remove_zeros(x) + remove_zeros(y) == remove_zeros(sum)) cout << "YES";
    else cout << "NO";

    return 0;
}
