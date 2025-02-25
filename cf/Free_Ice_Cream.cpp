#include <iostream>

using namespace std;
int main() {

    int n = 0, x = 0; cin >> n >> x;

    int sum = x;
    int child = 0;
    while(n--){
        char a = ' '; cin >> a;
        long long b = 0; cin >> b;

        if(a == '-'){
            if(sum >= b) sum -= b;
            else {child++;continue;}
        }
        if(a == '+') sum += b;
    }


    cout << sum << " " << child;


    return 0;
}
