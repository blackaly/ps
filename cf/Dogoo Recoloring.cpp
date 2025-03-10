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
    string s = ""; cin >> s;
    vector<int> arr('z' + 1, 0);

    for(int i = 0; i < s.length(); ++i){
        arr[s[i]]++;
        if(arr[s[i]] >= 2) break;
    }

    if(*max_element(arr.begin(), arr.end()) >= 2 || n == 1)
        cout << "Yes";
    else cout << "No";

    return 0;
}
