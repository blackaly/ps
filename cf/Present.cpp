#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int n = 0; cin >> n;
    int* arr = new int[n];
    int* cnt = new int[n];
    for(int i = 1; i <= n; ++i){
         cin >> arr[i];
         cnt[arr[i]] = i;
    }

    for(int i = 1; i <= n; ++i)
        cout << cnt[i] << " ";


    return 0;
}
