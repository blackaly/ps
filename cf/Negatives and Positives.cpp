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
        vector<int> arr(n, 0);

        for(int i = 0; i < n; ++i)
            cin >> arr[i];

        int nega = 0;
        int sum = 0;

        for(int i = 0; i < n; ++i){
            if(arr[i] < 0){
                arr[i] = -arr[i];
                ++nega;
            }

            sum += arr[i];
        }


        if(!(nega % 2 == 0)) sum -= 2 * *min_element(arr.begin(), arr.end());

        cout << sum << endl;
    }


    return 0;
}
