#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    vector<char> v;

    int c = 0;
    int x = 0;


    while((c = getchar()) != EOF){
        if(c == '\n') break;
        if(c == '+') continue;
        else v.push_back(c);
    }

    sort(v.begin(), v.end());

    int len = v.size();

    for(int i = 0; i < len; ++i){
        if(i == len - 1) cout << v[i];
        else cout << v[i] << "+";
    }


    return 0;
}
