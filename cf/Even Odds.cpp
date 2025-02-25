#include <iostream>
using namespace std;
int main() {

    long long n = 0, a = 0; cin >> n >> a;

    if(n % 2 == 0){
        if(a <= n / 2){
            cout << (a * 2) - 1;
        }else{
            cout << (a - (n / 2)) * 2;
        }
    } else{
        if(a <= (n / 2) + 1){
            cout << (a * 2) - 1;
        }else{
            cout << (a - ((n / 2) + 1)) * 2;
        }
    }

    return 0;
}
