#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    long long n = 0; cin >> n;
    int x = 11;
    int counter = 0;
    int y = 0;
    if(n <= 9){cout << 0; return 0;}

    while(x >= 10){
        y += n % 10;
        n /= 10;

        if(n == 0){
         n = y;
         x = y;
         y = 0;
         ++counter;
        }
    }

    cout << counter << endl;

    return 0;
}
