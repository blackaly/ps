#include <iostream>
#include <set>
using namespace std;
int main() {

    set<char> a;

    int c = 0;

    while((c = getchar()) != EOF){
        if(c == '\n') break;

        if(c - (int)'a' < 0) continue;
        else if(c - (int)'a' > 26) continue;
        else a.insert(c);

    }

    int counter = 0;

    for(auto i: a) counter++;

    cout << counter - 1;


    return 0;
}
