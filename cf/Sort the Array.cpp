#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define fast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

int main() {
    fast;

    int n; cin >> n;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; ++i) cin >> arr[i];

    vector<int> arr2(arr);
    sort(arr2.begin(), arr2.end());

    int l = -1, r = -1;

    for(int i = 0; i < n; ++i){
        if(arr[i] != arr2[i]){
            l = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; --i){
        if(arr[i] != arr2[i]){
            r = i;
            break;
        }
    }

    if(l == -1 || r == -1){
        cout << "yes" << endl << "1 1";
        return 0;
    }

    reverse(arr.begin() + l, arr.begin() + r + 1);

    for(int i = 0; i < n; ++i){
        if(arr[i] != arr2[i]){
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n" << (l+1) << " " << (r+1);

    return 0;

}
