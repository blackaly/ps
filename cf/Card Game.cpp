#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define makefast                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;
int main() {
    makefast;

    string strM = ""; cin >> strM;
    string strR = ""; cin >> strR;
    string strA = ""; cin >> strA;

    stack<char> stM;
    stack<char> stR;
    stack<char> stA;

    char ch = strM[0];


    reverse(strM.begin(), strM.end());
    reverse(strR.begin(), strR.end());
    reverse(strA.begin(), strA.end());


    for(int i = 0; i < strM.length(); ++i) stM.push(strM[i]);

    for(int i = 0; i < strR.length(); ++i) stR.push(strR[i]);

    for(int i = 0; i < strA.length(); ++i) stA.push(strA[i]);

    while(true){
        if(ch == 'm'){
            if(!stM.empty()){
                ch = stM.top();
                stM.pop();
            }else {cout << 'M'; break;}
        }else if(ch == 'r'){
            if(!stR.empty()){
                ch = stR.top();
                stR.pop();
            }else {cout << 'R'; break;}
        }else{
            if(!stA.empty()){
                ch = stA.top();
                stA.pop();
            }else {cout <<"A"; break;}
        }
    }


    return 0;
}
