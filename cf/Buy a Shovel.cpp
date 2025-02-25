#include <iostream>
using namespace std;
int main() {

    int k = 0, n = 0; cin >> k >> n;
    int counter = 0;

    for(int i = 1; i < 10; ++i){
        int a = (i * k) % 10;
        if(a == 0 || a == n){counter = i; break;}
    }
    cout << counter<< endl;

    return 0;
}
