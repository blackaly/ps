#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

void toPrimes(int n, vector<int>& primes){

    for(int i = 2; i <= n; ++i){
        if(!primes[i]){
            for(int j = i * 2; j <= n; j += i)
                primes[j]++;
        }
    }
}

int main() {
    makefast;

    int n = 0; cin >> n;
    vector<int> primes(n + 1, 0);
    toPrimes(n, primes);
    int cnt = 0;

    for(int i = 1; i <= n; ++i)
        if(primes[i] == 2) cnt++;

    cout << cnt;


    return 0;
}
