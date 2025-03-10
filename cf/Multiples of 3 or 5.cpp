#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

   ll n = 0; cin >> n;
   int mx = 1;
   for(int i = 2; i * i <= n; ++i){
       mx = max(i, mx);
       while(n % i == 0){n /= i;}


   }

   mx = max((int)n, mx);

   cout << mx;

    return 0;
}
