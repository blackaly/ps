#include <iostream>

using namespace std;
int main() {

    int n = 0, k = 0; cin >> n >> k;
    string txt = "";

    for(int i = 0; i < n; ++i)
        txt += 'a' + (i % k);

    cout << txt;

    return 0;
}
