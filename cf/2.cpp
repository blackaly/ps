 
#include <bits/stdc++.h>
using namespace std;
#define hi ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long

int main(){

    hi;
	
    int n = 0; cin >> n;
    int k = 0; cin >> k;
    
    vector<int> vt(n, 0);
    int a = 0;
    vector<ll> sum;
    sum.push_back(0);
    for(int i = 0; i < n; ++i)
    {
        cin >> vt[i];
        a += vt[i];
        sum.push_back(a);
    }
    
    int mn = INT_MAX;
    int indx = 0;
    int l = 1;
    for(int i = k; i < sum.size() ; ++i){
        if(sum[i] - sum[l - 1] < mn){
            mn = sum[i] - sum[l - 1]; 
            indx = l;
        }
        l++;
    }
    cout << indx;

	return 0;
}