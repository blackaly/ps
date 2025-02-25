#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

ll sm(vector<ll>& arr){

    ll sum = 0;
    for(int i = 0; i < arr.size(); ++i)
        sum += arr[i];

    return sum;
}

int main() {
    makefast;

    int n = 0; cin >> n;
    int m = 0; cin >> m;

    vector<ll> arr(n, 0);

    for(int i = 0; i < n; ++i) cin >> arr[i];

    while(m--){

        int x = 0; cin >> x;

        int start = 0, end = n - 1;

        while(start < end){
            int mid = start + (end - start) / 2;

            if(arr[mid] <= x)
                start = mid + 1;

            else if(arr[mid] > x){
                arr[mid] = arr[mid] - (arr[mid] - x);
            }

        }

        cout << sm(arr) << endl;

    }

    return 0;
}
