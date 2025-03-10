#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;


bool sorted(pair<string, int> p, pair<string, int> _p){
    if(p.second == _p.second)
        return p.first < _p.first;

    return p.second > _p.second;
}


int main() {
    makefast;

    map<string, ll> mp;
    vector<pair<string, ll>> vt;
    string name = ""; cin >> name;
    int n = 0; cin >> n;

    for(int i = 0; i < n; ++i){
        string x = ""; cin >> x;
        string action = ""; cin >> action;
        string y = "";

        if(action == "likes"){
            cin >> y;
            string pp = ""; cin >> pp;

        }else{
            string pp = ""; cin >> pp;
            cin >> y;
            string ss = ""; cin >> ss;
        }

        y = y.substr(0, y.find('\''));

        if(x == name){
            if(action == "posted") mp[y] += 15;
            else if(action == "commented") mp[y] += 10;
            else mp[y] += 5;
        }if(y == name){
            if(action == "posted") mp[x] += 15;
            else if(action == "commented") mp[x] += 10;
            else mp[x] += 5;
        }
    }

    for(auto const& a: mp)
        vt.push_back(make_pair(a.first, a.second));

    sort(vt.begin(), vt.end(), sorted);

    for(int i = 0; i < vt.size(); ++i)
    {
        if(vt[i].first == name) continue;
        cout << vt[i].first << endl;
    }

    return 0;
}
