#include <bits/stdc++.h>

using namespace std;

int main() {

		int t; cin >> t;

		while(t--){
			long long n;cin>>n;
			long long m;cin>>m;

            if(n==m){
			    cout << "YES"<<endl;
			    continue;
			}

			if(n%3!=0 || m > n){
				cout << "NO" << endl;
				continue;
			}



			bool ok = false;
			long long k = n;

			while(k!=0){
				if(m==k){ok = true;break;}
				k/=3;
			}

			if(ok){
				cout << "YES" << endl;
				continue;
			}
			k = n;
			while(k!=0){
				if(m==k){
					ok = true;
					break;
				}
				k=((2*k)/3);
			}

			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;

		}

	return 0;
}
