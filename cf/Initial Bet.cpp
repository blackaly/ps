#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

bool isPrime(int n){

    if(n <= 2 || n % 2 == 0) return false;

    int x = sqrt(n);
    for(int i = 3; i <= x; i += 2){
        if(n % i == 0) return false;
    }

    return true;
}

int main() {
    makefast;

    int sum = 0;

    for(int i = 0; i < 5; ++i)
    {
        int x=  0; cin >> x;
        sum += x;
    }

    if(sum % 5 != 0 || sum < 5) cout << -1;
    else
        cout << sum / 5;

    return 0;
}
