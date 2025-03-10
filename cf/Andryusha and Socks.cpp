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
    vector<int> arr(n * 2, 0);
    vector<int> freq(200005, 0);

    for(int i = 0; i < n * 2; ++i) cin >> arr[i];

    int mx = 1;
    int counter = 0;

    for(int i = 0; i < n * 2; ++i){
        freq[arr[i]]++;
        if(freq[arr[i]] == 1)
            ++counter;
        else if(freq[arr[i]] == 2) --counter;
        mx = max(counter, mx);


    }

    cout << mx;

    return 0;
}
