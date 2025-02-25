#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)


using namespace std;
int main() {
    makefast;

    int n = 0, k = 0; cin >> n >> k;
    const int SIZE = (n * 2) + 1;
    vector<int>arr(SIZE, 0);

    for(int i = 0; i < SIZE; ++i)
        cin >> arr[i];


    for(int i = 0; i < SIZE; i++){
        // int index = (i * 2) + 1;
        if(arr[i] - 1 > arr[i- 1] && arr[i] - 1 > arr[i + 1])
            arr[i]--;
    }


    for(int i = 0; i < SIZE; ++i)
        cout << arr[i] << " ";


    return 0;
}
