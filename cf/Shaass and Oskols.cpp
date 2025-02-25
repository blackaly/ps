
#include <iostream>
using namespace std;
int main() {

    int n = 0; cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; ++i) cin >> arr[i];

    int x = 0, y = 0;
    int m = 0; cin >> m;



    while(m--){
        cin >> x >> y;
        --x;  // for simplicity;
        if(x != 0)
            arr[x - 1] += y - 1;

        if(x != n - 1)
            arr[x + 1] += arr[x] - y;

        arr[x] = 0;
    }

    for(int i = 0; i < n; ++i) cout << arr[i] << endl;

    return 0;
}
