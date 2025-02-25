#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0; cin >> n;
    int cnt = 0;

    vector<int> arr;

    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            arr.push_back(i);
            ++cnt;
        }
    }

    cout << cnt << endl;

    for(int i = 0; i < arr.size(); ++i)
        cout << arr[i] << ' ';

    return 0;
}
