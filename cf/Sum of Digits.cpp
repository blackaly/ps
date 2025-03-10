#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;
    string s = ""; cin >> s;
    ll sum = 0;
    int cnt = 0;
    if(!(s.length() > 1)){cout << cnt; return 0;}
    long long n = s.length();
    for(long long i = 0; i < n; ++i)
        sum += s[i] - '0';

    ++cnt;

    while(sum >= 10){
         s = to_string(sum);
        sum = 0;
        n = s.length();
        for(long long i = 0; i < n; ++i){
            sum += s[i] - '0';
        }
        cnt++;
    }

    cout << cnt;
    return 0;
}
