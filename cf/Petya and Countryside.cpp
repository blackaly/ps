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
    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    int cnt = 1;
    int mx = 1;
    for(int i = 0; i < n; ++i){
        int l = i;
        int r = i + 1;

        while(l > 0){

            if(arr[l - 1] <= arr[l])
                cnt++;
            else break;
            l--;
        }


        while(r < n){
            if(arr[r - 1] >= arr[r])
                cnt++;
            else break;
            r++;
        }
        mx = max(cnt, mx);
        cnt = 1;
    }

    cout << mx;

    return 0;
}
