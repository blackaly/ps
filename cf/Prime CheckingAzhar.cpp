#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

bool isPrime(ll n){
    if(n == 2) return true;
    else if(n % 2 == 0 || n < 2) return false;

    for(ll i = 3; i <= sqrt(n); i += 2)
        if(n % i == 0) return false;

    return true;
}

int main() {
    makefast;


    ll n = 0; cin >> n;

    isPrime(n) ? cout << "YES" : cout << "NO";


    return 0;
}
