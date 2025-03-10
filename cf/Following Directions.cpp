#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        int n = 0; cin >> n;
        string str = ""; cin >> str;
        int point_1 = 0;
        int point_2 = 0;
        for(int i = 0; i < n; ++i){
            if(str[i] == 'U') point_2++;
            if(str[i] == 'D') point_2--;

            if(str[i] == 'R') point_1++;

            if(str[i] == 'L') point_1--;

            if(point_1 == 1 && point_2 == 1)
            {
                cout << "YES" << endl;
                break;
            }
        }

        if(point_1 != 1 || point_2 != 1)
            cout << "NO" << endl;
    }

    return 0;
}
