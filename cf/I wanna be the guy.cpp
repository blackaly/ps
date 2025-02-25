#include <iostream>
#include <algorithm>


using namespace std;
int main() {


    int n = 0; cin >> n;
    int* freq = new int [n + 1];

    int p = 0; cin >> p;

    for(int i = 0; i < p; ++i){
        int a = 0; cin >> a;
        freq[a]++;
    }

    int q = 0; cin >> q;

    for(int i = 0; i < q; ++i){
        int a = 0; cin >> a;
        freq[a]++;
    }
    bool flag =  false;
    for(int i = 0; i <= n; ++i){
        if(freq[i] != 0) flag = true;
        else{flag = false; break;}
    }

    if(flag) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";


    return 0;
}






4
3 1 2 3
2 2 4

4
3 1 2 3
2 2 3

10
5 8 6 1 5 4
6 1 3 2 9 4 6

10
8 8 10 7 3 1 4 2 6
8 9 5 10 3 7 2 4 8

10
9 6 1 8 3 9 7 5 10 4
7 1 3 2 7 6 9 5



