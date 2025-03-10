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
    n = n + 1;

    vector<int> vt(n, 0);

    for(int i = 1; i < n; ++i)
        cin >> vt[i];

    int sum = 0;
    int dollar = 0;

    for(int i = 0; i < n - 1; ++i)
    {
        if(vt[i] >= vt[i + 1])
            sum += vt[i] - vt[i + 1];
        else{
            if(sum >= vt[i + 1] - vt[i])
                sum -= vt[i + 1] - vt[i];
            else
            {
                dollar += (vt[i + 1] - vt[i]) - sum;
                sum = 0;
            }
        }
    }

    cout << dollar;

    return 0;
}
