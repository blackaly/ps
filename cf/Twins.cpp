#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int n = 0; cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; ++i) cin >> arr[i] ;

    int gsum = 0;
    for(int i = 0; i < n; ++i) gsum += arr[i];

    int sum = 0;
    int cnt = 0;

    sort(arr, arr + n);

    for(int i = n - 1; i >= 0; --i){
        sum += arr[i];
        cnt++;
        if(sum > gsum - sum)
            break;
    }

    cout << cnt;

    return 0;
}
