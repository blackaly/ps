#include <iostream>

using namespace std;
int main() {

    int arr[4] = {0};

    for(int i = 0; i < 4; ++i) cin >> arr[i];

    int sum = 0;

    string t = ""; cin >> t;
    int len = t.length();


    for(int i = 0; i < len; ++i)
        sum += arr[(t[i] - '0') - 1];

    cout << sum;

    return 0;
}
