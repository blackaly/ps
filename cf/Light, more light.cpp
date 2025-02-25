#include <iostream>
#include <cmath>
/* That very expensive solution, because of moduls*/

using namespace std;
int main() {

/* That very expensive solution, because of moduls*/
/*
    long long n = 0;
    bool state = false;
    while(cin >> n){
        if(n == 0) break;
        for(int i = 1; i <= n; ++i){
            if(n % i == 0){
                if(!state) state = true;
                else state = false;
            }
        }
        cout << (state ? "yes": "no");
    }

*/

/* That the optimal solution */
    int n = 0;
    while(cin >> n && n){
        int k = sqrt(n);
        if(floor(k * k) == n) cout << "yes";
        else cout << "no";
    }


    return 0;
}
