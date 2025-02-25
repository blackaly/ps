#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    int tt = 0; cin >> tt;

    while(tt--){
        int n = 0; cin >> n;
        vector<int> arr(n, 0);
        int mn = INT_MAX;
        int indc = 0;
        for(int i = 0; i < n; ++i){
            cin >> arr[i];

            if(arr[i] < mn){mn = arr[i]; indc = i;}
        }

        bool yea = false;

        for(int i = 0; i < indc; ++i) if(arr[i] < arr[i + 1]) yea = true;

        if(yea) {cout << "NO" << endl; continue;}

        for(int i = indc; i < n - 1; ++i) if(arr[i] > arr[i + 1]) yea = true;

        if(yea) {cout << "NO" << endl;}
        else cout << "YES" << endl;




    }


    return 0;
}
