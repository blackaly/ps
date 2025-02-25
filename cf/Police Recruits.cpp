#include <iostream>

using namespace std;
int main() {

    int n = 0; cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; ++i) cin >> arr[i];

    int counter = 0;
    int recurited = 0;
    for(int i = 0; i < n; ++i){
        if(recurited < 0) recurited = 0;

        if(arr[i] > 0) recurited += arr[i];
        else if(arr[i] == -1) recurited += -1;

        if(recurited < 0) counter++;
    }

    cout << counter;

    return 0;
}
