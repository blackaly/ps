#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define fast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

int main() {
    fast;

    string n;cin>> n; 

    if(n.size() == 1){
        cout << (n + n);
        return 0;
    }

    string temp = n;
    reverse(n.begin(), n.end());
    string k = temp + n; 
    cout << k;
    return 0;
}
