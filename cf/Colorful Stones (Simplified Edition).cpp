#include <iostream>
using namespace std;
int main() {

    string t = ""; cin >> t;
    string s = ""; cin >> s;

    int len = s.length();
    int counter = 0;


    for(int i = 0; i < len; ++i){
        if(t[ans] == s[i]) ++counter;
        else continue;
    }

    cout << counter + 1;

    return 0;
}
