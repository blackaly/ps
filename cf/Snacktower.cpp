#include <bits/stdc++.h>

using namespace std;
int main() {

    int n = 0; cin >> n;
    vector<int> arr(n, 0);

    int next = n;

    for(int i = 0; i < n; ++i)
    {
        int k = 0; cin >> k;
        arr[k] = 1;
        while(arr[next]){
            cout << next-- << " ";
        }

        cout << endl;
    }
    return 0;
}
