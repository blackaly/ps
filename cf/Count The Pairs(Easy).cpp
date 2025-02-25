#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

void cus_sort(vector<int>& arr){
    int len = arr.size();

    for(int i = 0; i < len; ++i){
        for(int j = 0; j < len; ++j){
            if(arr[i] < arr[j]){
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
}

int main() {
    makefast;

    int n = 0; cin >> n;
    vector<int> arr(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    cus_sort(arr);

    ll sum = arr[0] + arr[n - 1];

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            if(arr[i] + arr[j] == sum)
                ++cnt;
        }
    }

    cout << cnt;

    return 0;
}
