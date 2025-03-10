#include <bits/stdc++.h>

using namespace std;
int main() {    
    int n;cin>>n;
    

    for(int i=0;i<n;++i){
        vector<int>vt(10e4+10,0);
        int a;cin>>a;
        int b;cin>>b;
        int cnt=1;
        vt[(int)a+b]++;
        vt[a*b]++;
        vt[abs(a-b)]++;
        vt[a%b]++;
        vt[b%a]++;

        for(int i=0;i<vt.size();++i){
            if(vt[i]==1)cnt++;
        }

        cout<<cnt<<endl;

    }

    

    return 0;
}