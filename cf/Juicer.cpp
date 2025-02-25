#include <iostream>

using namespace std;
int main() {

    int n = 0, b = 0, d = 0; cin >> n >> b >> d;

    int sum = 0;
    int counter = 0;

    while(n--){
        int x = 0;
        cin >> x;

        if(x > b) continue;

        sum += x;

        if(sum > d){
            ++counter;
            sum = 0;
        }
    }

    cout << counter;

    return 0;
}
