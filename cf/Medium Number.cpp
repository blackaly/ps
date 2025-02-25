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
        vector<int> arr(3, 0);

        for(int i = 0; i < 3; ++i)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        cout << arr[1] << endl;
    }

    return 0;
}
