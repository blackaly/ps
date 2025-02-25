#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int n = 0; cin >> n;
    int a = 0, b = 4126;

    int counter = 0;

    for(int i = 0; i < n; ++i){
        int k = b;
        cin >> a >> b;
        if(a != b) {
            cout << "rated";
            return 0;
        } if(b > k){
            cout << "unrated";
            return 0;
        }

    }

    cout << "maybe";


    return 0;
}
