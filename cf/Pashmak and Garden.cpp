#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int a;
    string str = "";
    int cnt = 0;
    int cntstr = 0;
    while((a = getchar()) != EOF){
        if(a == '\n') break;
        str += (char)a;
        if(a == '?' || a == '*') {cntstr++; continue;}
        cnt++;
    }
    int n = 0; cin >> n;

    string res = " ";

    if(n - cnt > 0){
        if(cntstr > n - cnt ){
            int removed = n - cnt;
            for(int i = 1; i < n; ++i){
                if((str[i] == '?' || str[i] == '*') && (str[i - 1] != '?'  || str[i - 1] != '*') && removed)
                {
                    removed--;
                    continue;
                }
                if(str[i] == '?' || str[i] == '*') continue;

                res += str[i];
            }
        }else {cout << "Impossible"; return 0;}
    }

    cout << res;

    return 0;
}
