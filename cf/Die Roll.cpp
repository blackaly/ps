#include <iostream>
using namespace std;
int main() {

    int y = 0, w = 0; cin >> y >> w;

    int _max = max(y, w);

    if(_max == 1) cout << "1/1";
    else if(_max == 2) cout << "5/6";
    else if(_max == 3) cout << "2/3";
    else if(_max == 4) cout << "1/2";
    else if(_max == 5) cout << "1/3";
    else cout << "1/6";

    return 0;
}
