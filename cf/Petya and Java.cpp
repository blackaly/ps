#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    long double n = 0; cin >> n;

    if(n <= 127) cout << "byte";
    else if(n <= 32767) cout << "short";
    else if(n <= 2147483647) cout << "int";
    else if(n <= 9223372036854775807) cout << "long";
    else cout << "BigInteger";

    cout << endl << n << endl;


    return 0;
}
