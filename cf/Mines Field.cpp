#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int n = 0; cin >> n;
    int m = 0; cin >> m;

    vector<char> row(m, 0);

	vector<vector<char>> v(n, row) ;

    int num_of_dots = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            char x = 0; cin >> x;
            if(x == '.')++num_of_dots;
            v[i][j] = x;
        }
    }




    vector<int> offsetx = {0, 1, 0, -1};
    vector<int> offsety = {-1, 0, 1, 0};


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(v[i][j] == 'm'){
                for(int k = 0; k < 4; ++k){
                    int x = i + offsetx[k];
                    int y =  j + offsety[k];

                    if(x < 0 || x > i | y < 0 || y > j) continue;

                    if(v[y][x] == '.') --num_of_dots;
                }
            }
        }
    }


    cout << num_of_dots;


    return 0;
}
