#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string file = "C:\\folder1\\folder2\\folder3\\file1.txt";

    while(1){
        int pos = file.find_last_of("\\");

        if(pos == 2) break;

        file.erase(file.begin() + pos, file.end());

        cout << file << endl;
    }



    return 0;
}
