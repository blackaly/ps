#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {

    string sample = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char shft = ' '; cin >> shft;
    string txt = ""; cin >> txt;

    int len = txt.length();
    string _txt = "";

    for(int i = 0; i < len; ++i){
        int pos = sample.find(txt[i]);
        if(shft == 'R'){
            _txt += sample[pos - 1];
        }else{
            _txt += sample[pos + 1];
        }
    }

    cout << _txt;

    return 0;
}
