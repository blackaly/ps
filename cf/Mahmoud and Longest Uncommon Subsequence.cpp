#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    string a = "", b = ""; cin >> a >> b;


    if(a == b) cout << "-1";

    else cout << max(b.length(), a.length());

    return 0;
}
