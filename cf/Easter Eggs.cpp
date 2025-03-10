#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    char colors[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

    int n = 0; cin >> n;
    int i = 0;

    while(n--){
            if(i == 7)
                i = 3;
        cout << colors[i];
        i++;
    }

    return 0;
}
