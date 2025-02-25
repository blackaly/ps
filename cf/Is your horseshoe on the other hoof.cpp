#include <iostream>
#include <set>
using namespace std;
int main() {

    set<long long> _set;
    int arr[4] = {0};
    for(int i = 0; i < 4; ++i) {
        cin >> arr[i];
        _set.insert(arr[i]);
    }

    cout << (4 - _set.size());

    return 0;
}
