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

    int sum = 0;
    int matchbox_sum = 0;
    int a = 0, b = 0;

    while(m--){
        int temp = b;
        cin >> a >> b;

        if(temp > b)
        {
            sum -= b * a;
            sum += b * a;
            matchbox_sum += a;
        }
        else{
            sum += b * a;
            matchbox_sum += a;
        }

        if(matchbox_sum > n)
        {
            matchbox_sum -= a;
            sum -= b * a;
        }
    }

    cout << sum;

    return 0;
}
